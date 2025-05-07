#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initSerialPort();
    scanAndAddSerialPorts();
    initTimer();
    initStatusBar();

    ui->sendEdit->setPlainText("Hello, World!");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete serialPort;
    delete timSend;
}

void MainWindow::initSerialPort(){
    serialPort = new QSerialPort(this);
    connect(serialPort, SIGNAL(readyRead()), this, SLOT(manual_serialPortReadyRead()));
}

void MainWindow::scanAndAddSerialPorts(){
    ui->serialportCBox->clear();
    //通过QSerialPortInfo查找可用串口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        ui->serialportCBox->addItem(info.portName());
    }
}

void MainWindow::initStatusBar() {
    // 初始化发送、接收计数为0
    sendNum = 0;
    recvNum = 0;
    // 获取状态栏并创建相关标签
    QStatusBar *sBar = statusBar();
    lblSendNum = new QLabel(this);
    lblRecvNum = new QLabel(this);
    lblPortState = new QLabel(this);
    lblPortState->setText("Connected");
    lblPortState->setStyleSheet("color:red"); // 设置端口状态标签颜色（注释中“绿色”若为笔误可在此修正）
    // 设置标签最小尺寸
    lblSendNum->setMinimumSize(100, 20);
    lblRecvNum->setMinimumSize(100, 20);
    lblPortState->setMinimumSize(550, 20);
    // 在标签上显示计数信息
    setNumOnLabel(lblSendNum, "S: ", sendNum);
    setNumOnLabel(lblRecvNum, "R: ", recvNum);
    // 将标签添加到状态栏（从右往左）
    sBar->addPermanentWidget(lblPortState);
    sBar->addPermanentWidget(lblSendNum);
    sBar->addPermanentWidget(lblRecvNum);
}


void MainWindow::initTimer() {
    // 创建定时器并设置间隔，连接超时信号到发送按钮的点击处理逻辑
    timSend = new QTimer;
    timSend->setInterval(1000);
    connect(timSend, &QTimer::timeout, this, [=]() {
        on_sendbutton_clicked();
    });
}

void MainWindow::on_serialopenbutton_clicked()
{
    //串口变量
    QSerialPort::BaudRate baudRate;
    QSerialPort::DataBits dataBits;
    QSerialPort::StopBits stopBits;
    QSerialPort::Parity checkBits;

    // 获取串口波特率
    if(ui->baudrate_CBox->currentText()=="1200")
        baudRate=QSerialPort::Baud1200;
    else if(ui->baudrate_CBox->currentText()=="2400")
        baudRate=QSerialPort::Baud2400;
    else if(ui->baudrate_CBox->currentText()=="4800")
        baudRate=QSerialPort::Baud4800;
    else if(ui->baudrate_CBox->currentText()=="9600")
        baudRate=QSerialPort::Baud9600;
    else if(ui->baudrate_CBox->currentText()=="19200")
        baudRate=QSerialPort::Baud19200;
    else if(ui->baudrate_CBox->currentText()=="38400")
        baudRate=QSerialPort::Baud38400;
    else if(ui->baudrate_CBox->currentText()=="57600")
        baudRate=QSerialPort::Baud57600;
    else if(ui->baudrate_CBox->currentText()=="115200")
        baudRate=QSerialPort::Baud115200;

    // 获取串口数据位
    if(ui->databits_ComboBox->currentText()=="5")
        dataBits=QSerialPort::Data5;
    else if(ui->databits_ComboBox->currentText()=="6")
        dataBits=QSerialPort::Data6;
    else if(ui->databits_ComboBox->currentText()=="7")
        dataBits=QSerialPort::Data7;
    else if(ui->databits_ComboBox->currentText()=="8")
        dataBits=QSerialPort::Data8;

    // 获取串口停止位
    if(ui->stopbitsCBox->currentText()=="1")
        stopBits=QSerialPort::OneStop;
    else if(ui->stopbitsCBox->currentText()=="1.5")
        stopBits=QSerialPort::OneAndHalfStop;
    else if(ui->stopbitsCBox->currentText()=="2")
        stopBits=QSerialPort::TwoStop;

    // 获取串口奇偶校验位
    if(ui->serialparityCBox->currentText() == "none"){
        checkBits = QSerialPort::NoParity;
    }else if(ui->serialparityCBox->currentText() == "奇校验"){
        checkBits = QSerialPort::OddParity;
    }else if(ui->serialparityCBox->currentText() == "偶校验"){
        checkBits = QSerialPort::EvenParity;
    }else{

    }

    // 初始化串口属性，设置 端口号、波特率、数据位、停止位、奇偶校验位数
    serialPort->setPortName(ui->serialportCBox->currentText());
    serialPort->setBaudRate(baudRate);
    serialPort->setDataBits(dataBits);
    serialPort->setStopBits(stopBits);
    serialPort->setParity(checkBits);

    // 根据初始化好的串口属性，打开串口
    // 如果打开成功，反转打开按钮显示和功能。打开失败，无变化，并且弹出错误对话框。
    if(ui->serialopenbutton->text() == "Open Serial Port"){
        if(serialPort->open(QIODevice::ReadWrite) == true){
            //QMessageBox::
            ui->serialopenbutton->setText("Close Serial Port");
            // 让端口号下拉框不可选，避免误操作（选择功能不可用，控件背景为灰色）
            ui->serialportCBox->setEnabled(false);
        }else{
            QMessageBox::critical(this, "错误提示", "串口打开失败！！！\r\n该串口可能被占用\r\n请选择正确的串口");
        }
        //statusBar 状态栏显示端口状态
        QString sm = "%1 OPENED, %2, 8, NONE, 1";
        QString status = sm.arg(serialPort->portName()).arg(serialPort->baudRate());
        lblPortState->setText(status);
        lblPortState->setStyleSheet("color:green");
    }else{
        serialPort->close();
        ui->serialopenbutton->setText("打开串口");
        // 端口号下拉框恢复可选，避免误操作
        ui->serialportCBox->setEnabled(true);
        //statusBar 状态栏显示端口状态
        QString sm = "%1 CLOSED";
        QString status = sm.arg(serialPort->portName());
        lblPortState->setText(status);
        lblPortState->setStyleSheet("color:red");
    }

}

