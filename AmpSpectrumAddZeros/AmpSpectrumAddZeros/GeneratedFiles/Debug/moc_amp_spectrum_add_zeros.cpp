/****************************************************************************
** Meta object code from reading C++ file 'amp_spectrum_add_zeros.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../amp_spectrum_add_zeros.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amp_spectrum_add_zeros.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CAmpSpectrumAddZeros_t {
    QByteArrayData data[14];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CAmpSpectrumAddZeros_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CAmpSpectrumAddZeros_t qt_meta_stringdata_CAmpSpectrumAddZeros = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CAmpSpectrumAddZeros"
QT_MOC_LITERAL(1, 21, 27), // "on_Par0SpinBox_valueChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 9), // "new_value"
QT_MOC_LITERAL(4, 60, 32), // "on_OutputFile1PushButton_clicked"
QT_MOC_LITERAL(5, 93, 32), // "on_OutputFile2PushButton_clicked"
QT_MOC_LITERAL(6, 126, 32), // "on_OutputFile3PushButton_clicked"
QT_MOC_LITERAL(7, 159, 32), // "on_OutputFile4PushButton_clicked"
QT_MOC_LITERAL(8, 192, 32), // "on_OutputFile5PushButton_clicked"
QT_MOC_LITERAL(9, 225, 32), // "on_OutputFile6PushButton_clicked"
QT_MOC_LITERAL(10, 258, 32), // "on_OutputFile7PushButton_clicked"
QT_MOC_LITERAL(11, 291, 32), // "on_OutputFile8PushButton_clicked"
QT_MOC_LITERAL(12, 324, 24), // "on_CalPushButton_clicked"
QT_MOC_LITERAL(13, 349, 27) // "on_CancelPushButton_clicked"

    },
    "CAmpSpectrumAddZeros\0on_Par0SpinBox_valueChanged\0"
    "\0new_value\0on_OutputFile1PushButton_clicked\0"
    "on_OutputFile2PushButton_clicked\0"
    "on_OutputFile3PushButton_clicked\0"
    "on_OutputFile4PushButton_clicked\0"
    "on_OutputFile5PushButton_clicked\0"
    "on_OutputFile6PushButton_clicked\0"
    "on_OutputFile7PushButton_clicked\0"
    "on_OutputFile8PushButton_clicked\0"
    "on_CalPushButton_clicked\0"
    "on_CancelPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CAmpSpectrumAddZeros[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    0,   72,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CAmpSpectrumAddZeros::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CAmpSpectrumAddZeros *_t = static_cast<CAmpSpectrumAddZeros *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Par0SpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_OutputFile1PushButton_clicked(); break;
        case 2: _t->on_OutputFile2PushButton_clicked(); break;
        case 3: _t->on_OutputFile3PushButton_clicked(); break;
        case 4: _t->on_OutputFile4PushButton_clicked(); break;
        case 5: _t->on_OutputFile5PushButton_clicked(); break;
        case 6: _t->on_OutputFile6PushButton_clicked(); break;
        case 7: _t->on_OutputFile7PushButton_clicked(); break;
        case 8: _t->on_OutputFile8PushButton_clicked(); break;
        case 9: _t->on_CalPushButton_clicked(); break;
        case 10: _t->on_CancelPushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CAmpSpectrumAddZeros::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CAmpSpectrumAddZeros.data,
      qt_meta_data_CAmpSpectrumAddZeros,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CAmpSpectrumAddZeros::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CAmpSpectrumAddZeros::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CAmpSpectrumAddZeros.stringdata0))
        return static_cast<void*>(const_cast< CAmpSpectrumAddZeros*>(this));
    return QDialog::qt_metacast(_clname);
}

int CAmpSpectrumAddZeros::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
