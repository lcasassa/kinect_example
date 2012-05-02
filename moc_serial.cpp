/****************************************************************************
** Meta object code from reading C++ file 'serial.h'
**
** Created: Thu Apr 26 15:49:12 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "serial.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Serial[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      32,    7,    7,    7, 0x05,
      62,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      91,   89,    7,    7, 0x0a,
     108,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Serial[] = {
    "Serial\0\0nuevosDatos(QList<int>)\0"
    "serialTextReceive(QByteArray)\0"
    "serialTextSend(QByteArray)\0s\0"
    "send(QByteArray)\0readyRead()\0"
};

const QMetaObject Serial::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Serial,
      qt_meta_data_Serial, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Serial::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Serial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Serial::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Serial))
        return static_cast<void*>(const_cast< Serial*>(this));
    return QObject::qt_metacast(_clname);
}

int Serial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nuevosDatos((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 1: serialTextReceive((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: serialTextSend((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: send((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: readyRead(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Serial::nuevosDatos(QList<int> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Serial::serialTextReceive(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Serial::serialTextSend(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
