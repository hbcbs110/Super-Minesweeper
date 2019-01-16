/****************************************************************************
** Meta object code from reading C++ file 'maingame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maingame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maingame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Kernal_t {
    QByteArrayData data[19];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Kernal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Kernal_t qt_meta_stringdata_Kernal = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Kernal"
QT_MOC_LITERAL(1, 7, 5), // "kgoit"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 2), // "_x"
QT_MOC_LITERAL(4, 17, 2), // "_y"
QT_MOC_LITERAL(5, 20, 4), // "_val"
QT_MOC_LITERAL(6, 25, 7), // "classic"
QT_MOC_LITERAL(7, 33, 6), // "knight"
QT_MOC_LITERAL(8, 40, 5), // "brick"
QT_MOC_LITERAL(9, 46, 4), // "chuz"
QT_MOC_LITERAL(10, 51, 6), // "setval"
QT_MOC_LITERAL(11, 58, 1), // "x"
QT_MOC_LITERAL(12, 60, 1), // "y"
QT_MOC_LITERAL(13, 62, 2), // "_v"
QT_MOC_LITERAL(14, 65, 8), // "setabval"
QT_MOC_LITERAL(15, 74, 6), // "setall"
QT_MOC_LITERAL(16, 81, 8), // "int[][5]"
QT_MOC_LITERAL(17, 90, 3), // "arr"
QT_MOC_LITERAL(18, 94, 8) // "gokernal"

    },
    "Kernal\0kgoit\0\0_x\0_y\0_val\0classic\0"
    "knight\0brick\0chuz\0setval\0x\0y\0_v\0"
    "setabval\0setall\0int[][5]\0arr\0gokernal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Kernal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   66,    2, 0x0a /* Public */,
       7,    0,   67,    2, 0x0a /* Public */,
       8,    0,   68,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x0a /* Public */,
      10,    3,   70,    2, 0x0a /* Public */,
      14,    3,   77,    2, 0x0a /* Public */,
      15,    1,   84,    2, 0x0a /* Public */,
      18,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,

       0        // eod
};

