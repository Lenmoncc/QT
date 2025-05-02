#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QNetworkInterface>
#include <QMessageBox>
#include <QDateTime>
#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , sendTimer(new QTimer(this))
{
    ui->setupUi(this);

    // 初始化界面
    //ui->network_protocol->addItems({"UDP", "TCP客户端", "TCP服务器"});
    ui->port->setValidator(new QIntValidator(0, 65535, this));
    ui->send_time->setRange(1, 99999);

    // 状态栏初始化
    statusLabel = new QLabel("状态: 未连接", this);
    sentLabel = new QLabel("发送: 0 字节", this);
    receivedLabel = new QLabel("接收: 0 字节", this);
    ui->statusbar->addWidget(statusLabel);
    ui->statusbar->addPermanentWidget(sentLabel);
    ui->statusbar->addPermanentWidget(receivedLabel);

    // 定时器连接
    connect(sendTimer, &QTimer::timeout, this, &MainWindow::on_send_clicked);
    updateNetworkInterfaces();
}

MainWindow::~MainWindow()
{
    delete ui;
    if(udpSocket) udpSocket->deleteLater();
    if(tcpSocket) tcpSocket->deleteLater();
    if(tcpServer) tcpServer->deleteLater();
}

//// 网络协议切换
//void MainWindow::on_network_protocol_currentIndexChanged(int index)
//{
//    Q_UNUSED(index)
//    ui->ip_addr->setEnabled(ui->network_protocol->currentText() == "TCP客户端");
//    ui->listen->setText(ui->network_protocol->currentText().contains("TCP") ? "监听" : "启动");
//}

// 刷新IP地址
void MainWindow::on_refresh_clicked()
{
    updateNetworkInterfaces();
}

// 监听/启动服务
void MainWindow::on_listen_clicked()
{
    const QString protocol = ui->network_protocol->currentText();
    const quint16 port = ui->port->text().toUShort();

    if(protocol == "UDP"){
        if(!udpSocket){
            udpSocket = new QUdpSocket(this);
            connect(udpSocket, &QUdpSocket::readyRead, this, &MainWindow::socketReadyRead);
        }
        if(udpSocket->state() == QUdpSocket::BoundState){
            udpSocket->close();
            statusLabel->setText("UDP已关闭");
        }else if(udpSocket->bind(QHostAddress::Any, port)){
            statusLabel->setText(QString("UDP监听:%1").arg(port));
        }
    }
    else if(protocol == "TCP服务器"){
        if(!tcpServer){
            tcpServer = new QTcpServer(this);
            connect(tcpServer, &QTcpServer::newConnection, this, &MainWindow::newTcpConnection);
        }
        if(tcpServer->isListening()){
            tcpServer->close();
            statusLabel->setText("服务器已关闭");
        }else if(tcpServer->listen(QHostAddress::Any, port)){
            statusLabel->setText(QString("服务器监听:%1").arg(port));
        }
    }
    updateStatusBar();
}

// TCP客户端连接
void MainWindow::on_connect_clicked()
{
    if(!tcpSocket) tcpSocket = new QTcpSocket(this);

    if(tcpSocket->state() == QAbstractSocket::ConnectedState){
        tcpSocket->disconnectFromHost();
    }else{
        tcpSocket->connectToHost(ui->ip_addr->text(), ui->port->text().toUShort());
        connect(tcpSocket, &QTcpSocket::connected, [this](){
            statusLabel->setText(QString("已连接至%1:%2")
                .arg(tcpSocket->peerAddress().toString())
                .arg(tcpSocket->peerPort()));
        });
        connect(tcpSocket, &QTcpSocket::disconnected, this, &MainWindow::tcpDisconnected);
        connect(tcpSocket, &QTcpSocket::readyRead, this, &MainWindow::socketReadyRead);
    }
}

// 数据接收处理
void MainWindow::socketReadyRead()
{
    if(isReceivingPaused) return;

    QByteArray data;
    if(udpSocket){
        while(udpSocket->hasPendingDatagrams()){
            data.resize(udpSocket->pendingDatagramSize());
            udpSocket->readDatagram(data.data(), data.size());
        }
    }else if(tcpSocket){
        data = tcpSocket->readAll();
    }

    bytesReceived += data.size();
    appendRecvData(data);
    updateStatusBar();
}

// 发送数据
void MainWindow::on_send_clicked()
{
    QString rawData = ui->sendEdit->toPlainText();
    if(rawData.isEmpty()) return;

    QByteArray sendData;
    if(ui->hex_send->isChecked()){
        sendData = QByteArray::fromHex(rawData.replace(" ", "").toLatin1());
    }else{
        sendData = rawData.toUtf8();
    }

    bytesSent += sendData.size();
    sendNetworkData(sendData);
    updateStatusBar();

    //将发送的内容显示到接收框
    if(ui->clk_recv->isChecked()){
        QString timestamp = QDateTime::currentDateTime().toString("[hh:mm:ss] ");
        rawData.prepend(timestamp);
    }

    if(ui->hex_recv->isChecked()){
        QString hexData = sendData.toHex(' ').toUpper();
        if(ui->clk_recv->isChecked()){
            hexData.prepend(QDateTime::currentDateTime().toString("[hh:mm:ss] "));
        }
        ui->recvEdit->appendHtml(hexData);
    } else {
        ui->recvEdit->appendHtml(rawData);
    }
}