void MainWindow::on_serialdetectbutton_clicked()
{
    scanAndAddSerialPorts();
}

void MainWindow::on_clearbitsButton_clicked()
{
    ui->recvEdit->clear();
    // 清除发送、接收字节计数
    sendNum = 0;
    recvNum = 0;
    // 状态栏显示计数值
    setNumOnLabel(lblSendNum, "S: ", sendNum);
    setNumOnLabel(lblRecvNum, "R: ", recvNum);
}

void MainWindow::on_TimeSend_checkbox_stateChanged(int arg1)
{
    // 获取复选框状态，未选为0，选中为2
    if(arg1 == 0){
        timSend->stop();
        // 时间输入框恢复可选
        ui->txtSendMs->setEnabled(true);
    }else{
        // 对输入的值做限幅，小于10ms会弹出对话框提示
        if(ui->txtSendMs->text().toInt() >= 10){
            timSend->start(ui->txtSendMs->text().toInt());// 设置定时时长，重新计数
            // 让时间输入框不可选，避免误操作（输入功能不可用，控件背景为灰色）
            ui->txtSendMs->setEnabled(false);
        }else{
            ui->TimeSend_checkbox->setCheckState(Qt::Unchecked);
            QMessageBox::critical(this, "错误提示", "定时发送的最小间隔为 10ms\r\n请确保输入的值 >=10");
        }
    }
}

