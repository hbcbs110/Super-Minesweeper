/****************************************************************************
** Meta object code from reading C++ file 'mineblock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mineblock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mineblock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClickLabel_t {
    QByteArrayData data[4];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClickLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClickLabel_t qt_meta_stringdata_ClickLabel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ClickLabel"
QT_MOC_LITERAL(1, 11, 8), // "clickedL"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8) // "clickedR"

    },
    "ClickLabel\0clickedL\0\0clickedR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClickLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Int,
    QMetaType::Int,

       0        // eod
};

void ClickLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClickLabel *_t = static_cast<ClickLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->clickedL();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->clickedR();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (ClickLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClickLabel::clickedL)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (ClickLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClickLabel::clickedR)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ClickLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ClickLabel.data,
      qt_meta_data_ClickLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClickLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClickLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClickLabel.stringdata0))
        return static_cast<void*>(const_cast< ClickLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int ClickLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
int ClickLabel::clickedL()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int ClickLabel::clickedR()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
struct qt_meta_stringdata_Block_t {
    QByteArrayData data[17];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Block_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Block_t qt_meta_stringdata_Block = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Block"
QT_MOC_LITERAL(1, 6, 3), // "dug"
QT_MOC_LITERAL(2, 10, 0), // ""
QT_MOC_LITERAL(3, 11, 2), // "_x"
QT_MOC_LITERAL(4, 14, 2), // "_y"
QT_MOC_LITERAL(5, 17, 6), // "detect"
QT_MOC_LITERAL(6, 24, 9), // "multiflag"
QT_MOC_LITERAL(7, 34, 6), // "enflag"
QT_MOC_LITERAL(8, 41, 6), // "deflag"
QT_MOC_LITERAL(9, 48, 4), // "doom"
QT_MOC_LITERAL(10, 53, 7), // "refresh"
QT_MOC_LITERAL(11, 61, 4), // "flag"
QT_MOC_LITERAL(12, 66, 3), // "dig"
QT_MOC_LITERAL(13, 70, 4), // "safe"
QT_MOC_LITERAL(14, 75, 3), // "dis"
QT_MOC_LITERAL(15, 79, 11), // "nonetrigger"
QT_MOC_LITERAL(16, 91, 13) // "denonetrigger"

    },
    "Block\0dug\0\0_x\0_y\0detect\0multiflag\0"
    "enflag\0deflag\0doom\0refresh\0flag\0dig\0"
    "safe\0dis\0nonetrigger\0denonetrigger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Block[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       1,    2,  100,    2, 0x06 /* Public */,
       5,    0,  105,    2, 0x06 /* Public */,
       5,    2,  106,    2, 0x06 /* Public */,
       6,    0,  111,    2, 0x06 /* Public */,
       6,    2,  112,    2, 0x06 /* Public */,
       7,    0,  117,    2, 0x06 /* Public */,
       8,    0,  118,    2, 0x06 /* Public */,
       9,    0,  119,    2, 0x06 /* Public */,
       9,    2,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  125,    2, 0x0a /* Public */,
      11,    0,  126,    2, 0x0a /* Public */,
      12,    0,  127,    2, 0x0a /* Public */,
      13,    0,  128,    2, 0x0a /* Public */,
      14,    0,  129,    2, 0x0a /* Public */,
      15,    0,  130,    2, 0x0a /* Public */,
      16,    0,  131,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Block::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Block *_t = static_cast<Block *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->dug();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->dug((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->detect();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->detect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->multiflag();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->multiflag((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->enflag();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->deflag();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->doom();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->doom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->refresh(); break;
        case 11: _t->flag(); break;
        case 12: _t->dig(); break;
        case 13: { bool _r = _t->safe();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->dis(); break;
        case 15: _t->nonetrigger(); break;
        case 16: _t->denonetrigger(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (Block::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Block::dug)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (Block::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Block::dug)) {
                *result = 1;
                return;
            }
        }
        {
            typedef int (Block::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Block::detect)) {
                *result = 2;
                return;
            }
        }
        {
            typedef int (Block::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Block::detect)) {
                *result = 3;
                return;
            }
        }
        {
            typedef int (Block::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Block::multiflag)) {
                *result = 4;
                return;
            }
        }
        {
            typedef int (Block::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Block::multiflag)) {
                *result = 5;
                return;
            }
        }
        {
            typedef int (Block::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Block::enflag)) {
                *result = 6;
                return;
            }
        }
        {
            typedef int (Block::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Block::deflag)) {
                *result = 7;
                return;
            }
        }
        {
            typedef int (Block::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Block::doom)) {
                *result = 8;
                return;
            }
        }
        {
            typedef int (Block::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Block::doom)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject Block::staticMetaObject = {
    { &ClickLabel::staticMetaObject, qt_meta_stringdata_Block.data,
      qt_meta_data_Block,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Block::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Block::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Block.stringdata0))
        return static_cast<void*>(const_cast< Block*>(this));
    return ClickLabel::qt_metacast(_clname);
}

int Block::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ClickLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
int Block::dug()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int Block::dug(int _t1, int _t2)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
int Block::detect()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
int Block::detect(int _t1, int _t2)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
int Block::multiflag()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
int Block::multiflag(int _t1, int _t2)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}

// SIGNAL 6
int Block::enflag()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
    return _t0;
}

// SIGNAL 7
int Block::deflag()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
    return _t0;
}

// SIGNAL 8
int Block::doom()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
    return _t0;
}

// SIGNAL 9
int Block::doom(int _t1, int _t2)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
