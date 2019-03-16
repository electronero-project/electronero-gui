/****************************************************************************
** Meta object code from reading C++ file 'Subaddress.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/libwalletqt/Subaddress.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Subaddress.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Subaddress_t {
    QByteArrayData data[16];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Subaddress_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Subaddress_t qt_meta_stringdata_Subaddress = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Subaddress"
QT_MOC_LITERAL(1, 11, 14), // "refreshStarted"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "refreshFinished"
QT_MOC_LITERAL(4, 43, 6), // "getAll"
QT_MOC_LITERAL(5, 50, 29), // "QList<Monero::SubaddressRow*>"
QT_MOC_LITERAL(6, 80, 6), // "update"
QT_MOC_LITERAL(7, 87, 6), // "getRow"
QT_MOC_LITERAL(8, 94, 22), // "Monero::SubaddressRow*"
QT_MOC_LITERAL(9, 117, 5), // "index"
QT_MOC_LITERAL(10, 123, 6), // "addRow"
QT_MOC_LITERAL(11, 130, 12), // "accountIndex"
QT_MOC_LITERAL(12, 143, 5), // "label"
QT_MOC_LITERAL(13, 149, 8), // "setLabel"
QT_MOC_LITERAL(14, 158, 12), // "addressIndex"
QT_MOC_LITERAL(15, 171, 7) // "refresh"

    },
    "Subaddress\0refreshStarted\0\0refreshFinished\0"
    "getAll\0QList<Monero::SubaddressRow*>\0"
    "update\0getRow\0Monero::SubaddressRow*\0"
    "index\0addRow\0accountIndex\0label\0"
    "setLabel\0addressIndex\0refresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Subaddress[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   56,    2, 0x02 /* Public */,
       4,    0,   59,    2, 0x22 /* Public | MethodCloned */,
       7,    1,   60,    2, 0x02 /* Public */,
      10,    2,   63,    2, 0x02 /* Public */,
      13,    3,   68,    2, 0x02 /* Public */,
      15,    1,   75,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 5, QMetaType::Bool,    6,
    0x80000000 | 5,
    0x80000000 | 8, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::QString,   11,   14,   12,
    QMetaType::Void, QMetaType::UInt,   11,

       0        // eod
};

void Subaddress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Subaddress *_t = static_cast<Subaddress *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshStarted(); break;
        case 1: _t->refreshFinished(); break;
        case 2: { QList<Monero::SubaddressRow*> _r = _t->getAll((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<Monero::SubaddressRow*>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QList<Monero::SubaddressRow*> _r = _t->getAll();
            if (_a[0]) *reinterpret_cast< QList<Monero::SubaddressRow*>*>(_a[0]) = std::move(_r); }  break;
        case 4: { Monero::SubaddressRow* _r = _t->getRow((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Monero::SubaddressRow**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->addRow((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->setLabel((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->refresh((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Subaddress::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Subaddress::refreshStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Subaddress::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Subaddress::refreshFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Subaddress::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Subaddress.data,
      qt_meta_data_Subaddress,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Subaddress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Subaddress::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Subaddress.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Subaddress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Subaddress::refreshStarted()const
{
    QMetaObject::activate(const_cast< Subaddress *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Subaddress::refreshFinished()const
{
    QMetaObject::activate(const_cast< Subaddress *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
