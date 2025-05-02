/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *serialportCBox;
    QComboBox *baudrate_CBox;
    QComboBox *databits_ComboBox;
    QComboBox *stopbitsCBox;
    QComboBox *serialparityCBox;
    QPushButton *clearbitsButton;
    QCheckBox *rev_time_checkbox;
    QCheckBox *rev_hex_checkbox;
    QCheckBox *rev_line_checkbox;
    QPlainTextEdit *recvEdit;
    QTextEdit *sendEdit;
    QPushButton *serialdetectbutton;
    QPushButton *serialopenbutton;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_3;
    QLabel *label_6;
    QCheckBox *send_hex_checkbox;
    QCheckBox *send_line_checkbox;
    QPushButton *sendbutton;
    QSpinBox *txtSendMs;
    QCheckBox *TimeSend_checkbox;
    QPushButton *clrsendbutton;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(806, 547);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(32, 42, 30, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(32, 73, 70, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(32, 104, 62, 17));
        serialportCBox = new QComboBox(centralwidget);
        serialportCBox->setObjectName(QString::fromUtf8("serialportCBox"));
        serialportCBox->setGeometry(QRect(108, 42, 86, 25));
        baudrate_CBox = new QComboBox(centralwidget);
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->setObjectName(QString::fromUtf8("baudrate_CBox"));
        baudrate_CBox->setGeometry(QRect(108, 73, 77, 25));
        databits_ComboBox = new QComboBox(centralwidget);
        databits_ComboBox->addItem(QString());
        databits_ComboBox->addItem(QString());
        databits_ComboBox->addItem(QString());
        databits_ComboBox->addItem(QString());
        databits_ComboBox->setObjectName(QString::fromUtf8("databits_ComboBox"));
        databits_ComboBox->setGeometry(QRect(108, 104, 38, 25));
        stopbitsCBox = new QComboBox(centralwidget);
        stopbitsCBox->addItem(QString());
        stopbitsCBox->addItem(QString());
        stopbitsCBox->addItem(QString());
        stopbitsCBox->setObjectName(QString::fromUtf8("stopbitsCBox"));
        stopbitsCBox->setGeometry(QRect(108, 135, 49, 25));
        serialparityCBox = new QComboBox(centralwidget);
        serialparityCBox->addItem(QString());
        serialparityCBox->addItem(QString());
        serialparityCBox->addItem(QString());
        serialparityCBox->setObjectName(QString::fromUtf8("serialparityCBox"));
        serialparityCBox->setGeometry(QRect(108, 166, 107, 25));
        clearbitsButton = new QPushButton(centralwidget);
        clearbitsButton->setObjectName(QString::fromUtf8("clearbitsButton"));
        clearbitsButton->setGeometry(QRect(30, 311, 100, 25));
        rev_time_checkbox = new QCheckBox(centralwidget);
        rev_time_checkbox->setObjectName(QString::fromUtf8("rev_time_checkbox"));
        rev_time_checkbox->setGeometry(QRect(30, 342, 101, 23));
        rev_hex_checkbox = new QCheckBox(centralwidget);
        rev_hex_checkbox->setObjectName(QString::fromUtf8("rev_hex_checkbox"));
        rev_hex_checkbox->setGeometry(QRect(137, 312, 108, 23));
        rev_line_checkbox = new QCheckBox(centralwidget);
        rev_line_checkbox->setObjectName(QString::fromUtf8("rev_line_checkbox"));
        rev_line_checkbox->setGeometry(QRect(137, 342, 98, 23));
        recvEdit = new QPlainTextEdit(centralwidget);
        recvEdit->setObjectName(QString::fromUtf8("recvEdit"));
        recvEdit->setGeometry(QRect(300, 20, 481, 351));
        recvEdit->setReadOnly(true);
        sendEdit = new QTextEdit(centralwidget);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));
        sendEdit->setGeometry(QRect(300, 380, 401, 101));
        sendEdit->setReadOnly(false);
        serialdetectbutton = new QPushButton(centralwidget);
        serialdetectbutton->setObjectName(QString::fromUtf8("serialdetectbutton"));
        serialdetectbutton->setGeometry(QRect(30, 231, 129, 25));
        serialopenbutton = new QPushButton(centralwidget);
        serialopenbutton->setObjectName(QString::fromUtf8("serialopenbutton"));
        serialopenbutton->setGeometry(QRect(30, 200, 120, 25));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 221, 251));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 290, 251, 91));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(32, 135, 62, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(32, 166, 41, 17));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 390, 251, 91));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 50, 20, 17));
        send_hex_checkbox = new QCheckBox(centralwidget);
        send_hex_checkbox->setObjectName(QString::fromUtf8("send_hex_checkbox"));
        send_hex_checkbox->setGeometry(QRect(31, 410, 89, 23));
        send_line_checkbox = new QCheckBox(centralwidget);
        send_line_checkbox->setObjectName(QString::fromUtf8("send_line_checkbox"));
        send_line_checkbox->setGeometry(QRect(133, 410, 126, 23));
        sendbutton = new QPushButton(centralwidget);
        sendbutton->setObjectName(QString::fromUtf8("sendbutton"));
        sendbutton->setGeometry(QRect(711, 421, 80, 25));
        txtSendMs = new QSpinBox(centralwidget);
        txtSendMs->setObjectName(QString::fromUtf8("txtSendMs"));
        txtSendMs->setGeometry(QRect(133, 439, 81, 26));
        TimeSend_checkbox = new QCheckBox(centralwidget);
        TimeSend_checkbox->setObjectName(QString::fromUtf8("TimeSend_checkbox"));
        TimeSend_checkbox->setGeometry(QRect(31, 440, 96, 23));
        clrsendbutton = new QPushButton(centralwidget);
        clrsendbutton->setObjectName(QString::fromUtf8("clrsendbutton"));
        clrsendbutton->setGeometry(QRect(711, 452, 81, 25));
        MainWindow->setCentralWidget(centralwidget);
        groupBox_2->raise();
        groupBox->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        serialportCBox->raise();
        baudrate_CBox->raise();
        databits_ComboBox->raise();
        stopbitsCBox->raise();
        serialparityCBox->raise();
        clearbitsButton->raise();
        rev_time_checkbox->raise();
        rev_hex_checkbox->raise();
        rev_line_checkbox->raise();
        recvEdit->raise();
        sendEdit->raise();
        serialdetectbutton->raise();
        serialopenbutton->raise();
        label_4->raise();
        label_5->raise();
        groupBox_3->raise();
        send_hex_checkbox->raise();
        send_line_checkbox->raise();
        sendbutton->raise();
        txtSendMs->raise();
        TimeSend_checkbox->raise();
        clrsendbutton->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 806, 28));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Port", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Baud Rate", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Data Bits", nullptr));
        baudrate_CBox->setItemText(0, QApplication::translate("MainWindow", "1200", nullptr));
        baudrate_CBox->setItemText(1, QApplication::translate("MainWindow", "2400", nullptr));
        baudrate_CBox->setItemText(2, QApplication::translate("MainWindow", "4800", nullptr));
        baudrate_CBox->setItemText(3, QApplication::translate("MainWindow", "9600", nullptr));
        baudrate_CBox->setItemText(4, QApplication::translate("MainWindow", "19200", nullptr));
        baudrate_CBox->setItemText(5, QApplication::translate("MainWindow", "38400", nullptr));
        baudrate_CBox->setItemText(6, QApplication::translate("MainWindow", "57600", nullptr));
        baudrate_CBox->setItemText(7, QApplication::translate("MainWindow", "115200", nullptr));

        databits_ComboBox->setItemText(0, QApplication::translate("MainWindow", "5", nullptr));
        databits_ComboBox->setItemText(1, QApplication::translate("MainWindow", "6", nullptr));
        databits_ComboBox->setItemText(2, QApplication::translate("MainWindow", "7", nullptr));
        databits_ComboBox->setItemText(3, QApplication::translate("MainWindow", "8", nullptr));

        stopbitsCBox->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        stopbitsCBox->setItemText(1, QApplication::translate("MainWindow", "1.5", nullptr));
        stopbitsCBox->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));

        serialparityCBox->setItemText(0, QApplication::translate("MainWindow", "none", nullptr));
        serialparityCBox->setItemText(1, QApplication::translate("MainWindow", "Odd Parity", nullptr));
        serialparityCBox->setItemText(2, QApplication::translate("MainWindow", "Even Parity", nullptr));

        clearbitsButton->setText(QApplication::translate("MainWindow", "Clear Receive", nullptr));
        rev_time_checkbox->setText(QApplication::translate("MainWindow", "Timesatmp", nullptr));
        rev_hex_checkbox->setText(QApplication::translate("MainWindow", "Hex Receive", nullptr));
        rev_line_checkbox->setText(QApplication::translate("MainWindow", "Auto Wrap", nullptr));
        serialdetectbutton->setText(QApplication::translate("MainWindow", "Detect Serial Port", nullptr));
        serialopenbutton->setText(QApplication::translate("MainWindow", "Open Serial Port", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Serial Port Settings", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Receive Settings", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Stop Bits", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Parity", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Send Settings", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "ms", nullptr));
        send_hex_checkbox->setText(QApplication::translate("MainWindow", "Hex Send", nullptr));
        send_line_checkbox->setText(QApplication::translate("MainWindow", "Send New Line", nullptr));
        sendbutton->setText(QApplication::translate("MainWindow", "Send", nullptr));
        TimeSend_checkbox->setText(QApplication::translate("MainWindow", "Auto Send", nullptr));
        clrsendbutton->setText(QApplication::translate("MainWindow", "Clear Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
