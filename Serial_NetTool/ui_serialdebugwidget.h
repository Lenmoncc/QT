/********************************************************************************
** Form generated from reading UI file 'serialdebugwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALDEBUGWIDGET_H
#define UI_SERIALDEBUGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialDebugWidget
{
public:
    QCheckBox *rev_hex_checkbox;
    QComboBox *serialparityCBox;
    QPushButton *clearbitsButton;
    QCheckBox *send_hex_checkbox;
    QCheckBox *rev_line_checkbox;
    QGroupBox *groupBox_2;
    QCheckBox *TimeSend_checkbox;
    QPushButton *serialdetectbutton;
    QPushButton *clrsendbutton;
    QPushButton *serialopenbutton;
    QCheckBox *rev_time_checkbox;
    QPlainTextEdit *recvEdit;
    QLabel *label_4;
    QComboBox *serialportCBox;
    QLabel *label;
    QLabel *label_5;
    QTextEdit *sendEdit;
    QGroupBox *groupBox_3;
    QLabel *label_6;
    QGroupBox *groupBox;
    QLabel *label_2;
    QCheckBox *send_line_checkbox;
    QComboBox *stopbitsCBox;
    QLabel *label_3;
    QComboBox *databits_ComboBox;
    QSpinBox *txtSendMs;
    QPushButton *sendbutton;
    QComboBox *baudrate_CBox;

    void setupUi(QWidget *SerialDebugWidget)
    {
        if (SerialDebugWidget->objectName().isEmpty())
            SerialDebugWidget->setObjectName(QString::fromUtf8("SerialDebugWidget"));
        SerialDebugWidget->resize(806, 547);
        rev_hex_checkbox = new QCheckBox(SerialDebugWidget);
        rev_hex_checkbox->setObjectName(QString::fromUtf8("rev_hex_checkbox"));
        rev_hex_checkbox->setGeometry(QRect(139, 339, 108, 23));
        serialparityCBox = new QComboBox(SerialDebugWidget);
        serialparityCBox->addItem(QString());
        serialparityCBox->addItem(QString());
        serialparityCBox->addItem(QString());
        serialparityCBox->setObjectName(QString::fromUtf8("serialparityCBox"));
        serialparityCBox->setGeometry(QRect(110, 193, 107, 25));
        clearbitsButton = new QPushButton(SerialDebugWidget);
        clearbitsButton->setObjectName(QString::fromUtf8("clearbitsButton"));
        clearbitsButton->setGeometry(QRect(32, 338, 100, 25));
        send_hex_checkbox = new QCheckBox(SerialDebugWidget);
        send_hex_checkbox->setObjectName(QString::fromUtf8("send_hex_checkbox"));
        send_hex_checkbox->setGeometry(QRect(33, 437, 89, 23));
        rev_line_checkbox = new QCheckBox(SerialDebugWidget);
        rev_line_checkbox->setObjectName(QString::fromUtf8("rev_line_checkbox"));
        rev_line_checkbox->setGeometry(QRect(139, 369, 98, 23));
        groupBox_2 = new QGroupBox(SerialDebugWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(12, 310, 251, 91));
        TimeSend_checkbox = new QCheckBox(SerialDebugWidget);
        TimeSend_checkbox->setObjectName(QString::fromUtf8("TimeSend_checkbox"));
        TimeSend_checkbox->setGeometry(QRect(33, 467, 96, 23));
        serialdetectbutton = new QPushButton(SerialDebugWidget);
        serialdetectbutton->setObjectName(QString::fromUtf8("serialdetectbutton"));
        serialdetectbutton->setGeometry(QRect(32, 258, 181, 25));
        clrsendbutton = new QPushButton(SerialDebugWidget);
        clrsendbutton->setObjectName(QString::fromUtf8("clrsendbutton"));
        clrsendbutton->setGeometry(QRect(713, 479, 81, 25));
        serialopenbutton = new QPushButton(SerialDebugWidget);
        serialopenbutton->setObjectName(QString::fromUtf8("serialopenbutton"));
        serialopenbutton->setGeometry(QRect(32, 227, 181, 25));
        rev_time_checkbox = new QCheckBox(SerialDebugWidget);
        rev_time_checkbox->setObjectName(QString::fromUtf8("rev_time_checkbox"));
        rev_time_checkbox->setGeometry(QRect(32, 369, 101, 23));
        recvEdit = new QPlainTextEdit(SerialDebugWidget);
        recvEdit->setObjectName(QString::fromUtf8("recvEdit"));
        recvEdit->setGeometry(QRect(302, 47, 481, 351));
        recvEdit->setReadOnly(true);
        label_4 = new QLabel(SerialDebugWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(34, 162, 62, 17));
        serialportCBox = new QComboBox(SerialDebugWidget);
        serialportCBox->setObjectName(QString::fromUtf8("serialportCBox"));
        serialportCBox->setGeometry(QRect(110, 69, 86, 25));
        label = new QLabel(SerialDebugWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(34, 69, 30, 17));
        label_5 = new QLabel(SerialDebugWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(34, 193, 41, 17));
        sendEdit = new QTextEdit(SerialDebugWidget);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));
        sendEdit->setGeometry(QRect(302, 407, 401, 101));
        sendEdit->setReadOnly(false);
        groupBox_3 = new QGroupBox(SerialDebugWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(12, 410, 251, 91));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 50, 20, 17));
        groupBox = new QGroupBox(SerialDebugWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(12, 40, 221, 251));
        label_2 = new QLabel(SerialDebugWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(34, 100, 70, 17));
        send_line_checkbox = new QCheckBox(SerialDebugWidget);
        send_line_checkbox->setObjectName(QString::fromUtf8("send_line_checkbox"));
        send_line_checkbox->setGeometry(QRect(135, 437, 126, 23));
        stopbitsCBox = new QComboBox(SerialDebugWidget);
        stopbitsCBox->addItem(QString());
        stopbitsCBox->addItem(QString());
        stopbitsCBox->addItem(QString());
        stopbitsCBox->setObjectName(QString::fromUtf8("stopbitsCBox"));
        stopbitsCBox->setGeometry(QRect(110, 162, 49, 25));
        label_3 = new QLabel(SerialDebugWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(34, 131, 62, 17));
        databits_ComboBox = new QComboBox(SerialDebugWidget);
        databits_ComboBox->addItem(QString());
        databits_ComboBox->addItem(QString());
        databits_ComboBox->addItem(QString());
        databits_ComboBox->addItem(QString());
        databits_ComboBox->setObjectName(QString::fromUtf8("databits_ComboBox"));
        databits_ComboBox->setGeometry(QRect(110, 131, 38, 25));
        txtSendMs = new QSpinBox(SerialDebugWidget);
        txtSendMs->setObjectName(QString::fromUtf8("txtSendMs"));
        txtSendMs->setGeometry(QRect(135, 466, 81, 26));
        sendbutton = new QPushButton(SerialDebugWidget);
        sendbutton->setObjectName(QString::fromUtf8("sendbutton"));
        sendbutton->setGeometry(QRect(713, 448, 80, 25));
        baudrate_CBox = new QComboBox(SerialDebugWidget);
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->addItem(QString());
        baudrate_CBox->setObjectName(QString::fromUtf8("baudrate_CBox"));
        baudrate_CBox->setGeometry(QRect(110, 100, 77, 25));
        groupBox->raise();
        groupBox_3->raise();
        groupBox_2->raise();
        rev_hex_checkbox->raise();
        serialparityCBox->raise();
        clearbitsButton->raise();
        send_hex_checkbox->raise();
        rev_line_checkbox->raise();
        TimeSend_checkbox->raise();
        serialdetectbutton->raise();
        clrsendbutton->raise();
        serialopenbutton->raise();
        rev_time_checkbox->raise();
        recvEdit->raise();
        label_4->raise();
        serialportCBox->raise();
        label->raise();
        label_5->raise();
        sendEdit->raise();
        label_2->raise();
        send_line_checkbox->raise();
        stopbitsCBox->raise();
        label_3->raise();
        databits_ComboBox->raise();
        txtSendMs->raise();
        sendbutton->raise();
        baudrate_CBox->raise();

        retranslateUi(SerialDebugWidget);

        QMetaObject::connectSlotsByName(SerialDebugWidget);
    } // setupUi

    void retranslateUi(QWidget *SerialDebugWidget)
    {
        SerialDebugWidget->setWindowTitle(QApplication::translate("SerialDebugWidget", "SerialDebugWidget", nullptr));
        rev_hex_checkbox->setText(QApplication::translate("SerialDebugWidget", "Hex Receive", nullptr));
        serialparityCBox->setItemText(0, QApplication::translate("SerialDebugWidget", "none", nullptr));
        serialparityCBox->setItemText(1, QApplication::translate("SerialDebugWidget", "Odd Parity", nullptr));
        serialparityCBox->setItemText(2, QApplication::translate("SerialDebugWidget", "Even Parity", nullptr));

        clearbitsButton->setText(QApplication::translate("SerialDebugWidget", "Clear Receive", nullptr));
        send_hex_checkbox->setText(QApplication::translate("SerialDebugWidget", "Hex Send", nullptr));
        rev_line_checkbox->setText(QApplication::translate("SerialDebugWidget", "Auto Wrap", nullptr));
        groupBox_2->setTitle(QApplication::translate("SerialDebugWidget", "Receive Settings", nullptr));
        TimeSend_checkbox->setText(QApplication::translate("SerialDebugWidget", "Auto Send", nullptr));
        serialdetectbutton->setText(QApplication::translate("SerialDebugWidget", "Detect Serial Port", nullptr));
        clrsendbutton->setText(QApplication::translate("SerialDebugWidget", "Clear Send", nullptr));
        serialopenbutton->setText(QApplication::translate("SerialDebugWidget", "Open Serial Port", nullptr));
        rev_time_checkbox->setText(QApplication::translate("SerialDebugWidget", "Timesatmp", nullptr));
        label_4->setText(QApplication::translate("SerialDebugWidget", "Stop Bits", nullptr));
        label->setText(QApplication::translate("SerialDebugWidget", "Port", nullptr));
        label_5->setText(QApplication::translate("SerialDebugWidget", "Parity", nullptr));
        groupBox_3->setTitle(QApplication::translate("SerialDebugWidget", "Send Settings", nullptr));
        label_6->setText(QApplication::translate("SerialDebugWidget", "ms", nullptr));
        groupBox->setTitle(QApplication::translate("SerialDebugWidget", "Serial Port Settings", nullptr));
        label_2->setText(QApplication::translate("SerialDebugWidget", "Baud Rate", nullptr));
        send_line_checkbox->setText(QApplication::translate("SerialDebugWidget", "Send New Line", nullptr));
        stopbitsCBox->setItemText(0, QApplication::translate("SerialDebugWidget", "1", nullptr));
        stopbitsCBox->setItemText(1, QApplication::translate("SerialDebugWidget", "1.5", nullptr));
        stopbitsCBox->setItemText(2, QApplication::translate("SerialDebugWidget", "2", nullptr));

        label_3->setText(QApplication::translate("SerialDebugWidget", "Data Bits", nullptr));
        databits_ComboBox->setItemText(0, QApplication::translate("SerialDebugWidget", "5", nullptr));
        databits_ComboBox->setItemText(1, QApplication::translate("SerialDebugWidget", "6", nullptr));
        databits_ComboBox->setItemText(2, QApplication::translate("SerialDebugWidget", "7", nullptr));
        databits_ComboBox->setItemText(3, QApplication::translate("SerialDebugWidget", "8", nullptr));

        sendbutton->setText(QApplication::translate("SerialDebugWidget", "Send", nullptr));
        baudrate_CBox->setItemText(0, QApplication::translate("SerialDebugWidget", "1200", nullptr));
        baudrate_CBox->setItemText(1, QApplication::translate("SerialDebugWidget", "2400", nullptr));
        baudrate_CBox->setItemText(2, QApplication::translate("SerialDebugWidget", "4800", nullptr));
        baudrate_CBox->setItemText(3, QApplication::translate("SerialDebugWidget", "9600", nullptr));
        baudrate_CBox->setItemText(4, QApplication::translate("SerialDebugWidget", "19200", nullptr));
        baudrate_CBox->setItemText(5, QApplication::translate("SerialDebugWidget", "38400", nullptr));
        baudrate_CBox->setItemText(6, QApplication::translate("SerialDebugWidget", "57600", nullptr));
        baudrate_CBox->setItemText(7, QApplication::translate("SerialDebugWidget", "115200", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SerialDebugWidget: public Ui_SerialDebugWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALDEBUGWIDGET_H
