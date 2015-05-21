/****************************************************************************
** Meta object code from reading C++ file 'openingtree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../database/openingtree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openingtree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpeningTree_t {
    QByteArrayData data[13];
    char stringdata[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpeningTree_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpeningTree_t qt_meta_stringdata_OpeningTree = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OpeningTree"
QT_MOC_LITERAL(1, 12, 8), // "progress"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 18), // "openingTreeUpdated"
QT_MOC_LITERAL(4, 41, 24), // "openingTreeUpdateStarted"
QT_MOC_LITERAL(5, 66, 6), // "cancel"
QT_MOC_LITERAL(6, 73, 14), // "updateFinished"
QT_MOC_LITERAL(7, 88, 6), // "Board*"
QT_MOC_LITERAL(8, 95, 16), // "updateTerminated"
QT_MOC_LITERAL(9, 112, 11), // "moveUpdated"
QT_MOC_LITERAL(10, 124, 1), // "b"
QT_MOC_LITERAL(11, 126, 15), // "QList<MoveData>"
QT_MOC_LITERAL(12, 142, 8) // "moveList"

    },
    "OpeningTree\0progress\0\0openingTreeUpdated\0"
    "openingTreeUpdateStarted\0cancel\0"
    "updateFinished\0Board*\0updateTerminated\0"
    "moveUpdated\0b\0QList<MoveData>\0moveList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpeningTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    0,   52,    2, 0x06 /* Public */,
       4,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   54,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x09 /* Protected */,
       8,    1,   58,    2, 0x09 /* Protected */,
       9,    2,   61,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 11,   10,   12,

       0        // eod
};

void OpeningTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpeningTree *_t = static_cast<OpeningTree *>(_o);
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->openingTreeUpdated(); break;
        case 2: _t->openingTreeUpdateStarted(); break;
        case 3: _t->cancel(); break;
        case 4: _t->updateFinished((*reinterpret_cast< Board*(*)>(_a[1]))); break;
        case 5: _t->updateTerminated((*reinterpret_cast< Board*(*)>(_a[1]))); break;
        case 6: _t->moveUpdated((*reinterpret_cast< Board*(*)>(_a[1])),(*reinterpret_cast< QList<MoveData>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpeningTree::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpeningTree::progress)) {
                *result = 0;
            }
        }
        {
            typedef void (OpeningTree::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpeningTree::openingTreeUpdated)) {
                *result = 1;
            }
        }
        {
            typedef void (OpeningTree::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpeningTree::openingTreeUpdateStarted)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject OpeningTree::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_OpeningTree.data,
      qt_meta_data_OpeningTree,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpeningTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpeningTree::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpeningTree.stringdata))
        return static_cast<void*>(const_cast< OpeningTree*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int OpeningTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OpeningTree::progress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpeningTree::openingTreeUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void OpeningTree::openingTreeUpdateStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
