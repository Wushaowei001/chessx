/****************************************************************************
** Meta object code from reading C++ file 'engineoptiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/engineoptiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'engineoptiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EngineOptionDialog_t {
    QByteArrayData data[10];
    char stringdata[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EngineOptionDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EngineOptionDialog_t qt_meta_stringdata_EngineOptionDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "EngineOptionDialog"
QT_MOC_LITERAL(1, 19, 6), // "accept"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "reject"
QT_MOC_LITERAL(4, 34, 15), // "engineActivated"
QT_MOC_LITERAL(5, 50, 11), // "optionReset"
QT_MOC_LITERAL(6, 62, 13), // "restoreLayout"
QT_MOC_LITERAL(7, 76, 13), // "buttonClicked"
QT_MOC_LITERAL(8, 90, 16), // "QAbstractButton*"
QT_MOC_LITERAL(9, 107, 6) // "button"

    },
    "EngineOptionDialog\0accept\0\0reject\0"
    "engineActivated\0optionReset\0restoreLayout\0"
    "buttonClicked\0QAbstractButton*\0button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EngineOptionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x09 /* Protected */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    1,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void EngineOptionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EngineOptionDialog *_t = static_cast<EngineOptionDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->engineActivated(); break;
        case 3: _t->optionReset(); break;
        case 4: _t->restoreLayout(); break;
        case 5: _t->buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject EngineOptionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EngineOptionDialog.data,
      qt_meta_data_EngineOptionDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EngineOptionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EngineOptionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EngineOptionDialog.stringdata))
        return static_cast<void*>(const_cast< EngineOptionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EngineOptionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
