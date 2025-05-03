/****************************************************************************
** Meta object code from reading C++ file 'networkdebugwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "networkdebugwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkdebugwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_networkdebugwidget_t {
    QByteArrayData data[14];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_networkdebugwidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_networkdebugwidget_t qt_meta_stringdata_networkdebugwidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "networkdebugwidget"
QT_MOC_LITERAL(1, 19, 18), // "on_refresh_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "on_listen_clicked"
QT_MOC_LITERAL(4, 57, 18), // "on_connect_clicked"
QT_MOC_LITERAL(5, 76, 19), // "on_clr_recv_clicked"
QT_MOC_LITERAL(6, 96, 21), // "on_pause_recv_clicked"
QT_MOC_LITERAL(7, 118, 19), // "on_clr_send_clicked"
QT_MOC_LITERAL(8, 138, 24), // "on_clk_send_stateChanged"
QT_MOC_LITERAL(9, 163, 5), // "state"
QT_MOC_LITERAL(10, 169, 15), // "on_send_clicked"
QT_MOC_LITERAL(11, 185, 16), // "newTcpConnection"
QT_MOC_LITERAL(12, 202, 15), // "tcpDisconnected"
QT_MOC_LITERAL(13, 218, 15) // "socketReadyRead"

    },
    "networkdebugwidget\0on_refresh_clicked\0"
    "\0on_listen_clicked\0on_connect_clicked\0"
    "on_clr_recv_clicked\0on_pause_recv_clicked\0"
    "on_clr_send_clicked\0on_clk_send_stateChanged\0"
    "state\0on_send_clicked\0newTcpConnection\0"
    "tcpDisconnected\0socketReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_networkdebugwidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void networkdebugwidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<networkdebugwidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_refresh_clicked(); break;
        case 1: _t->on_listen_clicked(); break;
        case 2: _t->on_connect_clicked(); break;
        case 3: _t->on_clr_recv_clicked(); break;
        case 4: _t->on_pause_recv_clicked(); break;
        case 5: _t->on_clr_send_clicked(); break;
        case 6: _t->on_clk_send_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_send_clicked(); break;
        case 8: _t->newTcpConnection(); break;
        case 9: _t->tcpDisconnected(); break;
        case 10: _t->socketReadyRead(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject networkdebugwidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_networkdebugwidget.data,
    qt_meta_data_networkdebugwidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *networkdebugwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *networkdebugwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_networkdebugwidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int networkdebugwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
