/****************************************************************************
** Meta object code from reading C++ file 'minedialogs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../minedialogs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'minedialogs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CustomDialog_t {
    QByteArrayData data[12];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomDialog_t qt_meta_stringdata_CustomDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CustomDialog"
QT_MOC_LITERAL(1, 13, 10), // "cuschanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 2), // "ww"
QT_MOC_LITERAL(4, 28, 2), // "hh"
QT_MOC_LITERAL(5, 31, 2), // "bb"
QT_MOC_LITERAL(6, 34, 7), // "setcval"
QT_MOC_LITERAL(7, 42, 2), // "_w"
QT_MOC_LITERAL(8, 45, 2), // "_h"
QT_MOC_LITERAL(9, 48, 2), // "_b"
QT_MOC_LITERAL(10, 51, 7), // "setself"
QT_MOC_LITERAL(11, 59, 6) // "accept"

    },
    "CustomDialog\0cuschanged\0\0ww\0hh\0bb\0"
    "setcval\0_w\0_h\0_b\0setself\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   41,    2, 0x0a /* Public */,
      10,    0,   48,    2, 0x0a /* Public */,
      11,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CustomDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomDialog *_t = static_cast<CustomDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->cuschanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->setcval((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->setself(); break;
        case 3: _t->accept(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (CustomDialog::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomDialog::cuschanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CustomDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CustomDialog.data,
      qt_meta_data_CustomDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CustomDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CustomDialog.stringdata0))
        return static_cast<void*>(const_cast< CustomDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CustomDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
int CustomDialog::cuschanged(int _t1, int _t2, int _t3)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
struct qt_meta_stringdata_KernalDialog_t {
    QByteArrayData data[9];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KernalDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KernalDialog_t qt_meta_stringdata_KernalDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KernalDialog"
QT_MOC_LITERAL(1, 13, 8), // "kchanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 2), // "_x"
QT_MOC_LITERAL(4, 26, 2), // "_y"
QT_MOC_LITERAL(5, 29, 4), // "_val"
QT_MOC_LITERAL(6, 34, 7), // "setkval"
QT_MOC_LITERAL(7, 42, 7), // "setself"
QT_MOC_LITERAL(8, 50, 6) // "accept"

    },
    "KernalDialog\0kchanged\0\0_x\0_y\0_val\0"
    "setkval\0setself\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KernalDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   41,    2, 0x0a /* Public */,
       7,    0,   48,    2, 0x0a /* Public */,
       8,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KernalDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KernalDialog *_t = static_cast<KernalDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->kchanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->setkval((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->setself(); break;
        case 3: _t->accept(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (KernalDialog::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KernalDialog::kchanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject KernalDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_KernalDialog.data,
      qt_meta_data_KernalDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KernalDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KernalDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KernalDialog.stringdata0))
        return static_cast<void*>(const_cast< KernalDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int KernalDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
int KernalDialog::kchanged(int _t1, int _t2, int _t3)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
struct qt_meta_stringdata_RankDialog_t {
    QByteArrayData data[11];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RankDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RankDialog_t qt_meta_stringdata_RankDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RankDialog"
QT_MOC_LITERAL(1, 11, 7), // "setname"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 3), // "str"
QT_MOC_LITERAL(4, 24, 3), // "_lv"
QT_MOC_LITERAL(5, 28, 7), // "settime"
QT_MOC_LITERAL(6, 36, 3), // "tmd"
QT_MOC_LITERAL(7, 40, 8), // "readrank"
QT_MOC_LITERAL(8, 49, 9), // "writerank"
QT_MOC_LITERAL(9, 59, 9), // "clearrank"
QT_MOC_LITERAL(10, 69, 7) // "getrank"

    },
    "RankDialog\0setname\0\0str\0_lv\0settime\0"
    "tmd\0readrank\0writerank\0clearrank\0"
    "getrank"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RankDialog[] = {

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
       1,    2,   44,    2, 0x0a /* Public */,
       5,    2,   49,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,    4,

       0        // eod
};

void RankDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RankDialog *_t = static_cast<RankDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setname((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->settime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->readrank(); break;
        case 3: _t->writerank(); break;
        case 4: _t->clearrank(); break;
        case 5: { int _r = _t->getrank((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject RankDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RankDialog.data,
      qt_meta_data_RankDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RankDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RankDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RankDialog.stringdata0))
        return static_cast<void*>(const_cast< RankDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RankDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_RankName_t {
    QByteArrayData data[5];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RankName_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RankName_t qt_meta_stringdata_RankName = {
    {
QT_MOC_LITERAL(0, 0, 8), // "RankName"
QT_MOC_LITERAL(1, 9, 7), // "getname"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 3), // "str"
QT_MOC_LITERAL(4, 22, 6) // "accept"

    },
    "RankName\0getname\0\0str\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RankName[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void RankName::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RankName *_t = static_cast<RankName *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->getname((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->accept(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (RankName::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RankName::getname)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RankName::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RankName.data,
      qt_meta_data_RankName,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RankName::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RankName::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RankName.stringdata0))
        return static_cast<void*>(const_cast< RankName*>(this));
    return QDialog::qt_metacast(_clname);
}

int RankName::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
int RankName::getname(QString _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