// 定时发送设置
//void MainWindow::on_send_time_editingFinished()
//{
//    bool ok;
//    int interval = ui->send_time->text().toInt(&ok);

//    if(ok && interval > 0){
//        sendTimer->setInterval(interval);
//        sendTimer->start();
//        statusLabel->setText(QString("定时间隔已设置为 %1 ms").arg(interval));
//    }else{
//        sendTimer->stop();
//        QMessageBox::warning(this, "错误", "请输入有效的正整数值");
//        ui->send_time->clear();
//    }
//}

// 状态栏更新
void MainWindow::updateStatusBar()
{
    sentLabel->setText(QString("发送: %1 字节").arg(bytesSent));
    receivedLabel->setText(QString("接收: %1 字节").arg(bytesReceived));
}

// 其他辅助函数
void MainWindow::updateNetworkInterfaces()
{
    ui->ip_addr->clear();
    foreach(const QHostAddress &address, QNetworkInterface::allAddresses()){
        if(address.protocol() == QAbstractSocket::IPv4Protocol && !address.isLoopback()){
            ui->ip_addr->setText(address.toString());
            break;
        }
    }
}

// 发送网络数据
void MainWindow::sendNetworkData(const QByteArray &data)
{
    const QString protocol = ui->network_protocol->currentText();
    const quint16 port = ui->port->text().toUShort();
    const QHostAddress address = QHostAddress(ui->ip_addr->text());

    if (protocol == "UDP") {
        if (udpSocket) {
            udpSocket->writeDatagram(data, address, port);
        }
    } else if (protocol == "TCP客户端") {
        if (tcpSocket && tcpSocket->state() == QAbstractSocket::ConnectedState) {
            tcpSocket->write(data);
        }
    } else if (protocol == "TCP服务器") {
        if (tcpSocket && tcpSocket->state() == QAbstractSocket::ConnectedState) {
            tcpSocket->write(data);
        }
    }
}

void MainWindow::appendRecvData(const QByteArray &data)
{
    QString displayData;
    if(ui->hex_recv->isChecked()){
        displayData = data.toHex(' ').toUpper();
    }else{
        displayData = QString::fromUtf8(data);
    }

    QString timestamp = "";
    if(ui->clk_recv->isChecked()){
        timestamp = QDateTime::currentDateTime().toString("[hh:mm:ss ");
    }

    QString sourceLabel = "";
    QString protocol = ui->network_protocol->currentText();
    if (protocol == "UDP") {
        sourceLabel = "UDP]";
    } else if (protocol == "TCP客户端") {
        sourceLabel = "客户端]";
    } else if (protocol == "TCP服务器") {
        sourceLabel = "服务器端]";
    }

    displayData.prepend(timestamp + sourceLabel + " ");
    ui->recvEdit->appendHtml(displayData);
}

// 接收设置功能
void MainWindow::on_clr_recv_clicked()
{
    ui->recvEdit->clear();
    bytesReceived = 0;
    updateStatusBar();
}

void MainWindow::on_pause_recv_clicked()
{
    isReceivingPaused = ui->pause_recv->isChecked();
    statusLabel->setText(isReceivingPaused ? "状态: 接收已暂停" : "状态: 接收正常");
}

// 发送设置功能
void MainWindow::on_clr_send_clicked()
{
    ui->sendEdit->clear();
    bytesSent = 0;
    updateStatusBar();
}

// TCP服务器新连接
void MainWindow::newTcpConnection()
{
    tcpSocket = tcpServer->nextPendingConnection();
    connect(tcpSocket, &QTcpSocket::readyRead, this, &MainWindow::socketReadyRead);
    connect(tcpSocket, &QTcpSocket::disconnected, this, &MainWindow::tcpDisconnected);
    statusLabel->setText(QString("新客户端连接: %1").arg(tcpSocket->peerAddress().toString()));
}

void MainWindow::tcpDisconnected()
{
    statusLabel->setText("客户端已断开");
    tcpSocket->deleteLater();
    tcpSocket = nullptr;
}


void MainWindow::on_clk_send_stateChanged(int state)
{
    if (state == Qt::Checked) {
        bool ok;
        int interval = ui->send_time->text().toInt(&ok);
        if (ok && interval > 0) {
            sendTimer->setInterval(interval);
            sendTimer->start();
            statusLabel->setText(QString("定时间隔已设置为 %1 ms").arg(interval));
        }
    } else {
        sendTimer->stop();
        statusLabel->setText("定时发送已停止");
    }
}
