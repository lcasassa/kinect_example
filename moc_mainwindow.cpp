/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Apr 17 14:23:30 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      25,   11,   11,   11, 0x08,
      55,   50,   11,   11, 0x08,
     110,   50,   11,   11, 0x08,
     165,   50,   11,   11, 0x08,
     207,   50,   11,   11, 0x08,
     250,   50,   11,   11, 0x08,
     306,   50,   11,   11, 0x08,
     365,  359,   11,   11, 0x08,
     398,   50,   11,   11, 0x08,
     448,   50,   11,   11, 0x08,
     490,   50,   11,   11, 0x08,
     533,  359,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0imageReady()\0"
    "on_pushButton_released()\0arg1\0"
    "on_doubleSpinBox_canny_threshold1_valueChanged(double)\0"
    "on_doubleSpinBox_canny_threshold2_valueChanged(double)\0"
    "on_spinBox_hl_threshold_valueChanged(int)\0"
    "on_spinBox_hlp_threshold_valueChanged(int)\0"
    "on_doubleSpinBox_hlp_minLineLength_valueChanged(double)\0"
    "on_doubleSpinBox_hlp_maxLineGap_valueChanged(double)\0"
    "index\0on_tabWidget_currentChanged(int)\0"
    "on_doubleSpinBox_at_maxValue_valueChanged(double)\0"
    "on_spinBox_at_blockSize_valueChanged(int)\0"
    "on_doubleSpinBox_at_C_valueChanged(double)\0"
    "on_tabWidget_2_currentChanged(int)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: imageReady(); break;
        case 1: on_pushButton_released(); break;
        case 2: on_doubleSpinBox_canny_threshold1_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: on_doubleSpinBox_canny_threshold2_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: on_spinBox_hl_threshold_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: on_spinBox_hlp_threshold_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: on_doubleSpinBox_hlp_minLineLength_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: on_doubleSpinBox_hlp_maxLineGap_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: on_doubleSpinBox_at_maxValue_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: on_spinBox_at_blockSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: on_doubleSpinBox_at_C_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: on_tabWidget_2_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
