/********************************************************************************
** Form generated from reading UI file 'networkdebugwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKDEBUGWIDGET_H
#define UI_NETWORKDEBUGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_networkdebugwidget
{
public:
    QPlainTextEdit *recvEdit;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_3;
    QLabel *label_5;
    QLineEdit *port;
    QPushButton *clr_send;
    QPushButton *listen;
    QLabel *label_3;
    QCheckBox *hex_send;
    QGroupBox *groupBox_2;
    QCheckBox *hex_recv;
    QComboBox *network_protocol;
    QGroupBox *groupBox_5;
    QPushButton *pause_recv;
    QPushButton *refresh;
    QPushButton *send;
    QPushButton *clr_recv;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QCheckBox *clk_recv;
    QPushButton *connect;
    QSpinBox *send_time;
    QTextEdit *sendEdit;
    QCheckBox *clk_send;
    QLineEdit *ip_addr;

    void setupUi(QWidget *networkdebugwidget)
    {
        if (networkdebugwidget->objectName().isEmpty())
            networkdebugwidget->setObjectName(QString::fromUtf8("networkdebugwidget"));
        networkdebugwidget->resize(806, 563);
        recvEdit = new QPlainTextEdit(networkdebugwidget);
        recvEdit->setObjectName(QString::fromUtf8("recvEdit"));
        recvEdit->setGeometry(QRect(287, 66, 491, 281));
        recvEdit->setReadOnly(true);
        groupBox_4 = new QGroupBox(networkdebugwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(276, 35, 511, 331));
        groupBox_3 = new QGroupBox(networkdebugwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(16, 375, 241, 161));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 80, 20, 17));
        port = new QLineEdit(networkdebugwidget);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(96, 131, 142, 25));
        clr_send = new QPushButton(networkdebugwidget);
        clr_send->setObjectName(QString::fromUtf8("clr_send"));
        clr_send->setGeometry(QRect(29, 408, 101, 31));
        listen = new QPushButton(networkdebugwidget);
        listen->setObjectName(QString::fromUtf8("listen"));
        listen->setGeometry(QRect(136, 164, 101, 31));
        label_3 = new QLabel(networkdebugwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 131, 45, 23));
        hex_send = new QCheckBox(networkdebugwidget);
        hex_send->setObjectName(QString::fromUtf8("hex_send"));
        hex_send->setGeometry(QRect(145, 409, 101, 29));
        groupBox_2 = new QGroupBox(networkdebugwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(16, 255, 241, 111));
        hex_recv = new QCheckBox(networkdebugwidget);
        hex_recv->setObjectName(QString::fromUtf8("hex_recv"));
        hex_recv->setGeometry(QRect(146, 287, 101, 29));
        network_protocol = new QComboBox(networkdebugwidget);
        network_protocol->addItem(QString());
        network_protocol->addItem(QString());
        network_protocol->addItem(QString());
        network_protocol->setObjectName(QString::fromUtf8("network_protocol"));
        network_protocol->setGeometry(QRect(96, 69, 101, 25));
        groupBox_5 = new QGroupBox(networkdebugwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(276, 375, 511, 161));
        pause_recv = new QPushButton(networkdebugwidget);
        pause_recv->setObjectName(QString::fromUtf8("pause_recv"));
        pause_recv->setGeometry(QRect(27, 323, 101, 31));
        refresh = new QPushButton(networkdebugwidget);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(30, 164, 91, 31));
        send = new QPushButton(networkdebugwidget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(27, 484, 221, 31));
        clr_recv = new QPushButton(networkdebugwidget);
        clr_recv->setObjectName(QString::fromUtf8("clr_recv"));
        clr_recv->setGeometry(QRect(27, 286, 101, 31));
        label = new QLabel(networkdebugwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 69, 60, 23));
        groupBox = new QGroupBox(networkdebugwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(16, 35, 241, 211));
        label_2 = new QLabel(networkdebugwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 44, 23));
        clk_recv = new QCheckBox(networkdebugwidget);
        clk_recv->setObjectName(QString::fromUtf8("clk_recv"));
        clk_recv->setGeometry(QRect(146, 324, 70, 29));
        connect = new QPushButton(networkdebugwidget);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setGeometry(QRect(28, 203, 211, 31));
        send_time = new QSpinBox(networkdebugwidget);
        send_time->setObjectName(QString::fromUtf8("send_time"));
        send_time->setGeometry(QRect(140, 448, 81, 31));
        sendEdit = new QTextEdit(networkdebugwidget);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));
        sendEdit->setGeometry(QRect(286, 406, 491, 121));
        clk_send = new QCheckBox(networkdebugwidget);
        clk_send->setObjectName(QString::fromUtf8("clk_send"));
        clk_send->setGeometry(QRect(39, 447, 91, 31));
        ip_addr = new QLineEdit(networkdebugwidget);
        ip_addr->setObjectName(QString::fromUtf8("ip_addr"));
        ip_addr->setGeometry(QRect(96, 100, 142, 25));
        groupBox_3->raise();
        groupBox_2->raise();
        groupBox->raise();
        recvEdit->raise();
        groupBox_4->raise();
        port->raise();
        clr_send->raise();
        listen->raise();
        label_3->raise();
        hex_send->raise();
        hex_recv->raise();
        network_protocol->raise();
        groupBox_5->raise();
        pause_recv->raise();
        refresh->raise();
        send->raise();
        clr_recv->raise();
        label->raise();
        label_2->raise();
        clk_recv->raise();
        connect->raise();
        send_time->raise();
        sendEdit->raise();
        clk_send->raise();
        ip_addr->raise();

        retranslateUi(networkdebugwidget);

        QMetaObject::connectSlotsByName(networkdebugwidget);
    } // setupUi

    void retranslateUi(QWidget *networkdebugwidget)
    {
        networkdebugwidget->setWindowTitle(QApplication::translate("networkdebugwidget", "Form", nullptr));
        groupBox_4->setTitle(QApplication::translate("networkdebugwidget", "\346\216\245\346\224\266\346\225\260\346\215\256", nullptr));
        groupBox_3->setTitle(QApplication::translate("networkdebugwidget", "\345\217\221\351\200\201\350\256\276\347\275\256", nullptr));
        label_5->setText(QApplication::translate("networkdebugwidget", "ms", nullptr));
        port->setText(QApplication::translate("networkdebugwidget", "8888", nullptr));
        clr_send->setText(QApplication::translate("networkdebugwidget", "\346\270\205\347\251\272\345\217\221\351\200\201", nullptr));
        listen->setText(QApplication::translate("networkdebugwidget", "\347\233\221\345\220\254", nullptr));
        label_3->setText(QApplication::translate("networkdebugwidget", "\347\253\257\345\217\243\345\217\267", nullptr));
        hex_send->setText(QApplication::translate("networkdebugwidget", "HEX\345\217\221\351\200\201", nullptr));
        groupBox_2->setTitle(QApplication::translate("networkdebugwidget", "\346\216\245\346\224\266\350\256\276\347\275\256", nullptr));
        hex_recv->setText(QApplication::translate("networkdebugwidget", "HEX\346\216\245\346\224\266", nullptr));
        network_protocol->setItemText(0, QApplication::translate("networkdebugwidget", "UDP", nullptr));
        network_protocol->setItemText(1, QApplication::translate("networkdebugwidget", "TCP\346\234\215\345\212\241\345\231\250", nullptr));
        network_protocol->setItemText(2, QApplication::translate("networkdebugwidget", "TCP\345\256\242\346\210\267\347\253\257", nullptr));

        groupBox_5->setTitle(QApplication::translate("networkdebugwidget", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        pause_recv->setText(QApplication::translate("networkdebugwidget", "\346\232\202\345\201\234\346\216\245\346\224\266", nullptr));
        refresh->setText(QApplication::translate("networkdebugwidget", "\345\210\267\346\226\260", nullptr));
        send->setText(QApplication::translate("networkdebugwidget", "\345\217\221\351\200\201", nullptr));
        clr_recv->setText(QApplication::translate("networkdebugwidget", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        label->setText(QApplication::translate("networkdebugwidget", "\345\215\217\350\256\256\347\261\273\345\236\213", nullptr));
        groupBox->setTitle(QApplication::translate("networkdebugwidget", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        label_2->setText(QApplication::translate("networkdebugwidget", "IP\345\234\260\345\235\200", nullptr));
        clk_recv->setText(QApplication::translate("networkdebugwidget", "\346\227\266\351\227\264\346\210\263", nullptr));
        connect->setText(QApplication::translate("networkdebugwidget", "\350\277\236\346\216\245", nullptr));
        clk_send->setText(QApplication::translate("networkdebugwidget", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        ip_addr->setText(QApplication::translate("networkdebugwidget", "192.168.137.219", nullptr));
    } // retranslateUi

};

namespace Ui {
    class networkdebugwidget: public Ui_networkdebugwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKDEBUGWIDGET_H
