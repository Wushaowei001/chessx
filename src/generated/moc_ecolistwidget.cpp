/****************************************************************************
** Meta object code from reading C++ file 'ecolistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/ecolistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ecolistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ECOListWidget_t {
    QByteArrayData data[22];
    char stringdata[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ECOListWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ECOListWidget_t qt_meta_stringdata_ECOListWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ECOListWidget"
QT_MOC_LITERAL(1, 14, 13), // "filterRequest"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 2), // "ts"
QT_MOC_LITERAL(4, 32, 22), // "filterEcoPlayerRequest"
QT_MOC_LITERAL(5, 55, 3), // "tag"
QT_MOC_LITERAL(6, 59, 3), // "eco"
QT_MOC_LITERAL(7, 63, 6), // "player"
QT_MOC_LITERAL(8, 70, 12), // "raiseRequest"
QT_MOC_LITERAL(9, 83, 13), // "slotSelectECO"
QT_MOC_LITERAL(10, 97, 9), // "selectECO"
QT_MOC_LITERAL(11, 107, 7), // "findECO"
QT_MOC_LITERAL(12, 115, 1), // "s"
QT_MOC_LITERAL(13, 117, 11), // "setDatabase"
QT_MOC_LITERAL(14, 129, 13), // "DatabaseInfo*"
QT_MOC_LITERAL(15, 143, 6), // "dbInfo"
QT_MOC_LITERAL(16, 150, 17), // "filterSelectedECO"
QT_MOC_LITERAL(17, 168, 15), // "slotReconfigure"
QT_MOC_LITERAL(18, 184, 20), // "selectionChangedSlot"
QT_MOC_LITERAL(19, 205, 15), // "slotLinkClicked"
QT_MOC_LITERAL(20, 221, 3), // "url"
QT_MOC_LITERAL(21, 225, 11) // "ecoSelected"

    },
    "ECOListWidget\0filterRequest\0\0ts\0"
    "filterEcoPlayerRequest\0tag\0eco\0player\0"
    "raiseRequest\0slotSelectECO\0selectECO\0"
    "findECO\0s\0setDatabase\0DatabaseInfo*\0"
    "dbInfo\0filterSelectedECO\0slotReconfigure\0"
    "selectionChangedSlot\0slotLinkClicked\0"
    "url\0ecoSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ECOListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    2,   82,    2, 0x06 /* Public */,
       4,    3,   87,    2, 0x06 /* Public */,
       8,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   95,    2, 0x0a /* Public */,
      10,    1,   98,    2, 0x0a /* Public */,
      11,    1,  101,    2, 0x09 /* Protected */,
      13,    1,  104,    2, 0x09 /* Protected */,
      16,    0,  107,    2, 0x09 /* Protected */,
      17,    0,  108,    2, 0x09 /* Protected */,
      18,    0,  109,    2, 0x09 /* Protected */,
      19,    1,  110,    2, 0x09 /* Protected */,
      21,    1,  113,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   20,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void ECOListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ECOListWidget *_t = static_cast<ECOListWidget *>(_o);
        switch (_id) {
        case 0: _t->filterRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->filterEcoPlayerRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->filterEcoPlayerRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->raiseRequest(); break;
        case 4: _t->slotSelectECO((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->selectECO((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->findECO((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setDatabase((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 8: _t->filterSelectedECO(); break;
        case 9: _t->slotReconfigure(); break;
        case 10: _t->selectionChangedSlot(); break;
        case 11: _t->slotLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 12: _t->ecoSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ECOListWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ECOListWidget::filterRequest)) {
                *result = 0;
            }
        }
        {
            typedef void (ECOListWidget::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ECOListWidget::filterEcoPlayerRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (ECOListWidget::*_t)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ECOListWidget::filterEcoPlayerRequest)) {
                *result = 2;
            }
        }
        {
            typedef void (ECOListWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ECOListWidget::raiseRequest)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject ECOListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ECOListWidget.data,
      qt_meta_data_ECOListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ECOListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ECOListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ECOListWidget.stringdata))
        return static_cast<void*>(const_cast< ECOListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ECOListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ECOListWidget::filterRequest(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ECOListWidget::filterEcoPlayerRequest(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ECOListWidget::filterEcoPlayerRequest(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ECOListWidget::raiseRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
