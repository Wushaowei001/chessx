/****************************************************************************
** Meta object code from reading C++ file 'gamelist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/gamelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameList_t {
    QByteArrayData data[44];
    char stringdata[599];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameList_t qt_meta_stringdata_GameList = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GameList"
QT_MOC_LITERAL(1, 9, 8), // "selected"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "raiseRequest"
QT_MOC_LITERAL(4, 32, 16), // "requestMergeGame"
QT_MOC_LITERAL(5, 49, 10), // "QList<int>"
QT_MOC_LITERAL(6, 60, 20), // "requestMergeAllGames"
QT_MOC_LITERAL(7, 81, 18), // "requestMergeFilter"
QT_MOC_LITERAL(8, 100, 15), // "requestCopyGame"
QT_MOC_LITERAL(9, 116, 17), // "requestDeleteGame"
QT_MOC_LITERAL(10, 134, 15), // "requestGameData"
QT_MOC_LITERAL(11, 150, 5), // "Game&"
QT_MOC_LITERAL(12, 156, 21), // "signalFirstGameLoaded"
QT_MOC_LITERAL(13, 178, 20), // "signalLastGameLoaded"
QT_MOC_LITERAL(14, 199, 9), // "setFilter"
QT_MOC_LITERAL(15, 209, 7), // "Filter*"
QT_MOC_LITERAL(16, 217, 6), // "filter"
QT_MOC_LITERAL(17, 224, 12), // "updateFilter"
QT_MOC_LITERAL(18, 237, 12), // "simpleSearch"
QT_MOC_LITERAL(19, 250, 3), // "tag"
QT_MOC_LITERAL(20, 254, 10), // "selectGame"
QT_MOC_LITERAL(21, 265, 5), // "index"
QT_MOC_LITERAL(22, 271, 22), // "slotFilterListByPlayer"
QT_MOC_LITERAL(23, 294, 2), // "ns"
QT_MOC_LITERAL(24, 297, 21), // "slotFilterListByEvent"
QT_MOC_LITERAL(25, 319, 19), // "slotFilterListByEco"
QT_MOC_LITERAL(26, 339, 27), // "slotFilterListByEventPlayer"
QT_MOC_LITERAL(27, 367, 6), // "player"
QT_MOC_LITERAL(28, 374, 5), // "event"
QT_MOC_LITERAL(29, 380, 25), // "slotFilterListByEcoPlayer"
QT_MOC_LITERAL(30, 406, 3), // "eco"
QT_MOC_LITERAL(31, 410, 14), // "selectNextGame"
QT_MOC_LITERAL(32, 425, 18), // "selectPreviousGame"
QT_MOC_LITERAL(33, 444, 15), // "ShowContextMenu"
QT_MOC_LITERAL(34, 460, 3), // "pos"
QT_MOC_LITERAL(35, 464, 12), // "itemSelected"
QT_MOC_LITERAL(36, 477, 15), // "slotContextMenu"
QT_MOC_LITERAL(37, 493, 17), // "slotMergeAllGames"
QT_MOC_LITERAL(38, 511, 15), // "slotMergeFilter"
QT_MOC_LITERAL(39, 527, 13), // "slotMergeGame"
QT_MOC_LITERAL(40, 541, 12), // "slotCopyGame"
QT_MOC_LITERAL(41, 554, 14), // "slotDeleteGame"
QT_MOC_LITERAL(42, 569, 12), // "slotHideGame"
QT_MOC_LITERAL(43, 582, 16) // "slotItemSelected"

    },
    "GameList\0selected\0\0raiseRequest\0"
    "requestMergeGame\0QList<int>\0"
    "requestMergeAllGames\0requestMergeFilter\0"
    "requestCopyGame\0requestDeleteGame\0"
    "requestGameData\0Game&\0signalFirstGameLoaded\0"
    "signalLastGameLoaded\0setFilter\0Filter*\0"
    "filter\0updateFilter\0simpleSearch\0tag\0"
    "selectGame\0index\0slotFilterListByPlayer\0"
    "ns\0slotFilterListByEvent\0slotFilterListByEco\0"
    "slotFilterListByEventPlayer\0player\0"
    "event\0slotFilterListByEcoPlayer\0eco\0"
    "selectNextGame\0selectPreviousGame\0"
    "ShowContextMenu\0pos\0itemSelected\0"
    "slotContextMenu\0slotMergeAllGames\0"
    "slotMergeFilter\0slotMergeGame\0"
    "slotCopyGame\0slotDeleteGame\0slotHideGame\0"
    "slotItemSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  169,    2, 0x06 /* Public */,
       3,    0,  172,    2, 0x06 /* Public */,
       4,    1,  173,    2, 0x06 /* Public */,
       6,    0,  176,    2, 0x06 /* Public */,
       7,    0,  177,    2, 0x06 /* Public */,
       8,    1,  178,    2, 0x06 /* Public */,
       9,    1,  181,    2, 0x06 /* Public */,
      10,    1,  184,    2, 0x06 /* Public */,
      12,    1,  187,    2, 0x06 /* Public */,
      13,    1,  190,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  193,    2, 0x0a /* Public */,
      17,    0,  196,    2, 0x0a /* Public */,
      18,    1,  197,    2, 0x0a /* Public */,
      20,    1,  200,    2, 0x0a /* Public */,
      22,    1,  203,    2, 0x0a /* Public */,
      24,    1,  206,    2, 0x0a /* Public */,
      25,    1,  209,    2, 0x0a /* Public */,
      26,    2,  212,    2, 0x0a /* Public */,
      29,    3,  217,    2, 0x0a /* Public */,
      31,    0,  224,    2, 0x0a /* Public */,
      32,    0,  225,    2, 0x0a /* Public */,
      33,    1,  226,    2, 0x0a /* Public */,
      35,    1,  229,    2, 0x08 /* Private */,
      36,    1,  232,    2, 0x08 /* Private */,
      37,    0,  235,    2, 0x08 /* Private */,
      38,    0,  236,    2, 0x08 /* Private */,
      39,    0,  237,    2, 0x08 /* Private */,
      40,    0,  238,    2, 0x08 /* Private */,
      41,    0,  239,    2, 0x08 /* Private */,
      42,    0,  240,    2, 0x08 /* Private */,
      43,    1,  241,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   27,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   19,   30,   27,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   34,
    QMetaType::Void, QMetaType::QModelIndex,   21,
    QMetaType::Void, QMetaType::QPoint,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,

       0        // eod
};

