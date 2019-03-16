/****************************************************************************
** Meta object code from reading C++ file 'TransactionInfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/libwalletqt/TransactionInfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransactionInfo_t {
    QByteArrayData data[28];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionInfo_t qt_meta_stringdata_TransactionInfo = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TransactionInfo"
QT_MOC_LITERAL(1, 16, 9), // "transfers"
QT_MOC_LITERAL(2, 26, 16), // "QList<Transfer*>"
QT_MOC_LITERAL(3, 43, 0), // ""
QT_MOC_LITERAL(4, 44, 9), // "direction"
QT_MOC_LITERAL(5, 54, 9), // "Direction"
QT_MOC_LITERAL(6, 64, 9), // "isPending"
QT_MOC_LITERAL(7, 74, 8), // "isFailed"
QT_MOC_LITERAL(8, 83, 6), // "amount"
QT_MOC_LITERAL(9, 90, 12), // "atomicAmount"
QT_MOC_LITERAL(10, 103, 13), // "displayAmount"
QT_MOC_LITERAL(11, 117, 3), // "fee"
QT_MOC_LITERAL(12, 121, 11), // "blockHeight"
QT_MOC_LITERAL(13, 133, 12), // "subaddrIndex"
QT_MOC_LITERAL(14, 146, 13), // "QSet<quint32>"
QT_MOC_LITERAL(15, 160, 14), // "subaddrAccount"
QT_MOC_LITERAL(16, 175, 5), // "label"
QT_MOC_LITERAL(17, 181, 13), // "confirmations"
QT_MOC_LITERAL(18, 195, 10), // "unlockTime"
QT_MOC_LITERAL(19, 206, 4), // "hash"
QT_MOC_LITERAL(20, 211, 9), // "timestamp"
QT_MOC_LITERAL(21, 221, 4), // "date"
QT_MOC_LITERAL(22, 226, 4), // "time"
QT_MOC_LITERAL(23, 231, 9), // "paymentId"
QT_MOC_LITERAL(24, 241, 22), // "destinations_formatted"
QT_MOC_LITERAL(25, 264, 12), // "Direction_In"
QT_MOC_LITERAL(26, 277, 13), // "Direction_Out"
QT_MOC_LITERAL(27, 291, 14) // "Direction_Both"

    },
    "TransactionInfo\0transfers\0QList<Transfer*>\0"
    "\0direction\0Direction\0isPending\0isFailed\0"
    "amount\0atomicAmount\0displayAmount\0fee\0"
    "blockHeight\0subaddrIndex\0QSet<quint32>\0"
    "subaddrAccount\0label\0confirmations\0"
    "unlockTime\0hash\0timestamp\0date\0time\0"
    "paymentId\0destinations_formatted\0"
    "Direction_In\0Direction_Out\0Direction_Both"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      19,   20, // properties
       1,   77, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00095009,
       6, QMetaType::Bool, 0x00095001,
       7, QMetaType::Bool, 0x00095001,
       8, QMetaType::Double, 0x00095001,
       9, QMetaType::ULongLong, 0x00095001,
      10, QMetaType::QString, 0x00095001,
      11, QMetaType::QString, 0x00095001,
      12, QMetaType::ULongLong, 0x00095001,
      13, 0x80000000 | 14, 0x00095009,
      15, QMetaType::UInt, 0x00095001,
      16, QMetaType::QString, 0x00095001,
      17, QMetaType::ULongLong, 0x00095001,
      18, QMetaType::ULongLong, 0x00095001,
      19, QMetaType::QString, 0x00095001,
      20, QMetaType::QDateTime, 0x00095001,
      21, QMetaType::QString, 0x00095001,
      22, QMetaType::QString, 0x00095001,
      23, QMetaType::QString, 0x00095001,
      24, QMetaType::QString, 0x00095001,

 // enums: name, flags, count, data
       5, 0x0,    3,   81,

 // enum data: key, value
      25, uint(TransactionInfo::Direction_In),
      26, uint(TransactionInfo::Direction_Out),
      27, uint(TransactionInfo::Direction_Both),

       0        // eod
};

void TransactionInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionInfo *_t = static_cast<TransactionInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QList<Transfer*> _r = _t->transfers();
            if (_a[0]) *reinterpret_cast< QList<Transfer*>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<quint32> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TransactionInfo *_t = static_cast<TransactionInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Direction*>(_v) = _t->direction(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPending(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isFailed(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->amount(); break;
        case 4: *reinterpret_cast< quint64*>(_v) = _t->atomicAmount(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->displayAmount(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->fee(); break;
        case 7: *reinterpret_cast< quint64*>(_v) = _t->blockHeight(); break;
        case 8: *reinterpret_cast< QSet<quint32>*>(_v) = _t->subaddrIndex(); break;
        case 9: *reinterpret_cast< quint32*>(_v) = _t->subaddrAccount(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 11: *reinterpret_cast< quint64*>(_v) = _t->confirmations(); break;
        case 12: *reinterpret_cast< quint64*>(_v) = _t->unlockTime(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->hash(); break;
        case 14: *reinterpret_cast< QDateTime*>(_v) = _t->timestamp(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->date(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->time(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->paymentId(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->destinations_formatted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TransactionInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TransactionInfo.data,
      qt_meta_data_TransactionInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransactionInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TransactionInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 19;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
