/****************************************************************************
** Meta object code from reading C++ file 'WalletManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/libwalletqt/WalletManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WalletManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletManager_t {
    QByteArrayData data[97];
    char stringdata0[1132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletManager_t qt_meta_stringdata_WalletManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WalletManager"
QT_MOC_LITERAL(1, 14, 12), // "walletOpened"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "Wallet*"
QT_MOC_LITERAL(4, 36, 6), // "wallet"
QT_MOC_LITERAL(5, 43, 12), // "walletClosed"
QT_MOC_LITERAL(6, 56, 13), // "walletAddress"
QT_MOC_LITERAL(7, 70, 20), // "checkUpdatesComplete"
QT_MOC_LITERAL(8, 91, 6), // "result"
QT_MOC_LITERAL(9, 98, 12), // "createWallet"
QT_MOC_LITERAL(10, 111, 4), // "path"
QT_MOC_LITERAL(11, 116, 8), // "password"
QT_MOC_LITERAL(12, 125, 8), // "language"
QT_MOC_LITERAL(13, 134, 17), // "NetworkType::Type"
QT_MOC_LITERAL(14, 152, 7), // "nettype"
QT_MOC_LITERAL(15, 160, 10), // "openWallet"
QT_MOC_LITERAL(16, 171, 15), // "openWalletAsync"
QT_MOC_LITERAL(17, 187, 14), // "recoveryWallet"
QT_MOC_LITERAL(18, 202, 4), // "memo"
QT_MOC_LITERAL(19, 207, 13), // "restoreHeight"
QT_MOC_LITERAL(20, 221, 20), // "createWalletFromKeys"
QT_MOC_LITERAL(21, 242, 7), // "address"
QT_MOC_LITERAL(22, 250, 7), // "viewkey"
QT_MOC_LITERAL(23, 258, 8), // "spendkey"
QT_MOC_LITERAL(24, 267, 11), // "closeWallet"
QT_MOC_LITERAL(25, 279, 16), // "closeWalletAsync"
QT_MOC_LITERAL(26, 296, 12), // "walletExists"
QT_MOC_LITERAL(27, 309, 11), // "findWallets"
QT_MOC_LITERAL(28, 321, 11), // "errorString"
QT_MOC_LITERAL(29, 333, 10), // "moveWallet"
QT_MOC_LITERAL(30, 344, 3), // "src"
QT_MOC_LITERAL(31, 348, 3), // "dst"
QT_MOC_LITERAL(32, 352, 14), // "walletLanguage"
QT_MOC_LITERAL(33, 367, 6), // "locale"
QT_MOC_LITERAL(34, 374, 13), // "displayAmount"
QT_MOC_LITERAL(35, 388, 6), // "amount"
QT_MOC_LITERAL(36, 395, 16), // "amountFromString"
QT_MOC_LITERAL(37, 412, 16), // "amountFromDouble"
QT_MOC_LITERAL(38, 429, 20), // "maximumAllowedAmount"
QT_MOC_LITERAL(39, 450, 27), // "maximumAllowedAmountAsSting"
QT_MOC_LITERAL(40, 478, 14), // "paymentIdValid"
QT_MOC_LITERAL(41, 493, 10), // "payment_id"
QT_MOC_LITERAL(42, 504, 12), // "addressValid"
QT_MOC_LITERAL(43, 517, 8), // "keyValid"
QT_MOC_LITERAL(44, 526, 3), // "key"
QT_MOC_LITERAL(45, 530, 9), // "isViewKey"
QT_MOC_LITERAL(46, 540, 20), // "paymentIdFromAddress"
QT_MOC_LITERAL(47, 561, 16), // "setDaemonAddress"
QT_MOC_LITERAL(48, 578, 9), // "connected"
QT_MOC_LITERAL(49, 588, 17), // "networkDifficulty"
QT_MOC_LITERAL(50, 606, 16), // "blockchainHeight"
QT_MOC_LITERAL(51, 623, 22), // "blockchainTargetHeight"
QT_MOC_LITERAL(52, 646, 14), // "miningHashRate"
QT_MOC_LITERAL(53, 661, 17), // "localDaemonSynced"
QT_MOC_LITERAL(54, 679, 13), // "isDaemonLocal"
QT_MOC_LITERAL(55, 693, 14), // "daemon_address"
QT_MOC_LITERAL(56, 708, 8), // "isMining"
QT_MOC_LITERAL(57, 717, 11), // "startMining"
QT_MOC_LITERAL(58, 729, 7), // "threads"
QT_MOC_LITERAL(59, 737, 16), // "backgroundMining"
QT_MOC_LITERAL(60, 754, 13), // "ignoreBattery"
QT_MOC_LITERAL(61, 768, 10), // "stopMining"
QT_MOC_LITERAL(62, 779, 14), // "urlToLocalPath"
QT_MOC_LITERAL(63, 794, 3), // "url"
QT_MOC_LITERAL(64, 798, 14), // "localPathToUrl"
QT_MOC_LITERAL(65, 813, 11), // "setLogLevel"
QT_MOC_LITERAL(66, 825, 8), // "logLevel"
QT_MOC_LITERAL(67, 834, 16), // "setLogCategories"
QT_MOC_LITERAL(68, 851, 10), // "categories"
QT_MOC_LITERAL(69, 862, 3), // "add"
QT_MOC_LITERAL(70, 866, 1), // "x"
QT_MOC_LITERAL(71, 868, 1), // "y"
QT_MOC_LITERAL(72, 870, 3), // "sub"
QT_MOC_LITERAL(73, 874, 4), // "addi"
QT_MOC_LITERAL(74, 879, 4), // "subi"
QT_MOC_LITERAL(75, 884, 19), // "getPasswordStrength"
QT_MOC_LITERAL(76, 904, 16), // "resolveOpenAlias"
QT_MOC_LITERAL(77, 921, 9), // "parse_uri"
QT_MOC_LITERAL(78, 931, 3), // "uri"
QT_MOC_LITERAL(79, 935, 8), // "QString&"
QT_MOC_LITERAL(80, 944, 9), // "uint64_t&"
QT_MOC_LITERAL(81, 954, 14), // "tx_description"
QT_MOC_LITERAL(82, 969, 14), // "recipient_name"
QT_MOC_LITERAL(83, 984, 17), // "QVector<QString>&"
QT_MOC_LITERAL(84, 1002, 18), // "unknown_parameters"
QT_MOC_LITERAL(85, 1021, 5), // "error"
QT_MOC_LITERAL(86, 1027, 10), // "saveQrCode"
QT_MOC_LITERAL(87, 1038, 17), // "checkUpdatesAsync"
QT_MOC_LITERAL(88, 1056, 8), // "software"
QT_MOC_LITERAL(89, 1065, 6), // "subdir"
QT_MOC_LITERAL(90, 1072, 12), // "checkUpdates"
QT_MOC_LITERAL(91, 1085, 16), // "clearWalletCache"
QT_MOC_LITERAL(92, 1102, 8), // "fileName"
QT_MOC_LITERAL(93, 1111, 5), // "debug"
QT_MOC_LITERAL(94, 1117, 1), // "s"
QT_MOC_LITERAL(95, 1119, 4), // "info"
QT_MOC_LITERAL(96, 1124, 7) // "warning"

    },
    "WalletManager\0walletOpened\0\0Wallet*\0"
    "wallet\0walletClosed\0walletAddress\0"
    "checkUpdatesComplete\0result\0createWallet\0"
    "path\0password\0language\0NetworkType::Type\0"
    "nettype\0openWallet\0openWalletAsync\0"
    "recoveryWallet\0memo\0restoreHeight\0"
    "createWalletFromKeys\0address\0viewkey\0"
    "spendkey\0closeWallet\0closeWalletAsync\0"
    "walletExists\0findWallets\0errorString\0"
    "moveWallet\0src\0dst\0walletLanguage\0"
    "locale\0displayAmount\0amount\0"
    "amountFromString\0amountFromDouble\0"
    "maximumAllowedAmount\0maximumAllowedAmountAsSting\0"
    "paymentIdValid\0payment_id\0addressValid\0"
    "keyValid\0key\0isViewKey\0paymentIdFromAddress\0"
    "setDaemonAddress\0connected\0networkDifficulty\0"
    "blockchainHeight\0blockchainTargetHeight\0"
    "miningHashRate\0localDaemonSynced\0"
    "isDaemonLocal\0daemon_address\0isMining\0"
    "startMining\0threads\0backgroundMining\0"
    "ignoreBattery\0stopMining\0urlToLocalPath\0"
    "url\0localPathToUrl\0setLogLevel\0logLevel\0"
    "setLogCategories\0categories\0add\0x\0y\0"
    "sub\0addi\0subi\0getPasswordStrength\0"
    "resolveOpenAlias\0parse_uri\0uri\0QString&\0"
    "uint64_t&\0tx_description\0recipient_name\0"
    "QVector<QString>&\0unknown_parameters\0"
    "error\0saveQrCode\0checkUpdatesAsync\0"
    "software\0subdir\0checkUpdates\0"
    "clearWalletCache\0fileName\0debug\0s\0"
    "info\0warning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       1,  586, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  319,    2, 0x06 /* Public */,
       5,    1,  322,    2, 0x06 /* Public */,
       7,    1,  325,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    4,  328,    2, 0x02 /* Public */,
       9,    3,  337,    2, 0x22 /* Public | MethodCloned */,
      15,    3,  344,    2, 0x02 /* Public */,
      15,    2,  351,    2, 0x22 /* Public | MethodCloned */,
      16,    3,  356,    2, 0x02 /* Public */,
      16,    2,  363,    2, 0x22 /* Public | MethodCloned */,
      17,    4,  368,    2, 0x02 /* Public */,
      17,    3,  377,    2, 0x22 /* Public | MethodCloned */,
      17,    2,  384,    2, 0x22 /* Public | MethodCloned */,
      20,    7,  389,    2, 0x02 /* Public */,
      20,    6,  404,    2, 0x22 /* Public | MethodCloned */,
      20,    5,  417,    2, 0x22 /* Public | MethodCloned */,
      24,    0,  428,    2, 0x02 /* Public */,
      25,    0,  429,    2, 0x02 /* Public */,
      26,    1,  430,    2, 0x02 /* Public */,
      27,    1,  433,    2, 0x02 /* Public */,
      28,    0,  436,    2, 0x02 /* Public */,
      29,    2,  437,    2, 0x02 /* Public */,
      32,    1,  442,    2, 0x02 /* Public */,
      34,    1,  445,    2, 0x02 /* Public */,
      36,    1,  448,    2, 0x02 /* Public */,
      37,    1,  451,    2, 0x02 /* Public */,
      38,    0,  454,    2, 0x02 /* Public */,
      39,    0,  455,    2, 0x02 /* Public */,
      40,    1,  456,    2, 0x02 /* Public */,
      42,    2,  459,    2, 0x02 /* Public */,
      43,    4,  464,    2, 0x02 /* Public */,
      46,    2,  473,    2, 0x02 /* Public */,
      47,    1,  478,    2, 0x02 /* Public */,
      48,    0,  481,    2, 0x02 /* Public */,
      49,    0,  482,    2, 0x02 /* Public */,
      50,    0,  483,    2, 0x02 /* Public */,
      51,    0,  484,    2, 0x02 /* Public */,
      52,    0,  485,    2, 0x02 /* Public */,
      53,    0,  486,    2, 0x02 /* Public */,
      54,    1,  487,    2, 0x02 /* Public */,
      56,    0,  490,    2, 0x02 /* Public */,
      57,    4,  491,    2, 0x02 /* Public */,
      61,    0,  500,    2, 0x02 /* Public */,
      62,    1,  501,    2, 0x02 /* Public */,
      64,    1,  504,    2, 0x02 /* Public */,
      65,    1,  507,    2, 0x02 /* Public */,
      67,    1,  510,    2, 0x02 /* Public */,
      69,    2,  513,    2, 0x02 /* Public */,
      72,    2,  518,    2, 0x02 /* Public */,
      73,    2,  523,    2, 0x02 /* Public */,
      74,    2,  528,    2, 0x02 /* Public */,
      75,    1,  533,    2, 0x02 /* Public */,
      76,    1,  536,    2, 0x02 /* Public */,
      77,    8,  539,    2, 0x02 /* Public */,
      86,    2,  556,    2, 0x02 /* Public */,
      87,    2,  561,    2, 0x02 /* Public */,
      90,    2,  566,    2, 0x02 /* Public */,
      91,    1,  571,    2, 0x02 /* Public */,
      93,    1,  574,    2, 0x02 /* Public */,
      95,    1,  577,    2, 0x02 /* Public */,
      96,    1,  580,    2, 0x02 /* Public */,
      85,    1,  583,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // methods: parameters
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 13,   10,   11,   12,   14,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,   10,   11,   12,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 13,   10,   11,   14,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 13,   10,   11,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 13, QMetaType::ULongLong,   10,   18,   14,   19,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 13,   10,   18,   14,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString,   10,   18,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 13, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::ULongLong,   10,   12,   14,   21,   22,   23,   19,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 13, QMetaType::QString, QMetaType::QString, QMetaType::QString,   10,   12,   14,   21,   22,   23,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 13, QMetaType::QString, QMetaType::QString,   10,   12,   14,   21,   22,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   10,
    QMetaType::QStringList, QMetaType::QString,   10,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   30,   31,
    QMetaType::QString, QMetaType::QString,   33,
    QMetaType::QString, QMetaType::ULongLong,   35,
    QMetaType::ULongLong, QMetaType::QString,   35,
    QMetaType::ULongLong, QMetaType::Double,   35,
    QMetaType::ULongLong,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,   41,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 13,   21,   14,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Bool, 0x80000000 | 13,   44,   21,   45,   14,
    QMetaType::QString, QMetaType::QString, 0x80000000 | 13,   21,   14,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Bool,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::Double,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   55,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::UInt, QMetaType::Bool, QMetaType::Bool,   21,   58,   59,   60,
    QMetaType::Bool,
    QMetaType::QString, QMetaType::QUrl,   63,
    QMetaType::QUrl, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, QMetaType::QString,   68,
    QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::ULongLong,   70,   71,
    QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::ULongLong,   70,   71,
    QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,   70,   71,
    QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,   70,   71,
    QMetaType::Double, QMetaType::QString,   11,
    QMetaType::QString, QMetaType::QString,   21,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 79, 0x80000000 | 79, 0x80000000 | 80, 0x80000000 | 79, 0x80000000 | 79, 0x80000000 | 83, 0x80000000 | 79,   78,   21,   41,   35,   81,   82,   84,   85,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   88,   89,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   88,   89,
    QMetaType::Bool, QMetaType::QString,   92,
    QMetaType::Void, QMetaType::QString,   94,
    QMetaType::Void, QMetaType::QString,   94,
    QMetaType::Void, QMetaType::QString,   94,
    QMetaType::Void, QMetaType::QString,   94,

 // properties: name, type, flags
      48, QMetaType::Bool, 0x00095001,

       0        // eod
};

void WalletManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletManager *_t = static_cast<WalletManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->walletOpened((*reinterpret_cast< Wallet*(*)>(_a[1]))); break;
        case 1: _t->walletClosed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->checkUpdatesComplete((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { Wallet* _r = _t->createWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< NetworkType::Type(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = std::move(_r); }  break;
        case 4: { Wallet* _r = _t->createWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = std::move(_r); }  break;
        case 5: { Wallet* _r = _t->openWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< NetworkType::Type(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = std::move(_r); }  break;
        case 6: { Wallet* _r = _t->openWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->openWalletAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< NetworkType::Type(*)>(_a[3]))); break;
        case 8: _t->openWalletAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: { Wallet* _r = _t->recoveryWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< NetworkType::Type(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = std::move(_r); }  break;
        case 10: { Wallet* _r = _t->recoveryWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< NetworkType::Type(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = std::move(_r); }  break;
        case 11: { Wallet* _r = _t->recoveryWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = std::move(_r); }  break;
        case 12: { Wallet* _r = _t->createWalletFromKeys((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< NetworkType::Type(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< quint64(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = std::move(_r); }  break;
        case 13: { Wallet* _r = _t->createWalletFromKeys((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< NetworkType::Type(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = std::move(_r); }  break;
        case 14: { Wallet* _r = _t->createWalletFromKeys((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< NetworkType::Type(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< Wallet**>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->closeWallet();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->closeWalletAsync(); break;
        case 17: { bool _r = _t->walletExists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { QStringList _r = _t->findWallets((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 19: { QString _r = _t->errorString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->moveWallet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { QString _r = _t->walletLanguage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 22: { QString _r = _t->displayAmount((*reinterpret_cast< quint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 23: { quint64 _r = _t->amountFromString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 24: { quint64 _r = _t->amountFromDouble((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 25: { quint64 _r = _t->maximumAllowedAmount();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 26: { QString _r = _t->maximumAllowedAmountAsSting();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->paymentIdValid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->addressValid((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< NetworkType::Type(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->keyValid((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< NetworkType::Type(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { QString _r = _t->paymentIdFromAddress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< NetworkType::Type(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->setDaemonAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: { bool _r = _t->connected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { quint64 _r = _t->networkDifficulty();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 34: { quint64 _r = _t->blockchainHeight();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 35: { quint64 _r = _t->blockchainTargetHeight();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 36: { double _r = _t->miningHashRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->localDaemonSynced();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { bool _r = _t->isDaemonLocal((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->isMining();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { bool _r = _t->startMining((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: { bool _r = _t->stopMining();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { QString _r = _t->urlToLocalPath((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 43: { QUrl _r = _t->localPathToUrl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 44: _t->setLogLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->setLogCategories((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: { quint64 _r = _t->add((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 47: { quint64 _r = _t->sub((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 48: { qint64 _r = _t->addi((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 49: { qint64 _r = _t->subi((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 50: { double _r = _t->getPasswordStrength((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 51: { QString _r = _t->resolveOpenAlias((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 52: { bool _r = _t->parse_uri((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< uint64_t(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QVector<QString>(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: { bool _r = _t->saveQrCode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->checkUpdatesAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 55: { QString _r = _t->checkUpdates((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 56: { bool _r = _t->clearWalletCache((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 57: _t->debug((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 58: _t->info((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 59: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 60: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WalletManager::*_t)(Wallet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletManager::walletOpened)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WalletManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletManager::walletClosed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WalletManager::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletManager::checkUpdatesComplete)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        WalletManager *_t = static_cast<WalletManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->connected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WalletManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletManager.data,
      qt_meta_data_WalletManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 61;
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
void WalletManager::walletOpened(Wallet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletManager::walletClosed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletManager::checkUpdatesComplete(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< WalletManager *>(this), &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
