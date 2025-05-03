#ifndef NETWORKDEBUGWIDGET_H
#define NETWORKDEBUGWIDGET_H

#include <QWidget>
#include <QtNetwork>
#include <QLabel>
#include <QStatusBar>
#include <QHBoxLayout>

namespace Ui {
class networkdebugwidget;
}

class networkdebugwidget : public QWidget
{
    Q_OBJECT

public:
    explicit networkdebugwidget(QWidget *parent = nullptr);
    ~networkdebugwidget();

private slots:
    // 网络设置
    //void on_network_protocol_currentIndexChanged(int index);
    void on_refresh_clicked();
    void on_listen_clicked();
    void on_connect_clicked();

    // 接收设置
    void on_clr_recv_clicked();
    //void on_hex_recv_clicked();
    void on_pause_recv_clicked();
    //void on_clk_recv_clicked();

    // 发送设置
    void on_clr_send_clicked();
    //void on_hex_send_clicked();
    //void on_send_time_editingFinished();
    void on_clk_send_stateChanged(int state);
    void on_send_clicked();

    // 网络处理
    void newTcpConnection();
    void tcpDisconnected();
    void socketReadyRead();

private:
    Ui::networkdebugwidget *ui;
    QUdpSocket *udpSocket = nullptr;
    QTcpSocket *tcpSocket = nullptr;
    QTcpServer *tcpServer = nullptr;
    QTimer *sendTimer;

    // 状态栏组件
    QLabel *statusLabel;
    QLabel *sentLabel;
    QLabel *receivedLabel;
    quint64 bytesSent = 0;
    quint64 bytesReceived = 0;
    bool isReceivingPaused = false;

    void initNetwork();
    void updateNetworkInterfaces();
    void updateStatusBar();
    void sendNetworkData(const QByteArray &data);
    void appendRecvData(const QByteArray &data);
};

#endif // NETWORKDEBUGWIDGET_H