void MainWindow::on_sendbutton_clicked()
{
    QByteArray array;

        //Hex复选框
        if(ui->rev_hex_checkbox->checkState() == Qt::Checked){
            //array = QString2Hex(data);  //HEX 16进制
            array = QByteArray::fromHex(ui->sendEdit->toPlainText().toUtf8()).data();
        }else{
            //array = data.toLatin1();    //ASCII
            //array = ui->sendEdit->toPlainText().toLocal8Bit().data();
            array = ui->sendEdit->toPlainText().toUtf8();
        }

        if(ui->rev_line_checkbox->checkState() == Qt::Checked){
            array.append("\r\n");
        }
        // 如发送成功，会返回发送的字节长度。失败，返回-1。
        int a = serialPort->write(array);
        // 发送字节计数并显示
        if(a > 0)
        {
            // 发送字节计数
            sendNum += a;
            // 状态栏显示计数值
            setNumOnLabel(lblSendNum, "S: ", sendNum);

            // 将发送的内容显示到接收框
            QString sendStr;
            if(ui->rev_hex_checkbox->checkState() == false){
                if(ui->rev_time_checkbox->checkState() == Qt::Checked){
                    QDateTime nowtime = QDateTime::currentDateTime();
                    sendStr = "[" + nowtime.toString("yyyy-MM-dd hh:mm:ss") + "] [Sent] ";
                    sendStr += QString(array).append("\r\n");
                }
                else{
                    if(ui->rev_line_checkbox->checkState() == Qt::Checked){
                        sendStr = "[Sent] " + QString(array).append("\r\n");
                    }
                    else
                    {
                        sendStr = "[Sent] " + QString(array);
                    }
                }
            }else{
                // 16进制显示，并转换为大写
                QString str1 = array.toHex().toUpper();
                // 添加空格
                QString str2;
                for(int i = 0; i<str1.length (); i+=2)
                {
                    str2 += str1.mid (i,2);
                    str2 += " ";
                }
                if(ui->rev_time_checkbox->checkState() == Qt::Checked)
                {
                    QDateTime nowtime = QDateTime::currentDateTime();
                    sendStr = "[" + nowtime.toString("yyyy-MM-dd hh:mm:ss") + "] [Sent] ";
                    sendStr += str2.append("\r\n");
                }
                else
                {
                    if(ui->rev_line_checkbox->checkState() == Qt::Checked)
                        sendStr = "[Sent] " + str2.append("\r\n");
                    else
                        sendStr = "[Sent] " + str2;
                }
            }
            ui->recvEdit->insertPlainText(sendStr);
            ui->recvEdit->moveCursor(QTextCursor::End);
        }
}

void MainWindow::setNumOnLabel(QLabel *lbl, QString strS, long num)
{
    // 标签显示
    QString strN;
    strN.sprintf("%ld", num);
    QString str = strS + strN;
    lbl->setText(str);
}


void MainWindow::on_clrsendbutton_clicked()
{
    ui->sendEdit->clear();
    // 清除发送字节计数
    sendNum = 0;
    // 状态栏显示计数值
    setNumOnLabel(lblSendNum, "S: ", sendNum);
}

void MainWindow::manual_serialPortReadyRead()
{
    QByteArray recBuf = serialPort->readAll();
        QString str_rev;

        // 接收字节计数
        recvNum += recBuf.size();
        // 状态栏显示计数值
        setNumOnLabel(lblRecvNum, "R: ", recvNum);

        if(ui->rev_hex_checkbox->checkState() == false){
            if(ui->rev_time_checkbox->checkState() == Qt::Checked){
                QDateTime nowtime = QDateTime::currentDateTime();
                str_rev = "[" + nowtime.toString("yyyy-MM-dd hh:mm:ss") + "] ";
                //str_rev += QString(recBuf).append("\r\n");
                str_rev += QString::fromUtf8(recBuf).append("\r\n");
            }
            else{
                // 在当前位置插入文本，不会发生换行。如果没有移动光标到文件结尾，会导致文件超出当前界面显示范围，界面也不会向下滚动。
                //ui->recvEdit->appendPlainText(buf);

                if(ui->rev_line_checkbox->checkState() == Qt::Checked){
                     str_rev = QString::fromUtf8(recBuf).append("\r\n");
                    //str_rev = QString(recBuf).append("\r\n");
                }
                else
                {
                    str_rev = QString::fromUtf8(recBuf);
                    //str_rev = QString(recBuf);
                }
            }
        }else{

            // 16进制显示，并转换为大写
            QString str1 = recBuf.toHex().toUpper();//.data();
            // 添加空格
            QString str2;
            for(int i = 0; i<str1.length (); i+=2)
            {
                str2 += str1.mid (i,2);
                str2 += " ";
            }
            if(ui->rev_time_checkbox->checkState() == Qt::Checked)
            {
                QDateTime nowtime = QDateTime::currentDateTime();
                str_rev = "[" + nowtime.toString("yyyy-MM-dd hh:mm:ss") + "] ";
                str_rev += str2.append("\r\n");
            }
            else
            {
                if(ui->rev_line_checkbox->checkState() == Qt::Checked)
                    str_rev += str2.append("\r\n");
                else
                    str_rev = str2;

            }
        }
        ui->recvEdit->insertPlainText(str_rev);
        ui->recvEdit->moveCursor(QTextCursor::End);
}
