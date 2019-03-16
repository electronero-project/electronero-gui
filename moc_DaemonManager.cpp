/****************************************************************************
** Meta object code from reading C++ file 'DaemonManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/daemon/DaemonManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DaemonManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DaemonManager_t {
    QByteArrayData data[24];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DaemonManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DaemonManager_t qt_meta_stringdata_DaemonManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DaemonManager"
QT_MOC_LITERAL(1, 14, 13), // "daemonStarted"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "daemonStopped"
QT_MOC_LITERAL(4, 43, 18), // "daemonStartFailure"
QT_MOC_LITERAL(5, 62, 20), // "daemonConsoleUpdated"
QT_MOC_LITERAL(6, 83, 7), // "message"
QT_MOC_LITERAL(7, 91, 11), // "printOutput"
QT_MOC_LITERAL(8, 103, 10), // "printError"
QT_MOC_LITERAL(9, 114, 12), // "stateChanged"
QT_MOC_LITERAL(10, 127, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(11, 150, 5), // "state"
QT_MOC_LITERAL(12, 156, 5), // "start"
QT_MOC_LITERAL(13, 162, 5), // "flags"
QT_MOC_LITERAL(14, 168, 17), // "NetworkType::Type"
QT_MOC_LITERAL(15, 186, 7), // "nettype"
QT_MOC_LITERAL(16, 194, 7), // "dataDir"
QT_MOC_LITERAL(17, 202, 20), // "bootstrapNodeAddress"
QT_MOC_LITERAL(18, 223, 4), // "stop"
QT_MOC_LITERAL(19, 228, 7), // "running"
QT_MOC_LITERAL(20, 236, 11), // "sendCommand"
QT_MOC_LITERAL(21, 248, 3), // "cmd"
QT_MOC_LITERAL(22, 252, 4), // "exit"
QT_MOC_LITERAL(23, 257, 15) // "validateDataDir"

    },
    "DaemonManager\0daemonStarted\0\0daemonStopped\0"
    "daemonStartFailure\0daemonConsoleUpdated\0"
    "message\0printOutput\0printError\0"
    "stateChanged\0QProcess::ProcessState\0"
    "state\0start\0flags\0NetworkType::Type\0"
    "nettype\0dataDir\0bootstrapNodeAddress\0"
    "stop\0running\0sendCommand\0cmd\0exit\0"
    "validateDataDir"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DaemonManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   95,    2, 0x0a /* Public */,
       8,    0,   96,    2, 0x0a /* Public */,
       9,    1,   97,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    4,  100,    2, 0x02 /* Public */,
      12,    3,  109,    2, 0x22 /* Public | MethodCloned */,
      12,    2,  116,    2, 0x22 /* Public | MethodCloned */,
      18,    1,  121,    2, 0x02 /* Public */,
      19,    1,  124,    2, 0x02 /* Public */,
      20,    2,  127,    2, 0x02 /* Public */,
      22,    0,  132,    2, 0x02 /* Public */,
      23,    1,  133,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 14, QMetaType::QString, QMetaType::QString,   13,   15,   16,   17,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 14, QMetaType::QString,   13,   15,   16,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 14,   13,   15,
    QMetaType::Bool, 0x80000000 | 14,   15,
    QMetaType::Bool, 0x80000000 | 14,   15,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 14,   21,   15,
    QMetaType::Void,
    QMetaType::QVariantMap, QMetaType::QString,   16,

       0        // eod
};

void DaemonManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DaemonManager *_t = static_cast<DaemonManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->daemonStarted(); break;
        case 1: _t->daemonStopped(); break;
        case 2: _t->daemonStartFailure(); break;
        case 3: _t->daemonConsoleUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->printOutput(); break;
        case 5: _t->printError(); break;
        case 6: _t->stateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 7: { bool _r = _t->start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< NetworkType::Type(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< NetworkType::Type(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< NetworkType::Type(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->stop((*reinterpret_cast< NetworkType::Type(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->running((*reinterpret_cast< NetworkType::Type(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->sendCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< NetworkType::Type(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->exit(); break;
        case 14: { QVariantMap _r = _t->validateDataDir((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DaemonManager::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonManager::daemonStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DaemonManager::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonManager::daemonStopped)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DaemonManager::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonManager::daemonStartFailure)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DaemonManager::*)(QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonManager::daemonConsoleUpdated)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DaemonManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DaemonManager.data,
      qt_meta_data_DaemonManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DaemonManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DaemonManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DaemonManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DaemonManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void DaemonManager::daemonStarted()const
{
    QMetaObject::activate(const_cast< DaemonManager *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DaemonManager::daemonStopped()const
{
    QMetaObject::activate(const_cast< DaemonManager *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DaemonManager::daemonStartFailure()const
{
    QMetaObject::activate(const_cast< DaemonManager *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DaemonManager::daemonConsoleUpdated(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< DaemonManager *>(this), &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
