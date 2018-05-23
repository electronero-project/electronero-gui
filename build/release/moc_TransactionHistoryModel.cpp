/****************************************************************************
** Meta object code from reading C++ file 'TransactionHistoryModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/model/TransactionHistoryModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionHistoryModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransactionHistoryModel_t {
    QByteArrayData data[27];
    char stringdata0[625];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionHistoryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionHistoryModel_t qt_meta_stringdata_TransactionHistoryModel = {
    {
QT_MOC_LITERAL(0, 0, 23), // "TransactionHistoryModel"
QT_MOC_LITERAL(1, 24, 25), // "transactionHistoryChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 18), // "transactionHistory"
QT_MOC_LITERAL(4, 70, 19), // "TransactionHistory*"
QT_MOC_LITERAL(5, 90, 19), // "TransactionInfoRole"
QT_MOC_LITERAL(6, 110, 15), // "TransactionRole"
QT_MOC_LITERAL(7, 126, 24), // "TransactionDirectionRole"
QT_MOC_LITERAL(8, 151, 22), // "TransactionPendingRole"
QT_MOC_LITERAL(9, 174, 21), // "TransactionFailedRole"
QT_MOC_LITERAL(10, 196, 21), // "TransactionAmountRole"
QT_MOC_LITERAL(11, 218, 28), // "TransactionDisplayAmountRole"
QT_MOC_LITERAL(12, 247, 18), // "TransactionFeeRole"
QT_MOC_LITERAL(13, 266, 26), // "TransactionBlockHeightRole"
QT_MOC_LITERAL(14, 293, 27), // "TransactionSubaddrIndexRole"
QT_MOC_LITERAL(15, 321, 29), // "TransactionSubaddrAccountRole"
QT_MOC_LITERAL(16, 351, 20), // "TransactionLabelRole"
QT_MOC_LITERAL(17, 372, 28), // "TransactionConfirmationsRole"
QT_MOC_LITERAL(18, 401, 36), // "TransactionConfirmationsRequi..."
QT_MOC_LITERAL(19, 438, 19), // "TransactionHashRole"
QT_MOC_LITERAL(20, 458, 24), // "TransactionTimeStampRole"
QT_MOC_LITERAL(21, 483, 24), // "TransactionPaymentIdRole"
QT_MOC_LITERAL(22, 508, 20), // "TransactionIsOutRole"
QT_MOC_LITERAL(23, 529, 19), // "TransactionDateRole"
QT_MOC_LITERAL(24, 549, 19), // "TransactionTimeRole"
QT_MOC_LITERAL(25, 569, 27), // "TransactionAtomicAmountRole"
QT_MOC_LITERAL(26, 597, 27) // "TransactionDestinationsRole"

    },
    "TransactionHistoryModel\0"
    "transactionHistoryChanged\0\0"
    "transactionHistory\0TransactionHistory*\0"
    "TransactionInfoRole\0TransactionRole\0"
    "TransactionDirectionRole\0"
    "TransactionPendingRole\0TransactionFailedRole\0"
    "TransactionAmountRole\0"
    "TransactionDisplayAmountRole\0"
    "TransactionFeeRole\0TransactionBlockHeightRole\0"
    "TransactionSubaddrIndexRole\0"
    "TransactionSubaddrAccountRole\0"
    "TransactionLabelRole\0TransactionConfirmationsRole\0"
    "TransactionConfirmationsRequiredRole\0"
    "TransactionHashRole\0TransactionTimeStampRole\0"
    "TransactionPaymentIdRole\0TransactionIsOutRole\0"
    "TransactionDateRole\0TransactionTimeRole\0"
    "TransactionAtomicAmountRole\0"
    "TransactionDestinationsRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionHistoryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       1,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0049510b,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
       5, 0x0,   21,   28,

 // enum data: key, value
       6, uint(TransactionHistoryModel::TransactionRole),
       7, uint(TransactionHistoryModel::TransactionDirectionRole),
       8, uint(TransactionHistoryModel::TransactionPendingRole),
       9, uint(TransactionHistoryModel::TransactionFailedRole),
      10, uint(TransactionHistoryModel::TransactionAmountRole),
      11, uint(TransactionHistoryModel::TransactionDisplayAmountRole),
      12, uint(TransactionHistoryModel::TransactionFeeRole),
      13, uint(TransactionHistoryModel::TransactionBlockHeightRole),
      14, uint(TransactionHistoryModel::TransactionSubaddrIndexRole),
      15, uint(TransactionHistoryModel::TransactionSubaddrAccountRole),
      16, uint(TransactionHistoryModel::TransactionLabelRole),
      17, uint(TransactionHistoryModel::TransactionConfirmationsRole),
      18, uint(TransactionHistoryModel::TransactionConfirmationsRequiredRole),
      19, uint(TransactionHistoryModel::TransactionHashRole),
      20, uint(TransactionHistoryModel::TransactionTimeStampRole),
      21, uint(TransactionHistoryModel::TransactionPaymentIdRole),
      22, uint(TransactionHistoryModel::TransactionIsOutRole),
      23, uint(TransactionHistoryModel::TransactionDateRole),
      24, uint(TransactionHistoryModel::TransactionTimeRole),
      25, uint(TransactionHistoryModel::TransactionAtomicAmountRole),
      26, uint(TransactionHistoryModel::TransactionDestinationsRole),

       0        // eod
};

void TransactionHistoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionHistoryModel *_t = static_cast<TransactionHistoryModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transactionHistoryChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TransactionHistoryModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionHistoryModel::transactionHistoryChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TransactionHistoryModel *_t = static_cast<TransactionHistoryModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TransactionHistory**>(_v) = _t->transactionHistory(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TransactionHistoryModel *_t = static_cast<TransactionHistoryModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTransactionHistory(*reinterpret_cast< TransactionHistory**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TransactionHistoryModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_TransactionHistoryModel.data,
      qt_meta_data_TransactionHistoryModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransactionHistoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionHistoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionHistoryModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int TransactionHistoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TransactionHistoryModel::transactionHistoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
