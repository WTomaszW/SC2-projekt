/****************************************************************************
** Meta object code from reading C++ file 'interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Client_email/interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Interface_t {
    QByteArrayData data[14];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Interface_t qt_meta_stringdata_Interface = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Interface"
QT_MOC_LITERAL(1, 10, 4), // "exit"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 4), // "read"
QT_MOC_LITERAL(4, 21, 4), // "send"
QT_MOC_LITERAL(5, 26, 11), // "createInbox"
QT_MOC_LITERAL(6, 38, 12), // "readMessages"
QT_MOC_LITERAL(7, 51, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(8, 75, 27), // "on_actionReceived_triggered"
QT_MOC_LITERAL(9, 103, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 125, 30), // "on_actionNew_message_triggered"
QT_MOC_LITERAL(11, 156, 14), // "DisplayMessage"
QT_MOC_LITERAL(12, 171, 4), // "runn"
QT_MOC_LITERAL(13, 176, 5) // "index"

    },
    "Interface\0exit\0\0read\0send\0createInbox\0"
    "readMessages\0on_actionExit_triggered\0"
    "on_actionReceived_triggered\0"
    "on_pushButton_clicked\0"
    "on_actionNew_message_triggered\0"
    "DisplayMessage\0runn\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Interface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    1,   75,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   82,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    1,   86,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QModelIndex,   13,

       0        // eod
};

void Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Interface *_t = static_cast<Interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->read((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->send((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->createInbox(); break;
        case 4: _t->readMessages((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_actionExit_triggered(); break;
        case 6: _t->on_actionReceived_triggered(); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_actionNew_message_triggered(); break;
        case 9: _t->DisplayMessage((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 10: _t->runn((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Interface::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Interface::exit)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Interface::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Interface::read)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Interface::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Interface::send)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Interface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Interface::createInbox)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Interface::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Interface::readMessages)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject Interface::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Interface.data,
      qt_meta_data_Interface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Interface.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Interface::exit(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Interface::read(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Interface::send(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Interface::createInbox()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Interface::readMessages(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