void GameList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameList *_t = static_cast<GameList *>(_o);
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->raiseRequest(); break;
        case 2: _t->requestMergeGame((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 3: _t->requestMergeAllGames(); break;
        case 4: _t->requestMergeFilter(); break;
        case 5: _t->requestCopyGame((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 6: _t->requestDeleteGame((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 7: _t->requestGameData((*reinterpret_cast< Game(*)>(_a[1]))); break;
        case 8: _t->signalFirstGameLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->signalLastGameLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setFilter((*reinterpret_cast< Filter*(*)>(_a[1]))); break;
        case 11: _t->updateFilter(); break;
        case 12: _t->simpleSearch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->selectGame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->slotFilterListByPlayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->slotFilterListByEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->slotFilterListByEco((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->slotFilterListByEventPlayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->slotFilterListByEcoPlayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 19: { bool _r = _t->selectNextGame();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->selectPreviousGame(); break;
        case 21: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 22: _t->itemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 23: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 24: _t->slotMergeAllGames(); break;
        case 25: _t->slotMergeFilter(); break;
        case 26: _t->slotMergeGame(); break;
        case 27: _t->slotCopyGame(); break;
        case 28: _t->slotDeleteGame(); break;
        case 29: _t->slotHideGame(); break;
        case 30: _t->slotItemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::selected)) {
                *result = 0;
            }
        }
        {
            typedef void (GameList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::raiseRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (GameList::*_t)(QList<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::requestMergeGame)) {
                *result = 2;
            }
        }
        {
            typedef void (GameList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::requestMergeAllGames)) {
                *result = 3;
            }
        }
        {
            typedef void (GameList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::requestMergeFilter)) {
                *result = 4;
            }
        }
        {
            typedef void (GameList::*_t)(QList<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::requestCopyGame)) {
                *result = 5;
            }
        }
        {
            typedef void (GameList::*_t)(QList<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::requestDeleteGame)) {
                *result = 6;
            }
        }
        {
            typedef void (GameList::*_t)(Game & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::requestGameData)) {
                *result = 7;
            }
        }
        {
            typedef void (GameList::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::signalFirstGameLoaded)) {
                *result = 8;
            }
        }
        {
            typedef void (GameList::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::signalLastGameLoaded)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject GameList::staticMetaObject = {
    { &TableView::staticMetaObject, qt_meta_stringdata_GameList.data,
      qt_meta_data_GameList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameList.stringdata))
        return static_cast<void*>(const_cast< GameList*>(this));
    return TableView::qt_metacast(_clname);
}

int GameList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void GameList::selected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameList::raiseRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void GameList::requestMergeGame(QList<int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GameList::requestMergeAllGames()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void GameList::requestMergeFilter()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void GameList::requestCopyGame(QList<int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GameList::requestDeleteGame(QList<int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GameList::requestGameData(Game & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GameList::signalFirstGameLoaded(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GameList::signalLastGameLoaded(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
