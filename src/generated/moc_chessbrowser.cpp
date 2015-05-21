/****************************************************************************
** Meta object code from reading C++ file 'chessbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/chessbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chessbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChessBrowser_t {
    QByteArrayData data[27];
    char stringdata[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChessBrowser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChessBrowser_t qt_meta_stringdata_ChessBrowser = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChessBrowser"
QT_MOC_LITERAL(1, 13, 15), // "actionRequested"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "EditAction"
QT_MOC_LITERAL(4, 41, 6), // "action"
QT_MOC_LITERAL(5, 48, 15), // "queryActiveGame"
QT_MOC_LITERAL(6, 64, 12), // "const Game**"
QT_MOC_LITERAL(7, 77, 4), // "game"
QT_MOC_LITERAL(8, 82, 15), // "signalMergeGame"
QT_MOC_LITERAL(9, 98, 9), // "gameIndex"
QT_MOC_LITERAL(10, 108, 10), // "saveConfig"
QT_MOC_LITERAL(11, 119, 15), // "slotReconfigure"
QT_MOC_LITERAL(12, 135, 8), // "showMove"
QT_MOC_LITERAL(13, 144, 2), // "id"
QT_MOC_LITERAL(14, 147, 10), // "slotAction"
QT_MOC_LITERAL(15, 158, 8), // "QAction*"
QT_MOC_LITERAL(16, 167, 15), // "slotContextMenu"
QT_MOC_LITERAL(17, 183, 3), // "pos"
QT_MOC_LITERAL(18, 187, 15), // "slotDisplayTime"
QT_MOC_LITERAL(19, 203, 4), // "text"
QT_MOC_LITERAL(20, 208, 5), // "Color"
QT_MOC_LITERAL(21, 214, 5), // "color"
QT_MOC_LITERAL(22, 220, 19), // "slotDisplayMaterial"
QT_MOC_LITERAL(23, 240, 13), // "QList<double>"
QT_MOC_LITERAL(24, 254, 8), // "material"
QT_MOC_LITERAL(25, 263, 14), // "slotDisplayPly"
QT_MOC_LITERAL(26, 278, 3) // "ply"

    },
    "ChessBrowser\0actionRequested\0\0EditAction\0"
    "action\0queryActiveGame\0const Game**\0"
    "game\0signalMergeGame\0gameIndex\0"
    "saveConfig\0slotReconfigure\0showMove\0"
    "id\0slotAction\0QAction*\0slotContextMenu\0"
    "pos\0slotDisplayTime\0text\0Color\0color\0"
    "slotDisplayMaterial\0QList<double>\0"
    "material\0slotDisplayPly\0ply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChessBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       8,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    1,   80,    2, 0x0a /* Public */,
      14,    1,   83,    2, 0x0a /* Public */,
      16,    1,   86,    2, 0x0a /* Public */,
      18,    2,   89,    2, 0x0a /* Public */,
      22,    1,   94,    2, 0x0a /* Public */,
      25,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 15,    4,
    QMetaType::Void, QMetaType::QPoint,   17,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,   19,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Int,   26,

       0        // eod
};

void ChessBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChessBrowser *_t = static_cast<ChessBrowser *>(_o);
        switch (_id) {
        case 0: _t->actionRequested((*reinterpret_cast< const EditAction(*)>(_a[1]))); break;
        case 1: _t->queryActiveGame((*reinterpret_cast< const Game**(*)>(_a[1]))); break;
        case 2: _t->signalMergeGame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->saveConfig(); break;
        case 4: _t->slotReconfigure(); break;
        case 5: _t->showMove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 8: _t->slotDisplayTime((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Color(*)>(_a[2]))); break;
        case 9: _t->slotDisplayMaterial((*reinterpret_cast< const QList<double>(*)>(_a[1]))); break;
        case 10: _t->slotDisplayPly((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChessBrowser::*_t)(const EditAction & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChessBrowser::actionRequested)) {
                *result = 0;
            }
        }
        {
            typedef void (ChessBrowser::*_t)(const Game * * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChessBrowser::queryActiveGame)) {
                *result = 1;
            }
        }
        {
            typedef void (ChessBrowser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChessBrowser::signalMergeGame)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ChessBrowser::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_ChessBrowser.data,
      qt_meta_data_ChessBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChessBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChessBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChessBrowser.stringdata))
        return static_cast<void*>(const_cast< ChessBrowser*>(this));
    return QTextBrowser::qt_metacast(_clname);
}

int ChessBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ChessBrowser::actionRequested(const EditAction & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChessBrowser::queryActiveGame(const Game * * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChessBrowser::signalMergeGame(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
