#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QMainWindow>
#include <QSerialPort>
#include <QString>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_serialopenbutton_clicked();

    void on_serialdetectbutton_clicked();
    
    void on_clearbitsButton_clicked();
    
    void on_TimeSend_checkbox_stateChanged(int arg1);
    
    void on_sendbutton_clicked();

    void on_clrsendbutton_clicked();
    
    void manual_serialPortReadyRead();



private:
    Ui::MainWindow *ui;

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
    void setNumOnLabel(QLabel *lbl, QString strS, long num);
};
#endif // MAINWINDOW_H
