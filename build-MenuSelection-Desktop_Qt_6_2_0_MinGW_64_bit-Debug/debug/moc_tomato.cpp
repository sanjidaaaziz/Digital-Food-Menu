/****************************************************************************
** Meta object code from reading C++ file 'tomato.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MenuSelection/tomato.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tomato.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tomato_t {
    const uint offsetsAndSize[28];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_tomato_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_tomato_t qt_meta_stringdata_tomato = {
    {
QT_MOC_LITERAL(0, 6), // "tomato"
QT_MOC_LITERAL(7, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(56, 4), // "arg1"
QT_MOC_LITERAL(61, 25), // "on_spinBox_2_valueChanged"
QT_MOC_LITERAL(87, 25), // "on_spinBox_3_valueChanged"
QT_MOC_LITERAL(113, 25), // "on_spinBox_4_valueChanged"
QT_MOC_LITERAL(139, 25), // "on_spinBox_5_valueChanged"
QT_MOC_LITERAL(165, 25), // "on_spinBox_6_valueChanged"
QT_MOC_LITERAL(191, 25), // "on_spinBox_7_valueChanged"
QT_MOC_LITERAL(217, 25), // "on_spinBox_8_valueChanged"
QT_MOC_LITERAL(243, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(265, 23) // "on_pushButton_4_clicked"

    },
    "tomato\0on_pushButton_2_clicked\0\0"
    "on_spinBox_valueChanged\0arg1\0"
    "on_spinBox_2_valueChanged\0"
    "on_spinBox_3_valueChanged\0"
    "on_spinBox_4_valueChanged\0"
    "on_spinBox_5_valueChanged\0"
    "on_spinBox_6_valueChanged\0"
    "on_spinBox_7_valueChanged\0"
    "on_spinBox_8_valueChanged\0"
    "on_pushButton_clicked\0on_pushButton_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tomato[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    1,   81,    2, 0x08,    2 /* Private */,
       5,    1,   84,    2, 0x08,    4 /* Private */,
       6,    1,   87,    2, 0x08,    6 /* Private */,
       7,    1,   90,    2, 0x08,    8 /* Private */,
       8,    1,   93,    2, 0x08,   10 /* Private */,
       9,    1,   96,    2, 0x08,   12 /* Private */,
      10,    1,   99,    2, 0x08,   14 /* Private */,
      11,    1,  102,    2, 0x08,   16 /* Private */,
      12,    0,  105,    2, 0x08,   18 /* Private */,
      13,    0,  106,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tomato::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<tomato *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_spinBox_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_spinBox_3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_spinBox_4_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_spinBox_5_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_spinBox_6_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinBox_7_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinBox_8_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject tomato::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_tomato.offsetsAndSize,
    qt_meta_data_tomato,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_tomato_t
, QtPrivate::TypeAndForceComplete<tomato, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *tomato::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tomato::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tomato.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int tomato::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
