/****************************************************************************
** Meta object code from reading C++ file 'actiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialogs/actiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActionDialog_t {
    QByteArrayData data[10];
    char stringdata[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActionDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActionDialog_t qt_meta_stringdata_ActionDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ActionDialog"
QT_MOC_LITERAL(1, 13, 14), // "signalResetKey"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "accept"
QT_MOC_LITERAL(4, 36, 6), // "reject"
QT_MOC_LITERAL(5, 43, 17), // "saveOldActionText"
QT_MOC_LITERAL(6, 61, 3), // "row"
QT_MOC_LITERAL(7, 65, 6), // "column"
QT_MOC_LITERAL(8, 72, 14), // "validateAction"
QT_MOC_LITERAL(9, 87, 9) // "resetKeys"

    },
    "ActionDialog\0signalResetKey\0\0accept\0"
    "reject\0saveOldActionText\0row\0column\0"
    "validateAction\0resetKeys"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    0,   46,    2, 0x09 /* Protected */,
       5,    2,   47,    2, 0x08 /* Private */,
       8,    2,   52,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,

       0        // eod
};

void ActionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionDialog *_t = static_cast<ActionDialog *>(_o);
        switch (_id) {
        case 0: _t->signalResetKey(); break;
        case 1: _t->accept(); break;
        case 2: _t->reject(); break;
        case 3: _t->saveOldActionText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->validateAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->resetKeys(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActionDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionDialog::signalResetKey)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ActionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ActionDialog.data,
      qt_meta_data_ActionDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ActionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ActionDialog.stringdata))
        return static_cast<void*>(const_cast< ActionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ActionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ActionDialog::signalResetKey()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
