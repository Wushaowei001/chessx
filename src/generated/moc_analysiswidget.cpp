/****************************************************************************
** Meta object code from reading C++ file 'analysiswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/analysiswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'analysiswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AnalysisWidget_t {
    QByteArrayData data[33];
    char stringdata[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnalysisWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnalysisWidget_t qt_meta_stringdata_AnalysisWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AnalysisWidget"
QT_MOC_LITERAL(1, 15, 12), // "addVariation"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "Analysis"
QT_MOC_LITERAL(4, 38, 8), // "analysis"
QT_MOC_LITERAL(5, 47, 3), // "san"
QT_MOC_LITERAL(6, 51, 12), // "requestBoard"
QT_MOC_LITERAL(7, 64, 16), // "receivedBestMove"
QT_MOC_LITERAL(8, 81, 11), // "setPosition"
QT_MOC_LITERAL(9, 93, 5), // "Board"
QT_MOC_LITERAL(10, 99, 5), // "board"
QT_MOC_LITERAL(11, 105, 15), // "slotReconfigure"
QT_MOC_LITERAL(12, 121, 11), // "startEngine"
QT_MOC_LITERAL(13, 133, 10), // "stopEngine"
QT_MOC_LITERAL(14, 144, 21), // "slotVisibilityChanged"
QT_MOC_LITERAL(15, 166, 11), // "setMoveTime"
QT_MOC_LITERAL(16, 178, 2), // "mt"
QT_MOC_LITERAL(17, 181, 14), // "slotUciNewGame"
QT_MOC_LITERAL(18, 196, 14), // "toggleAnalysis"
QT_MOC_LITERAL(19, 211, 12), // "showAnalysis"
QT_MOC_LITERAL(20, 224, 15), // "engineActivated"
QT_MOC_LITERAL(21, 240, 17), // "engineDeactivated"
QT_MOC_LITERAL(22, 258, 11), // "engineError"
QT_MOC_LITERAL(23, 270, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(24, 293, 15), // "slotLinkClicked"
QT_MOC_LITERAL(25, 309, 4), // "link"
QT_MOC_LITERAL(26, 314, 14), // "slotMpvChanged"
QT_MOC_LITERAL(27, 329, 3), // "mpv"
QT_MOC_LITERAL(28, 333, 17), // "showTablebaseMove"
QT_MOC_LITERAL(29, 351, 4), // "Move"
QT_MOC_LITERAL(30, 356, 4), // "move"
QT_MOC_LITERAL(31, 361, 5), // "score"
QT_MOC_LITERAL(32, 367, 14) // "slotPinChanged"

    },
    "AnalysisWidget\0addVariation\0\0Analysis\0"
    "analysis\0san\0requestBoard\0receivedBestMove\0"
    "setPosition\0Board\0board\0slotReconfigure\0"
    "startEngine\0stopEngine\0slotVisibilityChanged\0"
    "setMoveTime\0mt\0slotUciNewGame\0"
    "toggleAnalysis\0showAnalysis\0engineActivated\0"
    "engineDeactivated\0engineError\0"
    "QProcess::ProcessError\0slotLinkClicked\0"
    "link\0slotMpvChanged\0mpv\0showTablebaseMove\0"
    "Move\0move\0score\0slotPinChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnalysisWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       1,    1,  122,    2, 0x06 /* Public */,
       6,    0,  125,    2, 0x06 /* Public */,
       7,    1,  126,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  129,    2, 0x0a /* Public */,
      11,    0,  132,    2, 0x0a /* Public */,
      12,    0,  133,    2, 0x0a /* Public */,
      13,    0,  134,    2, 0x0a /* Public */,
      14,    1,  135,    2, 0x0a /* Public */,
      15,    1,  138,    2, 0x0a /* Public */,
      17,    0,  141,    2, 0x0a /* Public */,
      18,    0,  142,    2, 0x08 /* Private */,
      19,    1,  143,    2, 0x08 /* Private */,
      20,    0,  146,    2, 0x08 /* Private */,
      21,    0,  147,    2, 0x08 /* Private */,
      22,    1,  148,    2, 0x08 /* Private */,
      24,    1,  151,    2, 0x08 /* Private */,
      26,    1,  154,    2, 0x08 /* Private */,
      28,    2,  157,    2, 0x08 /* Private */,
      32,    1,  162,    2, 0x08 /* Private */,
      32,    0,  165,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, QMetaType::QUrl,   25,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Int,   30,   31,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void AnalysisWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnalysisWidget *_t = static_cast<AnalysisWidget *>(_o);
        switch (_id) {
        case 0: _t->addVariation((*reinterpret_cast< const Analysis(*)>(_a[1]))); break;
        case 1: _t->addVariation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->requestBoard(); break;
        case 3: _t->receivedBestMove((*reinterpret_cast< const Analysis(*)>(_a[1]))); break;
        case 4: _t->setPosition((*reinterpret_cast< const Board(*)>(_a[1]))); break;
        case 5: _t->slotReconfigure(); break;
        case 6: _t->startEngine(); break;
        case 7: _t->stopEngine(); break;
        case 8: _t->slotVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setMoveTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->slotUciNewGame(); break;
        case 11: _t->toggleAnalysis(); break;
        case 12: _t->showAnalysis((*reinterpret_cast< const Analysis(*)>(_a[1]))); break;
        case 13: _t->engineActivated(); break;
        case 14: _t->engineDeactivated(); break;
        case 15: _t->engineError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 16: _t->slotLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 17: _t->slotMpvChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->showTablebaseMove((*reinterpret_cast< Move(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->slotPinChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->slotPinChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AnalysisWidget::*_t)(const Analysis & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AnalysisWidget::addVariation)) {
                *result = 0;
            }
        }
        {
            typedef void (AnalysisWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AnalysisWidget::addVariation)) {
                *result = 1;
            }
        }
        {
            typedef void (AnalysisWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AnalysisWidget::requestBoard)) {
                *result = 2;
            }
        }
        {
            typedef void (AnalysisWidget::*_t)(const Analysis & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AnalysisWidget::receivedBestMove)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject AnalysisWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AnalysisWidget.data,
      qt_meta_data_AnalysisWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AnalysisWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnalysisWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AnalysisWidget.stringdata))
        return static_cast<void*>(const_cast< AnalysisWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AnalysisWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void AnalysisWidget::addVariation(const Analysis & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AnalysisWidget::addVariation(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AnalysisWidget::requestBoard()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void AnalysisWidget::receivedBestMove(const Analysis & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
