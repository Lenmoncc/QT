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
#include <QtWidgets/QLineEdit>
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
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QLabel *label_4;
    QPlainTextEdit *recvEdit;
    QTextEdit *sendEdit;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *send;
    QSpinBox *send_time;
    QCheckBox *hex_send;
    QPushButton *clr_send;
    QCheckBox *hex_recv;
    QCheckBox *clk_recv;
    QPushButton *clr_recv;
    QPushButton *pause_recv;
    QCheckBox *clk_send;
    QPushButton *connect;
    QPushButton *listen;
    QLineEdit *port;
    QPushButton *refresh;
    QComboBox *network_protocol;
    QLineEdit *ip_addr;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 563);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 241, 211));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 230, 241, 111));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 350, 241, 161));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 80, 20, 17));
        recvEdit = new QPlainTextEdit(centralwidget);
        recvEdit->setObjectName(QString::fromUtf8("recvEdit"));
        recvEdit->setGeometry(QRect(291, 41, 491, 281));
        recvEdit->setReadOnly(true);
        sendEdit = new QTextEdit(centralwidget);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));
        sendEdit->setGeometry(QRect(290, 381, 491, 121));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(280, 10, 511, 331));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(280, 350, 511, 161));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(34, 44, 60, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(34, 75, 44, 23));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(34, 106, 45, 23));
        send = new QPushButton(centralwidget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(31, 459, 221, 31));
        send_time = new QSpinBox(centralwidget);
        send_time->setObjectName(QString::fromUtf8("send_time"));
        send_time->setGeometry(QRect(144, 423, 81, 31));
        hex_send = new QCheckBox(centralwidget);
        hex_send->setObjectName(QString::fromUtf8("hex_send"));
        hex_send->setGeometry(QRect(149, 384, 101, 29));
        clr_send = new QPushButton(centralwidget);
        clr_send->setObjectName(QString::fromUtf8("clr_send"));
        clr_send->setGeometry(QRect(33, 383, 101, 31));
        hex_recv = new QCheckBox(centralwidget);
        hex_recv->setObjectName(QString::fromUtf8("hex_recv"));
        hex_recv->setGeometry(QRect(150, 262, 101, 29));
        clk_recv = new QCheckBox(centralwidget);
        clk_recv->setObjectName(QString::fromUtf8("clk_recv"));
        clk_recv->setGeometry(QRect(150, 299, 70, 29));
        clr_recv = new QPushButton(centralwidget);
        clr_recv->setObjectName(QString::fromUtf8("clr_recv"));
        clr_recv->setGeometry(QRect(31, 261, 101, 31));
        pause_recv = new QPushButton(centralwidget);
        pause_recv->setObjectName(QString::fromUtf8("pause_recv"));
        pause_recv->setGeometry(QRect(31, 298, 101, 31));
        clk_send = new QCheckBox(centralwidget);
        clk_send->setObjectName(QString::fromUtf8("clk_send"));
        clk_send->setGeometry(QRect(43, 422, 91, 31));
        connect = new QPushButton(centralwidget);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setGeometry(QRect(32, 178, 211, 31));
        listen = new QPushButton(centralwidget);
        listen->setObjectName(QString::fromUtf8("listen"));
        listen->setGeometry(QRect(140, 139, 101, 31));
        port = new QLineEdit(centralwidget);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(100, 106, 142, 25));
        refresh = new QPushButton(centralwidget);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(34, 139, 91, 31));
        network_protocol = new QComboBox(centralwidget);
        network_protocol->addItem(QString());
        network_protocol->addItem(QString());
        network_protocol->addItem(QString());
        network_protocol->setObjectName(QString::fromUtf8("network_protocol"));
        network_protocol->setGeometry(QRect(100, 44, 101, 25));
        ip_addr = new QLineEdit(centralwidget);
        ip_addr->setObjectName(QString::fromUtf8("ip_addr"));
        ip_addr->setGeometry(QRect(100, 75, 142, 25));
        MainWindow->setCentralWidget(centralwidget);
        groupBox->raise();
        groupBox_3->raise();
        groupBox_2->raise();
        groupBox_5->raise();
        groupBox_4->raise();
        recvEdit->raise();
        sendEdit->raise();
        send->raise();
        send_time->raise();
        hex_send->raise();
        clr_send->raise();
        hex_recv->raise();
        clk_recv->raise();
        clr_recv->raise();
        pause_recv->raise();
        clk_send->raise();
        connect->raise();
        listen->raise();
        port->raise();
        refresh->raise();
        network_protocol->raise();
        ip_addr->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\216\245\346\224\266\350\256\276\347\275\256", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201\350\256\276\347\275\256", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "ms", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\216\245\346\224\266\346\225\260\346\215\256", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\215\217\350\256\256\347\261\273\345\236\213", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", nullptr));
        send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        hex_send->setText(QApplication::translate("MainWindow", "HEX\345\217\221\351\200\201", nullptr));
        clr_send->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", nullptr));
        hex_recv->setText(QApplication::translate("MainWindow", "HEX\346\216\245\346\224\266", nullptr));
        clk_recv->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\346\210\263", nullptr));
        clr_recv->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        pause_recv->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234\346\216\245\346\224\266", nullptr));
        clk_send->setText(QApplication::translate("MainWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        connect->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        listen->setText(QApplication::translate("MainWindow", "\347\233\221\345\220\254", nullptr));
        port->setText(QApplication::translate("MainWindow", "8888", nullptr));
        refresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        network_protocol->setItemText(0, QApplication::translate("MainWindow", "UDP", nullptr));
        network_protocol->setItemText(1, QApplication::translate("MainWindow", "TCP\346\234\215\345\212\241\345\231\250", nullptr));
        network_protocol->setItemText(2, QApplication::translate("MainWindow", "TCP\345\256\242\346\210\267\347\253\257", nullptr));

        ip_addr->setText(QApplication::translate("MainWindow", "192.168.137.219", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