void Kernal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Kernal *_t = static_cast<Kernal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->kgoit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->classic(); break;
        case 2: _t->knight(); break;
        case 3: _t->brick(); break;
        case 4: _t->chuz(); break;
        case 5: _t->setval((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->setabval((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->setall((*reinterpret_cast< int(*)[][5]>(_a[1]))); break;
        case 8: _t->gokernal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (Kernal::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Kernal::kgoit)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Kernal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kernal.data,
      qt_meta_data_Kernal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Kernal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Kernal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Kernal.stringdata0))
        return static_cast<void*>(const_cast< Kernal*>(this));
    return QObject::qt_metacast(_clname);
}

int Kernal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
int Kernal::kgoit(int _t1, int _t2, int _t3)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
struct qt_meta_stringdata_MineGame_t {
    QByteArrayData data[44];
    char stringdata0[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MineGame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MineGame_t qt_meta_stringdata_MineGame = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MineGame"
QT_MOC_LITERAL(1, 9, 3), // "win"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 4), // "lose"
QT_MOC_LITERAL(4, 19, 7), // "mapsize"
QT_MOC_LITERAL(5, 27, 9), // "refreshed"
QT_MOC_LITERAL(6, 37, 8), // "kernalit"
QT_MOC_LITERAL(7, 46, 7), // "refresh"
QT_MOC_LITERAL(8, 54, 4), // "mode"
QT_MOC_LITERAL(9, 59, 2), // "_x"
QT_MOC_LITERAL(10, 62, 2), // "_y"
QT_MOC_LITERAL(11, 65, 9), // "callmenew"
QT_MOC_LITERAL(12, 75, 5), // "remap"
QT_MOC_LITERAL(13, 81, 6), // "level1"
QT_MOC_LITERAL(14, 88, 6), // "level2"
QT_MOC_LITERAL(15, 95, 6), // "level3"
QT_MOC_LITERAL(16, 102, 5), // "renew"
QT_MOC_LITERAL(17, 108, 2), // "_c"
QT_MOC_LITERAL(18, 111, 2), // "_r"
QT_MOC_LITERAL(19, 114, 2), // "_b"
QT_MOC_LITERAL(20, 117, 10), // "processdig"
QT_MOC_LITERAL(21, 128, 13), // "processdetect"
QT_MOC_LITERAL(22, 142, 16), // "processmultyflag"
QT_MOC_LITERAL(23, 159, 11), // "processdoom"
QT_MOC_LITERAL(24, 171, 12), // "processranks"
QT_MOC_LITERAL(25, 184, 11), // "getrankname"
QT_MOC_LITERAL(26, 196, 3), // "str"
QT_MOC_LITERAL(27, 200, 12), // "facialchange"
QT_MOC_LITERAL(28, 213, 3), // "emo"
QT_MOC_LITERAL(29, 217, 7), // "callcus"
QT_MOC_LITERAL(30, 225, 7), // "callker"
QT_MOC_LITERAL(31, 233, 8), // "callrank"
QT_MOC_LITERAL(32, 242, 9), // "callabout"
QT_MOC_LITERAL(33, 252, 7), // "classic"
QT_MOC_LITERAL(34, 260, 6), // "knight"
QT_MOC_LITERAL(35, 267, 5), // "brick"
QT_MOC_LITERAL(36, 273, 4), // "chuz"
QT_MOC_LITERAL(37, 278, 9), // "leftpress"
QT_MOC_LITERAL(38, 288, 10), // "rightpress"
QT_MOC_LITERAL(39, 299, 9), // "modequest"
QT_MOC_LITERAL(40, 309, 6), // "getrow"
QT_MOC_LITERAL(41, 316, 6), // "getcol"
QT_MOC_LITERAL(42, 323, 7), // "getmode"
QT_MOC_LITERAL(43, 331, 8) // "getlevel"

    },
    "MineGame\0win\0\0lose\0mapsize\0refreshed\0"
    "kernalit\0refresh\0mode\0_x\0_y\0callmenew\0"
    "remap\0level1\0level2\0level3\0renew\0_c\0"
    "_r\0_b\0processdig\0processdetect\0"
    "processmultyflag\0processdoom\0processranks\0"
    "getrankname\0str\0facialchange\0emo\0"
    "callcus\0callker\0callrank\0callabout\0"
    "classic\0knight\0brick\0chuz\0leftpress\0"
    "rightpress\0modequest\0getrow\0getcol\0"
    "getmode\0getlevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MineGame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  209,    2, 0x06 /* Public */,
       3,    0,  210,    2, 0x06 /* Public */,
       1,    1,  211,    2, 0x06 /* Public */,
       3,    1,  214,    2, 0x06 /* Public */,
       4,    2,  217,    2, 0x06 /* Public */,
       5,    0,  222,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  223,    2, 0x0a /* Public */,
       7,    3,  224,    2, 0x0a /* Public */,
       7,    2,  231,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  236,    2, 0x2a /* Public | MethodCloned */,
       7,    0,  239,    2, 0x2a /* Public | MethodCloned */,
      11,    0,  240,    2, 0x0a /* Public */,
      12,    2,  241,    2, 0x0a /* Public */,
      13,    0,  246,    2, 0x0a /* Public */,
      14,    0,  247,    2, 0x0a /* Public */,
      15,    0,  248,    2, 0x0a /* Public */,
      16,    3,  249,    2, 0x0a /* Public */,
      20,    2,  256,    2, 0x0a /* Public */,
      21,    2,  261,    2, 0x0a /* Public */,
      22,    2,  266,    2, 0x0a /* Public */,
      23,    2,  271,    2, 0x0a /* Public */,
      24,    0,  276,    2, 0x0a /* Public */,
      25,    1,  277,    2, 0x0a /* Public */,
      27,    1,  280,    2, 0x0a /* Public */,
      29,    0,  283,    2, 0x0a /* Public */,
      30,    0,  284,    2, 0x0a /* Public */,
      31,    0,  285,    2, 0x0a /* Public */,
      32,    0,  286,    2, 0x0a /* Public */,
      33,    0,  287,    2, 0x0a /* Public */,
      34,    0,  288,    2, 0x0a /* Public */,
      35,    0,  289,    2, 0x0a /* Public */,
      36,    0,  290,    2, 0x0a /* Public */,
      37,    0,  291,    2, 0x0a /* Public */,
      38,    0,  292,    2, 0x0a /* Public */,
      39,    0,  293,    2, 0x0a /* Public */,
      40,    0,  294,    2, 0x0a /* Public */,
      41,    0,  295,    2, 0x0a /* Public */,
      42,    0,  296,    2, 0x0a /* Public */,
      43,    0,  297,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int,    2,
    QMetaType::Int, QMetaType::Int,    2,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   17,   18,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::Int,   28,
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
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,

       0        // eod
};

void MineGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MineGame *_t = static_cast<MineGame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->win();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->lose();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->win((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->lose((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->mapsize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->refreshed();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->kernalit(); break;
        case 7: _t->refresh((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->refresh((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->refresh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->refresh(); break;
        case 11: _t->callmenew(); break;
        case 12: _t->remap((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->level1(); break;
        case 14: _t->level2(); break;
        case 15: _t->level3(); break;
        case 16: _t->renew((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 17: _t->processdig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->processdetect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->processmultyflag((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->processdoom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->processranks(); break;
        case 22: _t->getrankname((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->facialchange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->callcus(); break;
        case 25: _t->callker(); break;
        case 26: _t->callrank(); break;
        case 27: _t->callabout(); break;
        case 28: _t->classic(); break;
        case 29: _t->knight(); break;
        case 30: _t->brick(); break;
        case 31: _t->chuz(); break;
        case 32: _t->leftpress(); break;
        case 33: _t->rightpress(); break;
        case 34: { int _r = _t->modequest();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { int _r = _t->getrow();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->getcol();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: { int _r = _t->getmode();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 38: { int _r = _t->getlevel();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (MineGame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MineGame::win)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (MineGame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MineGame::lose)) {
                *result = 1;
                return;
            }
        }
        {
            typedef int (MineGame::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MineGame::win)) {
                *result = 2;
                return;
            }
        }
        {
            typedef int (MineGame::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MineGame::lose)) {
                *result = 3;
                return;
            }
        }
        {
            typedef int (MineGame::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MineGame::mapsize)) {
                *result = 4;
                return;
            }
        }
        {
            typedef int (MineGame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MineGame::refreshed)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject MineGame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MineGame.data,
      qt_meta_data_MineGame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MineGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MineGame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MineGame.stringdata0))
        return static_cast<void*>(const_cast< MineGame*>(this));
    return QWidget::qt_metacast(_clname);
}

int MineGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
int MineGame::win()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int MineGame::lose()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
int MineGame::win(int _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
int MineGame::lose(int _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
int MineGame::mapsize(int _t1, int _t2)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
int MineGame::refreshed()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
