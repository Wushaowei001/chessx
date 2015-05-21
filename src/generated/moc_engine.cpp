/****************************************************************************
** Meta object code from reading C++ file 'engine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../database/engine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'engine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Engine_t {
    QByteArrayData data[16];
    char stringdata[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Engine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Engine_t qt_meta_stringdata_Engine = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Engine"
QT_MOC_LITERAL(1, 7, 9), // "activated"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 11), // "deactivated"
QT_MOC_LITERAL(4, 30, 5), // "error"
QT_MOC_LITERAL(5, 36, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(6, 59, 15), // "analysisStarted"
QT_MOC_LITERAL(7, 75, 15), // "analysisStopped"
QT_MOC_LITERAL(8, 91, 15), // "analysisUpdated"
QT_MOC_LITERAL(9, 107, 8), // "Analysis"
QT_MOC_LITERAL(10, 116, 8), // "analysis"
QT_MOC_LITERAL(11, 125, 10), // "logUpdated"
QT_MOC_LITERAL(12, 136, 11), // "pollProcess"
QT_MOC_LITERAL(13, 148, 13), // "processExited"
QT_MOC_LITERAL(14, 162, 13), // "protocolStart"
QT_MOC_LITERAL(15, 176, 12) // "processError"

    },
    "Engine\0activated\0\0deactivated\0error\0"
    "QProcess::ProcessError\0analysisStarted\0"
    "analysisStopped\0analysisUpdated\0"
    "Analysis\0analysis\0logUpdated\0pollProcess\0"
    "processExited\0protocolStart\0processError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Engine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,
       6,    0,   74,    2, 0x06 /* Public */,
       7,    0,   75,    2, 0x06 /* Public */,
       8,    1,   76,    2, 0x06 /* Public */,
      11,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void Engine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Engine *_t = static_cast<Engine *>(_o);
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->deactivated(); break;
        case 2: _t->error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 3: _t->analysisStarted(); break;
        case 4: _t->analysisStopped(); break;
        case 5: _t->analysisUpdated((*reinterpret_cast< const Analysis(*)>(_a[1]))); break;
        case 6: _t->logUpdated(); break;
        case 7: _t->pollProcess(); break;
        case 8: _t->processExited(); break;
        case 9: _t->protocolStart(); break;
        case 10: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Engine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Engine::activated)) {
                *result = 0;
            }
        }
        {
            typedef void (Engine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Engine::deactivated)) {
                *result = 1;
            }
        }
        {
            typedef void (Engine::*_t)(QProcess::ProcessError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Engine::error)) {
                *result = 2;
            }
        }
        {
            typedef void (Engine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Engine::analysisStarted)) {
                *result = 3;
            }
        }
        {
            typedef void (Engine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Engine::analysisStopped)) {
                *result = 4;
            }
        }
        {
            typedef void (Engine::*_t)(const Analysis & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Engine::analysisUpdated)) {
                *result = 5;
            }
        }
        {
            typedef void (Engine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Engine::logUpdated)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject Engine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Engine.data,
      qt_meta_data_Engine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Engine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Engine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Engine.stringdata))
        return static_cast<void*>(const_cast< Engine*>(this));
    return QObject::qt_metacast(_clname);
}

int Engine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Engine::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Engine::deactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Engine::error(QProcess::ProcessError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Engine::analysisStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Engine::analysisStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Engine::analysisUpdated(const Analysis & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Engine::logUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
