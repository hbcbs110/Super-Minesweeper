/****************************************************************************
** Meta object code from reading C++ file 'minetimer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../superminesweeper-git/minetimer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'minetimer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Numberboard_t {
    QByteArrayData data[8];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Numberboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Numberboard_t qt_meta_stringdata_Numberboard = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Numberboard"
QT_MOC_LITERAL(1, 12, 5), // "clear"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 4), // "plus"
QT_MOC_LITERAL(4, 24, 5), // "minus"
QT_MOC_LITERAL(5, 30, 1), // "n"
QT_MOC_LITERAL(6, 32, 6), // "getnum"
QT_MOC_LITERAL(7, 39, 5) // "setnm"

    },
    "Numberboard\0clear\0\0plus\0minus\0n\0getnum\0"
    "setnm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Numberboard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       3,    1,   47,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void Numberboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Numberboard *_t = static_cast<Numberboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->plus(); break;
        case 2: _t->minus(); break;
        case 3: _t->plus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { int _r = _t->getnum();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->setnm((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Numberboard::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_Numberboard.data,
      qt_meta_data_Numberboard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Numberboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Numberboard::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Numberboard.stringdata0))
        return static_cast<void*>(const_cast< Numberboard*>(this));
    return QLabel::qt_metacast(_clname);
}

int Numberboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_myTimer_t {
    QByteArrayData data[5];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myTimer_t qt_meta_stringdata_myTimer = {
    {
QT_MOC_LITERAL(0, 0, 7), // "myTimer"
QT_MOC_LITERAL(1, 8, 5), // "start"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 4), // "stop"
QT_MOC_LITERAL(4, 20, 5) // "reset"

    },
    "myTimer\0start\0\0stop\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void myTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myTimer *_t = static_cast<myTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->stop(); break;
        case 2: _t->reset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject myTimer::staticMetaObject = {
    { &Numberboard::staticMetaObject, qt_meta_stringdata_myTimer.data,
      qt_meta_data_myTimer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *myTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_myTimer.stringdata0))
        return static_cast<void*>(const_cast< myTimer*>(this));
    return Numberboard::qt_metacast(_clname);
}

int myTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Numberboard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
