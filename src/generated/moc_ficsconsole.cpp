/****************************************************************************
** Meta object code from reading C++ file 'ficsconsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/ficsconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ficsconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FicsConsole_t {
    QByteArrayData data[60];
    char stringdata[867];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FicsConsole_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FicsConsole_t qt_meta_stringdata_FicsConsole = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FicsConsole"
QT_MOC_LITERAL(1, 12, 13), // "ReceivedBoard"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "cmd"
QT_MOC_LITERAL(4, 31, 1), // "s"
QT_MOC_LITERAL(5, 33, 14), // "RequestNewGame"
QT_MOC_LITERAL(6, 48, 15), // "RequestSaveGame"
QT_MOC_LITERAL(7, 64, 15), // "RequestGameMode"
QT_MOC_LITERAL(8, 80, 21), // "RequestRemoveLastMove"
QT_MOC_LITERAL(9, 102, 13), // "RequestAddTag"
QT_MOC_LITERAL(10, 116, 3), // "tag"
QT_MOC_LITERAL(11, 120, 5), // "value"
QT_MOC_LITERAL(12, 126, 16), // "SignalGameResult"
QT_MOC_LITERAL(13, 143, 19), // "SignalPlayerIsBlack"
QT_MOC_LITERAL(14, 163, 16), // "RequestCloseFICS"
QT_MOC_LITERAL(15, 180, 17), // "RequestStoredMove"
QT_MOC_LITERAL(16, 198, 6), // "Square"
QT_MOC_LITERAL(17, 205, 4), // "from"
QT_MOC_LITERAL(18, 210, 2), // "to"
QT_MOC_LITERAL(19, 213, 9), // "Terminate"
QT_MOC_LITERAL(20, 223, 8), // "SendMove"
QT_MOC_LITERAL(21, 232, 1), // "m"
QT_MOC_LITERAL(22, 234, 14), // "SendStoredMove"
QT_MOC_LITERAL(23, 249, 19), // "SlotGameModeChanged"
QT_MOC_LITERAL(24, 269, 11), // "SendCommand"
QT_MOC_LITERAL(25, 281, 13), // "HandleMessage"
QT_MOC_LITERAL(26, 295, 11), // "HandleBoard"
QT_MOC_LITERAL(27, 307, 20), // "HandleObserveRequest"
QT_MOC_LITERAL(28, 328, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(29, 345, 20), // "HandleExamineRequest"
QT_MOC_LITERAL(30, 366, 18), // "HandleRelayRequest"
QT_MOC_LITERAL(31, 385, 20), // "HandleTacticsRequest"
QT_MOC_LITERAL(32, 406, 20), // "HandleHistoryRequest"
QT_MOC_LITERAL(33, 427, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(34, 445, 4), // "item"
QT_MOC_LITERAL(35, 450, 17), // "HandleSeekRequest"
QT_MOC_LITERAL(36, 468, 22), // "CMHandleObserveRequest"
QT_MOC_LITERAL(37, 491, 22), // "CMHandleExamineRequest"
QT_MOC_LITERAL(38, 514, 20), // "CMHandleRelayRequest"
QT_MOC_LITERAL(39, 535, 22), // "CMHandleTacticsRequest"
QT_MOC_LITERAL(40, 558, 22), // "CMHandleHistoryRequest"
QT_MOC_LITERAL(41, 581, 19), // "CMHandleSeekRequest"
QT_MOC_LITERAL(42, 601, 14), // "CommandStarted"
QT_MOC_LITERAL(43, 616, 12), // "Disconnected"
QT_MOC_LITERAL(44, 629, 14), // "SlotTabClicked"
QT_MOC_LITERAL(45, 644, 3), // "tab"
QT_MOC_LITERAL(46, 648, 14), // "SlotTabChanged"
QT_MOC_LITERAL(47, 663, 19), // "SlotSeekTimeChanged"
QT_MOC_LITERAL(48, 683, 21), // "SlotCountDownGameTime"
QT_MOC_LITERAL(49, 705, 14), // "SlotSendAccept"
QT_MOC_LITERAL(50, 720, 12), // "SlotSendDraw"
QT_MOC_LITERAL(51, 733, 15), // "SlotSendDecline"
QT_MOC_LITERAL(52, 749, 13), // "SlotSendAbort"
QT_MOC_LITERAL(53, 763, 14), // "SlotSendResign"
QT_MOC_LITERAL(54, 778, 12), // "SlotSendHint"
QT_MOC_LITERAL(55, 791, 17), // "SlotSendUnexamine"
QT_MOC_LITERAL(56, 809, 12), // "SlotSendSeek"
QT_MOC_LITERAL(57, 822, 14), // "SlotSayMessage"
QT_MOC_LITERAL(58, 837, 13), // "SlotAddNoPlay"
QT_MOC_LITERAL(59, 851, 15) // "SlotContextMenu"

    },
    "FicsConsole\0ReceivedBoard\0\0cmd\0s\0"
    "RequestNewGame\0RequestSaveGame\0"
    "RequestGameMode\0RequestRemoveLastMove\0"
    "RequestAddTag\0tag\0value\0SignalGameResult\0"
    "SignalPlayerIsBlack\0RequestCloseFICS\0"
    "RequestStoredMove\0Square\0from\0to\0"
    "Terminate\0SendMove\0m\0SendStoredMove\0"
    "SlotGameModeChanged\0SendCommand\0"
    "HandleMessage\0HandleBoard\0"
    "HandleObserveRequest\0QListWidgetItem*\0"
    "HandleExamineRequest\0HandleRelayRequest\0"
    "HandleTacticsRequest\0HandleHistoryRequest\0"
    "QTableWidgetItem*\0item\0HandleSeekRequest\0"
    "CMHandleObserveRequest\0CMHandleExamineRequest\0"
    "CMHandleRelayRequest\0CMHandleTacticsRequest\0"
    "CMHandleHistoryRequest\0CMHandleSeekRequest\0"
    "CommandStarted\0Disconnected\0SlotTabClicked\0"
    "tab\0SlotTabChanged\0SlotSeekTimeChanged\0"
    "SlotCountDownGameTime\0SlotSendAccept\0"
    "SlotSendDraw\0SlotSendDecline\0SlotSendAbort\0"
    "SlotSendResign\0SlotSendHint\0"
    "SlotSendUnexamine\0SlotSendSeek\0"
    "SlotSayMessage\0SlotAddNoPlay\0"
    "SlotContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FicsConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  244,    2, 0x06 /* Public */,
       5,    0,  249,    2, 0x06 /* Public */,
       6,    0,  250,    2, 0x06 /* Public */,
       7,    1,  251,    2, 0x06 /* Public */,
       8,    0,  254,    2, 0x06 /* Public */,
       9,    2,  255,    2, 0x06 /* Public */,
      12,    1,  260,    2, 0x06 /* Public */,
      13,    1,  263,    2, 0x06 /* Public */,
      14,    0,  266,    2, 0x06 /* Public */,
      15,    2,  267,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  272,    2, 0x0a /* Public */,
      20,    1,  273,    2, 0x0a /* Public */,
      22,    2,  276,    2, 0x0a /* Public */,
      23,    1,  281,    2, 0x0a /* Public */,
      24,    0,  284,    2, 0x09 /* Protected */,
      25,    2,  285,    2, 0x09 /* Protected */,
      26,    2,  290,    2, 0x09 /* Protected */,
      27,    1,  295,    2, 0x09 /* Protected */,
      29,    1,  298,    2, 0x09 /* Protected */,
      30,    1,  301,    2, 0x09 /* Protected */,
      31,    1,  304,    2, 0x09 /* Protected */,
      32,    1,  307,    2, 0x09 /* Protected */,
      35,    1,  310,    2, 0x09 /* Protected */,
      36,    1,  313,    2, 0x09 /* Protected */,
      37,    1,  316,    2, 0x09 /* Protected */,
      38,    1,  319,    2, 0x09 /* Protected */,
      39,    1,  322,    2, 0x09 /* Protected */,
      40,    1,  325,    2, 0x09 /* Protected */,
      41,    1,  328,    2, 0x09 /* Protected */,
      42,    1,  331,    2, 0x09 /* Protected */,
      43,    0,  334,    2, 0x09 /* Protected */,
      44,    1,  335,    2, 0x09 /* Protected */,
      46,    1,  338,    2, 0x09 /* Protected */,
      47,    1,  341,    2, 0x09 /* Protected */,
      48,    0,  344,    2, 0x09 /* Protected */,
      49,    0,  345,    2, 0x09 /* Protected */,
      50,    0,  346,    2, 0x09 /* Protected */,
      51,    0,  347,    2, 0x09 /* Protected */,
      52,    0,  348,    2, 0x09 /* Protected */,
      53,    0,  349,    2, 0x09 /* Protected */,
      54,    0,  350,    2, 0x09 /* Protected */,
      55,    0,  351,    2, 0x09 /* Protected */,
      56,    0,  352,    2, 0x09 /* Protected */,
      57,    0,  353,    2, 0x09 /* Protected */,
      58,    0,  354,    2, 0x09 /* Protected */,
      59,    1,  355,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 28,   34,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,

       0        // eod
};

void FicsConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FicsConsole *_t = static_cast<FicsConsole *>(_o);
        switch (_id) {
        case 0: _t->ReceivedBoard((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->RequestNewGame(); break;
        case 2: _t->RequestSaveGame(); break;
        case 3: _t->RequestGameMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->RequestRemoveLastMove(); break;
        case 5: _t->RequestAddTag((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->SignalGameResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->SignalPlayerIsBlack((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->RequestCloseFICS(); break;
        case 9: _t->RequestStoredMove((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2]))); break;
        case 10: _t->Terminate(); break;
        case 11: _t->SendMove((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->SendStoredMove((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2]))); break;
        case 13: _t->SlotGameModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->SendCommand(); break;
        case 15: _t->HandleMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->HandleBoard((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: _t->HandleObserveRequest((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 18: _t->HandleExamineRequest((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 19: _t->HandleRelayRequest((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 20: _t->HandleTacticsRequest((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 21: _t->HandleHistoryRequest((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 22: _t->HandleSeekRequest((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 23: _t->CMHandleObserveRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 24: _t->CMHandleExamineRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 25: _t->CMHandleRelayRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 26: _t->CMHandleTacticsRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 27: _t->CMHandleHistoryRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 28: _t->CMHandleSeekRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 29: _t->CommandStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->Disconnected(); break;
        case 31: _t->SlotTabClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->SlotTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->SlotSeekTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->SlotCountDownGameTime(); break;
        case 35: _t->SlotSendAccept(); break;
        case 36: _t->SlotSendDraw(); break;
        case 37: _t->SlotSendDecline(); break;
        case 38: _t->SlotSendAbort(); break;
        case 39: _t->SlotSendResign(); break;
        case 40: _t->SlotSendHint(); break;
        case 41: _t->SlotSendUnexamine(); break;
        case 42: _t->SlotSendSeek(); break;
        case 43: _t->SlotSayMessage(); break;
        case 44: _t->SlotAddNoPlay(); break;
        case 45: _t->SlotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FicsConsole::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FicsConsole::ReceivedBoard)) {
                *result = 0;
            }
        }
        {
            typedef void (FicsConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FicsConsole::RequestNewGame)) {
                *result = 1;
            }
        }
        {
            typedef void (FicsConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FicsConsole::RequestSaveGame)) {
                *result = 2;
            }
        }
        {
            typedef void (FicsConsole::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FicsConsole::RequestGameMode)) {
                *result = 3;
            }
        }
        {
            typedef void (FicsConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FicsConsole::RequestRemoveLastMove)) {
                *result = 4;
            }
        }
        {
            typedef void (FicsConsole::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FicsConsole::RequestAddTag)) {
                *result = 5;
            }
        }
        {
            typedef void (FicsConsole::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FicsConsole::SignalGameResult)) {
                *result = 6;
            }
        }
        {
            typedef void (FicsConsole::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FicsConsole::SignalPlayerIsBlack)) {
                *result = 7;
            }
        }
        {
            typedef void (FicsConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FicsConsole::RequestCloseFICS)) {
                *result = 8;
            }
        }
        {
            typedef void (FicsConsole::*_t)(Square , Square );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FicsConsole::RequestStoredMove)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject FicsConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FicsConsole.data,
      qt_meta_data_FicsConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FicsConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FicsConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FicsConsole.stringdata))
        return static_cast<void*>(const_cast< FicsConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int FicsConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
    return _id;
}

// SIGNAL 0
void FicsConsole::ReceivedBoard(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FicsConsole::RequestNewGame()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void FicsConsole::RequestSaveGame()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void FicsConsole::RequestGameMode(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FicsConsole::RequestRemoveLastMove()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void FicsConsole::RequestAddTag(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FicsConsole::SignalGameResult(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FicsConsole::SignalPlayerIsBlack(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FicsConsole::RequestCloseFICS()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void FicsConsole::RequestStoredMove(Square _t1, Square _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
