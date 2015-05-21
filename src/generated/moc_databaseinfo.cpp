/****************************************************************************
** Meta object code from reading C++ file 'databaseinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../database/databaseinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databaseinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DatabaseInfo_t {
    QByteArrayData data[17];
    char stringdata[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseInfo_t qt_meta_stringdata_DatabaseInfo = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DatabaseInfo"
QT_MOC_LITERAL(1, 13, 12), // "LoadFinished"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "DatabaseInfo*"
QT_MOC_LITERAL(4, 41, 18), // "signalRestoreState"
QT_MOC_LITERAL(5, 60, 4), // "Game"
QT_MOC_LITERAL(6, 65, 4), // "game"
QT_MOC_LITERAL(7, 70, 18), // "signalGameModified"
QT_MOC_LITERAL(8, 89, 15), // "gameNeedsSaving"
QT_MOC_LITERAL(9, 105, 17), // "signalMoveChanged"
QT_MOC_LITERAL(10, 123, 14), // "searchProgress"
QT_MOC_LITERAL(11, 138, 14), // "searchFinished"
QT_MOC_LITERAL(12, 153, 14), // "dbCleanChanged"
QT_MOC_LITERAL(13, 168, 11), // "setModified"
QT_MOC_LITERAL(14, 180, 7), // "modfied"
QT_MOC_LITERAL(15, 188, 1), // "g"
QT_MOC_LITERAL(16, 190, 6) // "action"

    },
    "DatabaseInfo\0LoadFinished\0\0DatabaseInfo*\0"
    "signalRestoreState\0Game\0game\0"
    "signalGameModified\0gameNeedsSaving\0"
    "signalMoveChanged\0searchProgress\0"
    "searchFinished\0dbCleanChanged\0setModified\0"
    "modfied\0g\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,
       9,    0,   63,    2, 0x06 /* Public */,
      10,    1,   64,    2, 0x06 /* Public */,
      11,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   68,    2, 0x0a /* Public */,
      13,    3,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 5, QMetaType::QString,   14,   15,   16,

       0        // eod
};

void DatabaseInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DatabaseInfo *_t = static_cast<DatabaseInfo *>(_o);
        switch (_id) {
        case 0: _t->LoadFinished((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 1: _t->signalRestoreState((*reinterpret_cast< const Game(*)>(_a[1]))); break;
        case 2: _t->signalGameModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->signalMoveChanged(); break;
        case 4: _t->searchProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->searchFinished(); break;
        case 6: _t->dbCleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setModified((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const Game(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DatabaseInfo* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DatabaseInfo::*_t)(DatabaseInfo * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseInfo::LoadFinished)) {
                *result = 0;
            }
        }
        {
            typedef void (DatabaseInfo::*_t)(const Game & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseInfo::signalRestoreState)) {
                *result = 1;
            }
        }
        {
            typedef void (DatabaseInfo::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseInfo::signalGameModified)) {
                *result = 2;
            }
        }
        {
            typedef void (DatabaseInfo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseInfo::signalMoveChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (DatabaseInfo::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseInfo::searchProgress)) {
                *result = 4;
            }
        }
        {
            typedef void (DatabaseInfo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseInfo::searchFinished)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject DatabaseInfo::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DatabaseInfo.data,
      qt_meta_data_DatabaseInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DatabaseInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseInfo.stringdata))
        return static_cast<void*>(const_cast< DatabaseInfo*>(this));
    return QThread::qt_metacast(_clname);
}

int DatabaseInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DatabaseInfo::LoadFinished(DatabaseInfo * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DatabaseInfo::signalRestoreState(const Game & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DatabaseInfo::signalGameModified(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DatabaseInfo::signalMoveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DatabaseInfo::searchProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DatabaseInfo::searchFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
