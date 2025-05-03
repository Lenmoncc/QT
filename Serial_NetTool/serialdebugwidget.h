#ifndef SERIALDEBUGWIDGET_H
#define SERIALDEBUGWIDGET_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class SerialDebugWidget; }
QT_END_NAMESPACE

class SerialDebugWidget : public QWidget
{
    Q_OBJECT

public:
    SerialDebugWidget(QWidget *parent = nullptr);
    ~SerialDebugWidget();

private slots:
    void on_serialopenbutton_clicked();

    void on_serialdetectbutton_clicked();

    void on_clearbitsButton_clicked();

    void on_TimeSend_checkbox_stateChanged(int arg1);

    void on_sendbutton_clicked();

    void on_clrsendbutton_clicked();

    void manual_serialPortReadyRead();


private:
    Ui::SerialDebugWidget *ui;
    void initSerialPort();
    void scanAndAddSerialPorts();
    void initTimer();
    void initStatusBar(); //初始化状态栏

    int sendNum;
    int recvNum;
    QLabel *lblSendNum;
    QLabel *lblRecvNum;
    QLabel *lblPortState;
    QTimer *timSend;
    QSerialPort *serialPort; //串口对象
    QStatusBar *statusBar; 
    void setNumOnLabel(QLabel *lbl, QString strS, long num);
};
#endif // SERIALDEBUGWIDGET_H
