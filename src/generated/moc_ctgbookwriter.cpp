/****************************************************************************
** Meta object code from reading C++ file 'ctgbookwriter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../database/ctgbookwriter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctgbookwriter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CtgBookWriter_t {
    QByteArrayData data[5];
    char stringdata[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CtgBookWriter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CtgBookWriter_t qt_meta_stringdata_CtgBookWriter = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CtgBookWriter"
QT_MOC_LITERAL(1, 14, 17), // "bookBuildFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "bookBuildError"
QT_MOC_LITERAL(4, 48, 6) // "cancel"

    },
    "CtgBookWriter\0bookBuildFinished\0\0"
    "bookBuildError\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CtgBookWriter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CtgBookWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CtgBookWriter *_t = static_cast<CtgBookWriter *>(_o);
        switch (_id) {
        case 0: _t->bookBuildFinished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->bookBuildError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CtgBookWriter::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CtgBookWriter::bookBuildFinished)) {
                *result = 0;
            }
        }
        {
            typedef void (CtgBookWriter::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CtgBookWriter::bookBuildError)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CtgBookWriter::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CtgBookWriter.data,
      qt_meta_data_CtgBookWriter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CtgBookWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CtgBookWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CtgBookWriter.stringdata))
        return static_cast<void*>(const_cast< CtgBookWriter*>(this));
    return QThread::qt_metacast(_clname);
}

int CtgBookWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CtgBookWriter::bookBuildFinished(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CtgBookWriter::bookBuildError(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
