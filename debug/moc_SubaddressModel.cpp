/****************************************************************************
** Meta object code from reading C++ file 'SubaddressModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/model/SubaddressModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SubaddressModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SubaddressModel_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubaddressModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubaddressModel_t qt_meta_stringdata_SubaddressModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SubaddressModel"
QT_MOC_LITERAL(1, 16, 10), // "startReset"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "endReset"
QT_MOC_LITERAL(4, 37, 17), // "SubaddressRowRole"
QT_MOC_LITERAL(5, 55, 14), // "SubaddressRole"
QT_MOC_LITERAL(6, 70, 21), // "SubaddressAddressRole"
QT_MOC_LITERAL(7, 92, 19) // "SubaddressLabelRole"

    },
    "SubaddressModel\0startReset\0\0endReset\0"
    "SubaddressRowRole\0SubaddressRole\0"
    "SubaddressAddressRole\0SubaddressLabelRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubaddressModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
       4, 0x0,    3,   30,

 // enum data: key, value
       5, uint(SubaddressModel::SubaddressRole),
       6, uint(SubaddressModel::SubaddressAddressRole),
       7, uint(SubaddressModel::SubaddressLabelRole),

       0        // eod
};

void SubaddressModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubaddressModel *_t = static_cast<SubaddressModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startReset(); break;
        case 1: _t->endReset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SubaddressModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_SubaddressModel.data,
      qt_meta_data_SubaddressModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SubaddressModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubaddressModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubaddressModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int SubaddressModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
