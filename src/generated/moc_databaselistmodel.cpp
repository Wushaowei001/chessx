/****************************************************************************
** Meta object code from reading C++ file 'databaselistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/databaselistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databaselistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DatabaseListModel_t {
    QByteArrayData data[15];
    char stringdata[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseListModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseListModel_t qt_meta_stringdata_DatabaseListModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DatabaseListModel"
QT_MOC_LITERAL(1, 18, 13), // "OnSelectIndex"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "NoFileFavorite"
QT_MOC_LITERAL(4, 48, 11), // "addFileOpen"
QT_MOC_LITERAL(5, 60, 1), // "s"
QT_MOC_LITERAL(6, 62, 4), // "utf8"
QT_MOC_LITERAL(7, 67, 15), // "addFavoriteFile"
QT_MOC_LITERAL(8, 83, 9), // "bFavorite"
QT_MOC_LITERAL(9, 93, 5), // "index"
QT_MOC_LITERAL(10, 99, 11), // "setFileUtf8"
QT_MOC_LITERAL(11, 111, 12), // "setFileClose"
QT_MOC_LITERAL(12, 124, 9), // "lastIndex"
QT_MOC_LITERAL(13, 134, 14), // "setFileCurrent"
QT_MOC_LITERAL(14, 149, 6) // "update"

    },
    "DatabaseListModel\0OnSelectIndex\0\0"
    "NoFileFavorite\0addFileOpen\0s\0utf8\0"
    "addFavoriteFile\0bFavorite\0index\0"
    "setFileUtf8\0setFileClose\0lastIndex\0"
    "setFileCurrent\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   58,    2, 0x0a /* Public */,
       7,    3,   63,    2, 0x0a /* Public */,
      10,    2,   70,    2, 0x0a /* Public */,
      11,    2,   75,    2, 0x0a /* Public */,
      13,    1,   80,    2, 0x0a /* Public */,
      14,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Int,    5,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,   12,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void DatabaseListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DatabaseListModel *_t = static_cast<DatabaseListModel *>(_o);
        switch (_id) {
        case 0: _t->OnSelectIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->NoFileFavorite(); break;
        case 2: _t->addFileOpen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->addFavoriteFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->setFileUtf8((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->setFileClose((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->setFileCurrent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->update((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DatabaseListModel::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseListModel::OnSelectIndex)) {
                *result = 0;
            }
        }
        {
            typedef void (DatabaseListModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseListModel::NoFileFavorite)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject DatabaseListModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_DatabaseListModel.data,
      qt_meta_data_DatabaseListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DatabaseListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseListModel.stringdata))
        return static_cast<void*>(const_cast< DatabaseListModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int DatabaseListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DatabaseListModel::OnSelectIndex(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DatabaseListModel::NoFileFavorite()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
