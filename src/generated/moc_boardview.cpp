/****************************************************************************
** Meta object code from reading C++ file 'boardview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/boardview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boardview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BoardView_t {
    QByteArrayData data[33];
    char stringdata[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoardView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoardView_t qt_meta_stringdata_BoardView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BoardView"
QT_MOC_LITERAL(1, 10, 8), // "moveMade"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "Square"
QT_MOC_LITERAL(4, 27, 4), // "from"
QT_MOC_LITERAL(5, 32, 2), // "to"
QT_MOC_LITERAL(6, 35, 6), // "button"
QT_MOC_LITERAL(7, 42, 9), // "copyPiece"
QT_MOC_LITERAL(8, 52, 11), // "invalidMove"
QT_MOC_LITERAL(9, 64, 7), // "clicked"
QT_MOC_LITERAL(10, 72, 6), // "square"
QT_MOC_LITERAL(11, 79, 3), // "pos"
QT_MOC_LITERAL(12, 83, 13), // "wheelScrolled"
QT_MOC_LITERAL(13, 97, 3), // "dir"
QT_MOC_LITERAL(14, 101, 12), // "pieceDropped"
QT_MOC_LITERAL(15, 114, 5), // "Piece"
QT_MOC_LITERAL(16, 120, 1), // "p"
QT_MOC_LITERAL(17, 122, 11), // "moveStarted"
QT_MOC_LITERAL(18, 134, 12), // "moveFinished"
QT_MOC_LITERAL(19, 147, 10), // "setFlipped"
QT_MOC_LITERAL(20, 158, 7), // "flipped"
QT_MOC_LITERAL(21, 166, 4), // "flip"
QT_MOC_LITERAL(22, 171, 9), // "configure"
QT_MOC_LITERAL(23, 181, 10), // "setEnabled"
QT_MOC_LITERAL(24, 192, 7), // "enabled"
QT_MOC_LITERAL(25, 200, 11), // "setDisabled"
QT_MOC_LITERAL(26, 212, 8), // "disabled"
QT_MOC_LITERAL(27, 221, 13), // "setStoredMove"
QT_MOC_LITERAL(28, 235, 10), // "showThreat"
QT_MOC_LITERAL(29, 246, 13), // "Guess::Result"
QT_MOC_LITERAL(30, 260, 2), // "sm"
QT_MOC_LITERAL(31, 263, 5), // "Board"
QT_MOC_LITERAL(32, 269, 1) // "b"

    },
    "BoardView\0moveMade\0\0Square\0from\0to\0"
    "button\0copyPiece\0invalidMove\0clicked\0"
    "square\0pos\0wheelScrolled\0dir\0pieceDropped\0"
    "Piece\0p\0moveStarted\0moveFinished\0"
    "setFlipped\0flipped\0flip\0configure\0"
    "setEnabled\0enabled\0setDisabled\0disabled\0"
    "setStoredMove\0showThreat\0Guess::Result\0"
    "sm\0Board\0b"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoardView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x06 /* Public */,
       7,    2,   96,    2, 0x06 /* Public */,
       8,    1,  101,    2, 0x06 /* Public */,
       9,    4,  104,    2, 0x06 /* Public */,
      12,    1,  113,    2, 0x06 /* Public */,
      14,    2,  116,    2, 0x06 /* Public */,
      17,    0,  121,    2, 0x06 /* Public */,
      18,    0,  122,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  123,    2, 0x0a /* Public */,
      21,    0,  126,    2, 0x0a /* Public */,
      22,    0,  127,    2, 0x0a /* Public */,
      23,    1,  128,    2, 0x0a /* Public */,
      25,    1,  131,    2, 0x0a /* Public */,
      27,    2,  134,    2, 0x0a /* Public */,
      28,    2,  139,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::QPoint, 0x80000000 | 3,   10,    6,   11,    4,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 15,    5,   16,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 31,   30,   32,

       0        // eod
};

void BoardView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoardView *_t = static_cast<BoardView *>(_o);
        switch (_id) {
        case 0: _t->moveMade((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->copyPiece((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2]))); break;
        case 2: _t->invalidMove((*reinterpret_cast< Square(*)>(_a[1]))); break;
        case 3: _t->clicked((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3])),(*reinterpret_cast< Square(*)>(_a[4]))); break;
        case 4: _t->wheelScrolled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->pieceDropped((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Piece(*)>(_a[2]))); break;
        case 6: _t->moveStarted(); break;
        case 7: _t->moveFinished(); break;
        case 8: _t->setFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->flip(); break;
        case 10: _t->configure(); break;
        case 11: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setStoredMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->showThreat((*reinterpret_cast< Guess::Result(*)>(_a[1])),(*reinterpret_cast< Board(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BoardView::*_t)(Square , Square , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoardView::moveMade)) {
                *result = 0;
            }
        }
        {
            typedef void (BoardView::*_t)(Square , Square );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoardView::copyPiece)) {
                *result = 1;
            }
        }
        {
            typedef void (BoardView::*_t)(Square );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoardView::invalidMove)) {
                *result = 2;
            }
        }
        {
            typedef void (BoardView::*_t)(Square , int , QPoint , Square );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoardView::clicked)) {
                *result = 3;
            }
        }
        {
            typedef void (BoardView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoardView::wheelScrolled)) {
                *result = 4;
            }
        }
        {
            typedef void (BoardView::*_t)(Square , Piece );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoardView::pieceDropped)) {
                *result = 5;
            }
        }
        {
            typedef void (BoardView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoardView::moveStarted)) {
                *result = 6;
            }
        }
        {
            typedef void (BoardView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BoardView::moveFinished)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject BoardView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BoardView.data,
      qt_meta_data_BoardView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BoardView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BoardView.stringdata))
        return static_cast<void*>(const_cast< BoardView*>(this));
    return QWidget::qt_metacast(_clname);
}

int BoardView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void BoardView::moveMade(Square _t1, Square _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BoardView::copyPiece(Square _t1, Square _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BoardView::invalidMove(Square _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BoardView::clicked(Square _t1, int _t2, QPoint _t3, Square _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BoardView::wheelScrolled(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BoardView::pieceDropped(Square _t1, Piece _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void BoardView::moveStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void BoardView::moveFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
struct qt_meta_stringdata_BoardViewMimeData_t {
    QByteArrayData data[1];
    char stringdata[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoardViewMimeData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoardViewMimeData_t qt_meta_stringdata_BoardViewMimeData = {
    {
QT_MOC_LITERAL(0, 0, 17) // "BoardViewMimeData"

    },
    "BoardViewMimeData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoardViewMimeData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BoardViewMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BoardViewMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_BoardViewMimeData.data,
      qt_meta_data_BoardViewMimeData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BoardViewMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardViewMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BoardViewMimeData.stringdata))
        return static_cast<void*>(const_cast< BoardViewMimeData*>(this));
    return QMimeData::qt_metacast(_clname);
}

int BoardViewMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
