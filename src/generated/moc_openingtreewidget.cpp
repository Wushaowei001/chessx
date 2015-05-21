/****************************************************************************
** Meta object code from reading C++ file 'openingtreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/openingtreewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openingtreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpeningTreeWidget_t {
    QByteArrayData data[12];
    char stringdata[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpeningTreeWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpeningTreeWidget_t qt_meta_stringdata_OpeningTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OpeningTreeWidget"
QT_MOC_LITERAL(1, 18, 17), // "signalTreeUpdated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "signalSourceChanged"
QT_MOC_LITERAL(4, 57, 6), // "cancel"
QT_MOC_LITERAL(5, 64, 10), // "saveConfig"
QT_MOC_LITERAL(6, 75, 15), // "slotReconfigure"
QT_MOC_LITERAL(7, 91, 14), // "slotTreeUpdate"
QT_MOC_LITERAL(8, 106, 21), // "slotOperationProgress"
QT_MOC_LITERAL(9, 128, 5), // "value"
QT_MOC_LITERAL(10, 134, 21), // "slotTreeUpdateStarted"
QT_MOC_LITERAL(11, 156, 17) // "slotSourceChanged"

    },
    "OpeningTreeWidget\0signalTreeUpdated\0"
    "\0signalSourceChanged\0cancel\0saveConfig\0"
    "slotReconfigure\0slotTreeUpdate\0"
    "slotOperationProgress\0value\0"
    "slotTreeUpdateStarted\0slotSourceChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpeningTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   63,    2, 0x0a /* Public */,
       5,    0,   64,    2, 0x0a /* Public */,
       6,    0,   65,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x09 /* Protected */,
       8,    1,   67,    2, 0x09 /* Protected */,
      10,    0,   70,    2, 0x09 /* Protected */,
      11,    0,   71,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OpeningTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpeningTreeWidget *_t = static_cast<OpeningTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->signalTreeUpdated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->signalSourceChanged(); break;
        case 2: _t->cancel(); break;
        case 3: _t->saveConfig(); break;
        case 4: _t->slotReconfigure(); break;
        case 5: _t->slotTreeUpdate(); break;
        case 6: _t->slotOperationProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotTreeUpdateStarted(); break;
        case 8: _t->slotSourceChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpeningTreeWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpeningTreeWidget::signalTreeUpdated)) {
                *result = 0;
            }
        }
        {
            typedef void (OpeningTreeWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpeningTreeWidget::signalSourceChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OpeningTreeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OpeningTreeWidget.data,
      qt_meta_data_OpeningTreeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpeningTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpeningTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpeningTreeWidget.stringdata))
        return static_cast<void*>(const_cast< OpeningTreeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OpeningTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OpeningTreeWidget::signalTreeUpdated(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpeningTreeWidget::signalSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
