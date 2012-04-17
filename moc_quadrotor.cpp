/****************************************************************************
** Meta object code from reading C++ file 'quadrotor.h'
**
** Created: Tue Apr 17 15:56:44 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "quadrotor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quadrotor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Quadrotor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   39,   10,   10, 0x0a,
      61,   10,   10,   10, 0x2a,
      71,   39,   10,   10, 0x0a,
      94,   88,   10,   10, 0x0a,
     111,   88,   10,   10, 0x0a,
     128,   88,   10,   10, 0x0a,
     145,   88,   10,   10, 0x0a,
     162,   88,   10,   10, 0x0a,
     179,   88,   10,   10, 0x0a,
     196,   88,   10,   10, 0x0a,
     213,   88,   10,   10, 0x0a,
     230,   88,   10,   10, 0x0a,
     246,   88,   10,   10, 0x0a,
     262,   88,   10,   10, 0x0a,
     278,   88,   10,   10, 0x0a,
     295,   88,   10,   10, 0x0a,
     312,   88,   10,   10, 0x0a,
     334,   88,   10,   10, 0x0a,
     358,   88,   10,   10, 0x0a,
     380,   88,   10,   10, 0x0a,
     404,   10,   10,   10, 0x0a,
     421,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Quadrotor[] = {
    "Quadrotor\0\0sendToQuadrotor(QByteArray)\0"
    "b\0recieve(QByteArray)\0recieve()\0"
    "send(QByteArray)\0value\0setX_PA(quint16)\0"
    "setX_IA(quint16)\0setX_PG(quint16)\0"
    "setX_IG(quint16)\0setY_PA(quint16)\0"
    "setY_IA(quint16)\0setY_PG(quint16)\0"
    "setY_IG(quint16)\0setZ_P(quint16)\0"
    "setZ_I(quint16)\0setZ_D(quint16)\0"
    "setX_AB(quint16)\0setY_AB(quint16)\0"
    "setE1_offset(quint16)\0setE1_ganancia(quint16)\0"
    "setE2_offset(quint16)\0setE2_ganancia(quint16)\0"
    "saveParameters()\0getParameters()\0"
};

const QMetaObject Quadrotor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Quadrotor,
      qt_meta_data_Quadrotor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Quadrotor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Quadrotor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Quadrotor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Quadrotor))
        return static_cast<void*>(const_cast< Quadrotor*>(this));
    return QObject::qt_metacast(_clname);
}

int Quadrotor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendToQuadrotor((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: recieve((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: recieve(); break;
        case 3: send((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: setX_PA((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 5: setX_IA((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 6: setX_PG((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 7: setX_IG((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 8: setY_PA((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 9: setY_IA((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 10: setY_PG((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 11: setY_IG((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 12: setZ_P((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 13: setZ_I((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 14: setZ_D((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 15: setX_AB((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 16: setY_AB((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 17: setE1_offset((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 18: setE1_ganancia((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 19: setE2_offset((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 20: setE2_ganancia((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 21: saveParameters(); break;
        case 22: getParameters(); break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void Quadrotor::sendToQuadrotor(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
