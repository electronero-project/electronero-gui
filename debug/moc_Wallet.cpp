/****************************************************************************
** Meta object code from reading C++ file 'Wallet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/libwalletqt/Wallet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Wallet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Wallet_t {
    QByteArrayData data[168];
    char stringdata0[2345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Wallet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Wallet_t qt_meta_stringdata_Wallet = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Wallet"
QT_MOC_LITERAL(1, 7, 7), // "updated"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 9), // "refreshed"
QT_MOC_LITERAL(4, 26, 10), // "moneySpent"
QT_MOC_LITERAL(5, 37, 4), // "txId"
QT_MOC_LITERAL(6, 42, 6), // "amount"
QT_MOC_LITERAL(7, 49, 13), // "moneyReceived"
QT_MOC_LITERAL(8, 63, 24), // "unconfirmedMoneyReceived"
QT_MOC_LITERAL(9, 88, 8), // "newBlock"
QT_MOC_LITERAL(10, 97, 6), // "height"
QT_MOC_LITERAL(11, 104, 12), // "targetHeight"
QT_MOC_LITERAL(12, 117, 19), // "historyModelChanged"
QT_MOC_LITERAL(13, 137, 27), // "walletCreationHeightChanged"
QT_MOC_LITERAL(14, 165, 18), // "transactionCreated"
QT_MOC_LITERAL(15, 184, 19), // "PendingTransaction*"
QT_MOC_LITERAL(16, 204, 11), // "transaction"
QT_MOC_LITERAL(17, 216, 7), // "address"
QT_MOC_LITERAL(18, 224, 9), // "paymentId"
QT_MOC_LITERAL(19, 234, 10), // "mixinCount"
QT_MOC_LITERAL(20, 245, 23), // "connectionStatusChanged"
QT_MOC_LITERAL(21, 269, 16), // "ConnectionStatus"
QT_MOC_LITERAL(22, 286, 6), // "status"
QT_MOC_LITERAL(23, 293, 15), // "setSeedLanguage"
QT_MOC_LITERAL(24, 309, 4), // "lang"
QT_MOC_LITERAL(25, 314, 9), // "connected"
QT_MOC_LITERAL(26, 324, 10), // "forceCheck"
QT_MOC_LITERAL(27, 335, 11), // "setPassword"
QT_MOC_LITERAL(28, 347, 8), // "password"
QT_MOC_LITERAL(29, 356, 12), // "accountIndex"
QT_MOC_LITERAL(30, 369, 12), // "addressIndex"
QT_MOC_LITERAL(31, 382, 5), // "store"
QT_MOC_LITERAL(32, 388, 4), // "path"
QT_MOC_LITERAL(33, 393, 4), // "init"
QT_MOC_LITERAL(34, 398, 13), // "daemonAddress"
QT_MOC_LITERAL(35, 412, 21), // "upperTransactionLimit"
QT_MOC_LITERAL(36, 434, 12), // "isRecovering"
QT_MOC_LITERAL(37, 447, 13), // "restoreHeight"
QT_MOC_LITERAL(38, 461, 9), // "initAsync"
QT_MOC_LITERAL(39, 471, 14), // "setDaemonLogin"
QT_MOC_LITERAL(40, 486, 14), // "daemonUsername"
QT_MOC_LITERAL(41, 501, 14), // "daemonPassword"
QT_MOC_LITERAL(42, 516, 14), // "createViewOnly"
QT_MOC_LITERAL(43, 531, 15), // "connectToDaemon"
QT_MOC_LITERAL(44, 547, 16), // "setTrustedDaemon"
QT_MOC_LITERAL(45, 564, 3), // "arg"
QT_MOC_LITERAL(46, 568, 7), // "balance"
QT_MOC_LITERAL(47, 576, 10), // "balanceAll"
QT_MOC_LITERAL(48, 587, 15), // "unlockedBalance"
QT_MOC_LITERAL(49, 603, 18), // "unlockedBalanceAll"
QT_MOC_LITERAL(50, 622, 23), // "switchSubaddressAccount"
QT_MOC_LITERAL(51, 646, 20), // "addSubaddressAccount"
QT_MOC_LITERAL(52, 667, 5), // "label"
QT_MOC_LITERAL(53, 673, 21), // "numSubaddressAccounts"
QT_MOC_LITERAL(54, 695, 15), // "numSubaddresses"
QT_MOC_LITERAL(55, 711, 13), // "addSubaddress"
QT_MOC_LITERAL(56, 725, 18), // "getSubaddressLabel"
QT_MOC_LITERAL(57, 744, 18), // "setSubaddressLabel"
QT_MOC_LITERAL(58, 763, 8), // "viewOnly"
QT_MOC_LITERAL(59, 772, 16), // "blockChainHeight"
QT_MOC_LITERAL(60, 789, 22), // "daemonBlockChainHeight"
QT_MOC_LITERAL(61, 812, 28), // "daemonBlockChainTargetHeight"
QT_MOC_LITERAL(62, 841, 7), // "refresh"
QT_MOC_LITERAL(63, 849, 12), // "refreshAsync"
QT_MOC_LITERAL(64, 862, 22), // "setAutoRefreshInterval"
QT_MOC_LITERAL(65, 885, 7), // "seconds"
QT_MOC_LITERAL(66, 893, 19), // "autoRefreshInterval"
QT_MOC_LITERAL(67, 913, 12), // "startRefresh"
QT_MOC_LITERAL(68, 926, 12), // "pauseRefresh"
QT_MOC_LITERAL(69, 939, 17), // "createTransaction"
QT_MOC_LITERAL(70, 957, 8), // "dst_addr"
QT_MOC_LITERAL(71, 966, 10), // "payment_id"
QT_MOC_LITERAL(72, 977, 11), // "mixin_count"
QT_MOC_LITERAL(73, 989, 28), // "PendingTransaction::Priority"
QT_MOC_LITERAL(74, 1018, 8), // "priority"
QT_MOC_LITERAL(75, 1027, 22), // "createTransactionAsync"
QT_MOC_LITERAL(76, 1050, 20), // "createTransactionAll"
QT_MOC_LITERAL(77, 1071, 25), // "createTransactionAllAsync"
QT_MOC_LITERAL(78, 1097, 31), // "createSweepUnmixableTransaction"
QT_MOC_LITERAL(79, 1129, 36), // "createSweepUnmixableTransacti..."
QT_MOC_LITERAL(80, 1166, 10), // "loadTxFile"
QT_MOC_LITERAL(81, 1177, 20), // "UnsignedTransaction*"
QT_MOC_LITERAL(82, 1198, 8), // "fileName"
QT_MOC_LITERAL(83, 1207, 12), // "submitTxFile"
QT_MOC_LITERAL(84, 1220, 18), // "disposeTransaction"
QT_MOC_LITERAL(85, 1239, 1), // "t"
QT_MOC_LITERAL(86, 1241, 17), // "generatePaymentId"
QT_MOC_LITERAL(87, 1259, 17), // "integratedAddress"
QT_MOC_LITERAL(88, 1277, 11), // "signMessage"
QT_MOC_LITERAL(89, 1289, 7), // "message"
QT_MOC_LITERAL(90, 1297, 8), // "filename"
QT_MOC_LITERAL(91, 1306, 19), // "verifySignedMessage"
QT_MOC_LITERAL(92, 1326, 9), // "signature"
QT_MOC_LITERAL(93, 1336, 9), // "parse_uri"
QT_MOC_LITERAL(94, 1346, 3), // "uri"
QT_MOC_LITERAL(95, 1350, 8), // "QString&"
QT_MOC_LITERAL(96, 1359, 9), // "uint64_t&"
QT_MOC_LITERAL(97, 1369, 14), // "tx_description"
QT_MOC_LITERAL(98, 1384, 14), // "recipient_name"
QT_MOC_LITERAL(99, 1399, 17), // "QVector<QString>&"
QT_MOC_LITERAL(100, 1417, 18), // "unknown_parameters"
QT_MOC_LITERAL(101, 1436, 5), // "error"
QT_MOC_LITERAL(102, 1442, 11), // "setUserNote"
QT_MOC_LITERAL(103, 1454, 4), // "txid"
QT_MOC_LITERAL(104, 1459, 4), // "note"
QT_MOC_LITERAL(105, 1464, 11), // "getUserNote"
QT_MOC_LITERAL(106, 1476, 8), // "getTxKey"
QT_MOC_LITERAL(107, 1485, 10), // "checkTxKey"
QT_MOC_LITERAL(108, 1496, 6), // "tx_key"
QT_MOC_LITERAL(109, 1503, 10), // "getTxProof"
QT_MOC_LITERAL(110, 1514, 12), // "checkTxProof"
QT_MOC_LITERAL(111, 1527, 13), // "getSpendProof"
QT_MOC_LITERAL(112, 1541, 15), // "checkSpendProof"
QT_MOC_LITERAL(113, 1557, 11), // "rescanSpent"
QT_MOC_LITERAL(114, 1569, 12), // "useForkRules"
QT_MOC_LITERAL(115, 1582, 7), // "version"
QT_MOC_LITERAL(116, 1590, 11), // "earlyBlocks"
QT_MOC_LITERAL(117, 1602, 15), // "blackballOutput"
QT_MOC_LITERAL(118, 1618, 6), // "pubkey"
QT_MOC_LITERAL(119, 1625, 16), // "blackballOutputs"
QT_MOC_LITERAL(120, 1642, 14), // "QList<QString>"
QT_MOC_LITERAL(121, 1657, 7), // "pubkeys"
QT_MOC_LITERAL(122, 1665, 3), // "add"
QT_MOC_LITERAL(123, 1669, 17), // "unblackballOutput"
QT_MOC_LITERAL(124, 1687, 7), // "getRing"
QT_MOC_LITERAL(125, 1695, 9), // "key_image"
QT_MOC_LITERAL(126, 1705, 8), // "getRings"
QT_MOC_LITERAL(127, 1714, 7), // "setRing"
QT_MOC_LITERAL(128, 1722, 4), // "ring"
QT_MOC_LITERAL(129, 1727, 8), // "relative"
QT_MOC_LITERAL(130, 1736, 23), // "segregatePreForkOutputs"
QT_MOC_LITERAL(131, 1760, 9), // "segregate"
QT_MOC_LITERAL(132, 1770, 17), // "segregationHeight"
QT_MOC_LITERAL(133, 1788, 19), // "keyReuseMitigation2"
QT_MOC_LITERAL(134, 1808, 10), // "mitigation"
QT_MOC_LITERAL(135, 1819, 4), // "seed"
QT_MOC_LITERAL(136, 1824, 12), // "seedLanguage"
QT_MOC_LITERAL(137, 1837, 6), // "Status"
QT_MOC_LITERAL(138, 1844, 7), // "nettype"
QT_MOC_LITERAL(139, 1852, 17), // "NetworkType::Type"
QT_MOC_LITERAL(140, 1870, 24), // "currentSubaddressAccount"
QT_MOC_LITERAL(141, 1895, 12), // "synchronized"
QT_MOC_LITERAL(142, 1908, 11), // "errorString"
QT_MOC_LITERAL(143, 1920, 7), // "history"
QT_MOC_LITERAL(144, 1928, 19), // "TransactionHistory*"
QT_MOC_LITERAL(145, 1948, 12), // "historyModel"
QT_MOC_LITERAL(146, 1961, 34), // "TransactionHistorySortFilterM..."
QT_MOC_LITERAL(147, 1996, 16), // "addressBookModel"
QT_MOC_LITERAL(148, 2013, 17), // "AddressBookModel*"
QT_MOC_LITERAL(149, 2031, 11), // "addressBook"
QT_MOC_LITERAL(150, 2043, 12), // "AddressBook*"
QT_MOC_LITERAL(151, 2056, 15), // "subaddressModel"
QT_MOC_LITERAL(152, 2072, 16), // "SubaddressModel*"
QT_MOC_LITERAL(153, 2089, 10), // "subaddress"
QT_MOC_LITERAL(154, 2100, 11), // "Subaddress*"
QT_MOC_LITERAL(155, 2112, 13), // "secretViewKey"
QT_MOC_LITERAL(156, 2126, 13), // "publicViewKey"
QT_MOC_LITERAL(157, 2140, 14), // "secretSpendKey"
QT_MOC_LITERAL(158, 2155, 14), // "publicSpendKey"
QT_MOC_LITERAL(159, 2170, 13), // "daemonLogPath"
QT_MOC_LITERAL(160, 2184, 13), // "walletLogPath"
QT_MOC_LITERAL(161, 2198, 20), // "walletCreationHeight"
QT_MOC_LITERAL(162, 2219, 9), // "Status_Ok"
QT_MOC_LITERAL(163, 2229, 12), // "Status_Error"
QT_MOC_LITERAL(164, 2242, 15), // "Status_Critical"
QT_MOC_LITERAL(165, 2258, 26), // "ConnectionStatus_Connected"
QT_MOC_LITERAL(166, 2285, 29), // "ConnectionStatus_Disconnected"
QT_MOC_LITERAL(167, 2315, 29) // "ConnectionStatus_WrongVersion"

    },
    "Wallet\0updated\0\0refreshed\0moneySpent\0"
    "txId\0amount\0moneyReceived\0"
    "unconfirmedMoneyReceived\0newBlock\0"
    "height\0targetHeight\0historyModelChanged\0"
    "walletCreationHeightChanged\0"
    "transactionCreated\0PendingTransaction*\0"
    "transaction\0address\0paymentId\0mixinCount\0"
    "connectionStatusChanged\0ConnectionStatus\0"
    "status\0setSeedLanguage\0lang\0connected\0"
    "forceCheck\0setPassword\0password\0"
    "accountIndex\0addressIndex\0store\0path\0"
    "init\0daemonAddress\0upperTransactionLimit\0"
    "isRecovering\0restoreHeight\0initAsync\0"
    "setDaemonLogin\0daemonUsername\0"
    "daemonPassword\0createViewOnly\0"
    "connectToDaemon\0setTrustedDaemon\0arg\0"
    "balance\0balanceAll\0unlockedBalance\0"
    "unlockedBalanceAll\0switchSubaddressAccount\0"
    "addSubaddressAccount\0label\0"
    "numSubaddressAccounts\0numSubaddresses\0"
    "addSubaddress\0getSubaddressLabel\0"
    "setSubaddressLabel\0viewOnly\0"
    "blockChainHeight\0daemonBlockChainHeight\0"
    "daemonBlockChainTargetHeight\0refresh\0"
    "refreshAsync\0setAutoRefreshInterval\0"
    "seconds\0autoRefreshInterval\0startRefresh\0"
    "pauseRefresh\0createTransaction\0dst_addr\0"
    "payment_id\0mixin_count\0"
    "PendingTransaction::Priority\0priority\0"
    "createTransactionAsync\0createTransactionAll\0"
    "createTransactionAllAsync\0"
    "createSweepUnmixableTransaction\0"
    "createSweepUnmixableTransactionAsync\0"
    "loadTxFile\0UnsignedTransaction*\0"
    "fileName\0submitTxFile\0disposeTransaction\0"
    "t\0generatePaymentId\0integratedAddress\0"
    "signMessage\0message\0filename\0"
    "verifySignedMessage\0signature\0parse_uri\0"
    "uri\0QString&\0uint64_t&\0tx_description\0"
    "recipient_name\0QVector<QString>&\0"
    "unknown_parameters\0error\0setUserNote\0"
    "txid\0note\0getUserNote\0getTxKey\0"
    "checkTxKey\0tx_key\0getTxProof\0checkTxProof\0"
    "getSpendProof\0checkSpendProof\0rescanSpent\0"
    "useForkRules\0version\0earlyBlocks\0"
    "blackballOutput\0pubkey\0blackballOutputs\0"
    "QList<QString>\0pubkeys\0add\0unblackballOutput\0"
    "getRing\0key_image\0getRings\0setRing\0"
    "ring\0relative\0segregatePreForkOutputs\0"
    "segregate\0segregationHeight\0"
    "keyReuseMitigation2\0mitigation\0seed\0"
    "seedLanguage\0Status\0nettype\0"
    "NetworkType::Type\0currentSubaddressAccount\0"
    "synchronized\0errorString\0history\0"
    "TransactionHistory*\0historyModel\0"
    "TransactionHistorySortFilterModel*\0"
    "addressBookModel\0AddressBookModel*\0"
    "addressBook\0AddressBook*\0subaddressModel\0"
    "SubaddressModel*\0subaddress\0Subaddress*\0"
    "secretViewKey\0publicViewKey\0secretSpendKey\0"
    "publicSpendKey\0daemonLogPath\0walletLogPath\0"
    "walletCreationHeight\0Status_Ok\0"
    "Status_Error\0Status_Critical\0"
    "ConnectionStatus_Connected\0"
    "ConnectionStatus_Disconnected\0"
    "ConnectionStatus_WrongVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Wallet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      90,   14, // methods
      23,  822, // properties
       2,  914, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  464,    2, 0x06 /* Public */,
       3,    0,  465,    2, 0x06 /* Public */,
       4,    2,  466,    2, 0x06 /* Public */,
       7,    2,  471,    2, 0x06 /* Public */,
       8,    2,  476,    2, 0x06 /* Public */,
       9,    2,  481,    2, 0x06 /* Public */,
      12,    0,  486,    2, 0x06 /* Public */,
      13,    0,  487,    2, 0x06 /* Public */,
      14,    4,  488,    2, 0x06 /* Public */,
      20,    1,  497,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      23,    1,  500,    2, 0x02 /* Public */,
      25,    1,  503,    2, 0x02 /* Public */,
      25,    0,  506,    2, 0x22 /* Public | MethodCloned */,
      27,    1,  507,    2, 0x02 /* Public */,
      17,    2,  510,    2, 0x02 /* Public */,
      31,    1,  515,    2, 0x02 /* Public */,
      31,    0,  518,    2, 0x22 /* Public | MethodCloned */,
      33,    4,  519,    2, 0x02 /* Public */,
      33,    3,  528,    2, 0x22 /* Public | MethodCloned */,
      33,    2,  535,    2, 0x22 /* Public | MethodCloned */,
      33,    1,  540,    2, 0x22 /* Public | MethodCloned */,
      38,    4,  543,    2, 0x02 /* Public */,
      38,    3,  552,    2, 0x22 /* Public | MethodCloned */,
      38,    2,  559,    2, 0x22 /* Public | MethodCloned */,
      38,    1,  564,    2, 0x22 /* Public | MethodCloned */,
      39,    2,  567,    2, 0x02 /* Public */,
      39,    1,  572,    2, 0x22 /* Public | MethodCloned */,
      39,    0,  575,    2, 0x22 /* Public | MethodCloned */,
      42,    2,  576,    2, 0x02 /* Public */,
      43,    0,  581,    2, 0x02 /* Public */,
      44,    1,  582,    2, 0x02 /* Public */,
      46,    1,  585,    2, 0x02 /* Public */,
      47,    0,  588,    2, 0x02 /* Public */,
      48,    1,  589,    2, 0x02 /* Public */,
      49,    0,  592,    2, 0x02 /* Public */,
      50,    1,  593,    2, 0x02 /* Public */,
      51,    1,  596,    2, 0x02 /* Public */,
      53,    0,  599,    2, 0x02 /* Public */,
      54,    1,  600,    2, 0x02 /* Public */,
      55,    1,  603,    2, 0x02 /* Public */,
      56,    2,  606,    2, 0x02 /* Public */,
      57,    3,  611,    2, 0x02 /* Public */,
      58,    0,  618,    2, 0x02 /* Public */,
      59,    0,  619,    2, 0x02 /* Public */,
      60,    0,  620,    2, 0x02 /* Public */,
      61,    0,  621,    2, 0x02 /* Public */,
      62,    0,  622,    2, 0x02 /* Public */,
      63,    0,  623,    2, 0x02 /* Public */,
      64,    1,  624,    2, 0x02 /* Public */,
      66,    0,  627,    2, 0x02 /* Public */,
      67,    0,  628,    2, 0x02 /* Public */,
      68,    0,  629,    2, 0x02 /* Public */,
      69,    5,  630,    2, 0x02 /* Public */,
      75,    5,  641,    2, 0x02 /* Public */,
      76,    4,  652,    2, 0x02 /* Public */,
      77,    4,  661,    2, 0x02 /* Public */,
      78,    0,  670,    2, 0x02 /* Public */,
      79,    0,  671,    2, 0x02 /* Public */,
      80,    1,  672,    2, 0x02 /* Public */,
      83,    1,  675,    2, 0x02 /* Public */,
      84,    1,  678,    2, 0x02 /* Public */,
      84,    1,  681,    2, 0x02 /* Public */,
      86,    0,  684,    2, 0x02 /* Public */,
      87,    1,  685,    2, 0x02 /* Public */,
      88,    2,  688,    2, 0x02 /* Public */,
      88,    1,  693,    2, 0x22 /* Public | MethodCloned */,
      91,    4,  696,    2, 0x02 /* Public */,
      91,    3,  705,    2, 0x22 /* Public | MethodCloned */,
      93,    8,  712,    2, 0x02 /* Public */,
     102,    2,  729,    2, 0x02 /* Public */,
     105,    1,  734,    2, 0x02 /* Public */,
     106,    1,  737,    2, 0x02 /* Public */,
     107,    3,  740,    2, 0x02 /* Public */,
     109,    3,  747,    2, 0x02 /* Public */,
     110,    4,  754,    2, 0x02 /* Public */,
     111,    2,  763,    2, 0x02 /* Public */,
     112,    3,  768,    2, 0x02 /* Public */,
     113,    0,  775,    2, 0x02 /* Public */,
     114,    2,  776,    2, 0x02 /* Public */,
     114,    1,  781,    2, 0x22 /* Public | MethodCloned */,
     117,    1,  784,    2, 0x02 /* Public */,
     119,    2,  787,    2, 0x02 /* Public */,
     119,    2,  792,    2, 0x02 /* Public */,
     123,    1,  797,    2, 0x02 /* Public */,
     124,    1,  800,    2, 0x02 /* Public */,
     126,    1,  803,    2, 0x02 /* Public */,
     127,    3,  806,    2, 0x02 /* Public */,
     130,    1,  813,    2, 0x02 /* Public */,
     132,    1,  816,    2, 0x02 /* Public */,
     133,    1,  819,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    5,    6,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   16,   17,   18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   24,
    0x80000000 | 21, QMetaType::Bool,   26,
    0x80000000 | 21,
    QMetaType::Bool, QMetaType::QString,   28,
    QMetaType::QString, QMetaType::UInt, QMetaType::UInt,   29,   30,
    QMetaType::Bool, QMetaType::QString,   32,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::ULongLong, QMetaType::Bool, QMetaType::ULongLong,   34,   35,   36,   37,
    QMetaType::Bool, QMetaType::QString, QMetaType::ULongLong, QMetaType::Bool,   34,   35,   36,
    QMetaType::Bool, QMetaType::QString, QMetaType::ULongLong,   34,   35,
    QMetaType::Bool, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong, QMetaType::Bool, QMetaType::ULongLong,   34,   35,   36,   37,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong, QMetaType::Bool,   34,   35,   36,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,   34,   35,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   40,   41,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   32,   28,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::ULongLong, QMetaType::UInt,   29,
    QMetaType::ULongLong,
    QMetaType::ULongLong, QMetaType::UInt,   29,
    QMetaType::ULongLong,
    QMetaType::Void, QMetaType::UInt,   29,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::UInt,
    QMetaType::UInt, QMetaType::UInt,   29,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::QString, QMetaType::UInt, QMetaType::UInt,   29,   30,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::QString,   29,   30,   52,
    QMetaType::Bool,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 15, QMetaType::QString, QMetaType::QString, QMetaType::ULongLong, QMetaType::UInt, 0x80000000 | 73,   70,   71,    6,   72,   74,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::ULongLong, QMetaType::UInt, 0x80000000 | 73,   70,   71,    6,   72,   74,
    0x80000000 | 15, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 73,   70,   71,   72,   74,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 73,   70,   71,   72,   74,
    0x80000000 | 15,
    QMetaType::Void,
    0x80000000 | 81, QMetaType::QString,   82,
    QMetaType::Bool, QMetaType::QString,   82,
    QMetaType::Void, 0x80000000 | 15,   85,
    QMetaType::Void, 0x80000000 | 81,   85,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   18,
    QMetaType::QString, QMetaType::QString, QMetaType::Bool,   89,   90,
    QMetaType::QString, QMetaType::QString,   89,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   89,   17,   92,   90,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,   89,   17,   92,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 95, 0x80000000 | 95, 0x80000000 | 96, 0x80000000 | 95, 0x80000000 | 95, 0x80000000 | 99, 0x80000000 | 95,   94,   17,   71,    6,   97,   98,  100,  101,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,  103,  104,
    QMetaType::QString, QMetaType::QString,  103,
    QMetaType::QString, QMetaType::QString,  103,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,  103,  108,   17,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,  103,   17,   89,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,  103,   17,   89,   92,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,  103,   89,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,  103,   89,   92,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::UChar, QMetaType::ULongLong,  115,  116,
    QMetaType::Bool, QMetaType::UChar,  115,
    QMetaType::Bool, QMetaType::QString,  118,
    QMetaType::Bool, 0x80000000 | 120, QMetaType::Bool,  121,  122,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   90,  122,
    QMetaType::Bool, QMetaType::QString,  118,
    QMetaType::QString, QMetaType::QString,  125,
    QMetaType::QString, QMetaType::QString,  103,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Bool,  125,  128,  129,
    QMetaType::Void, QMetaType::Bool,  131,
    QMetaType::Void, QMetaType::ULongLong,   10,
    QMetaType::Void, QMetaType::Bool,  134,

 // properties: name, type, flags
     135, QMetaType::QString, 0x00095001,
     136, QMetaType::QString, 0x00095001,
      22, 0x80000000 | 137, 0x00095009,
     138, 0x80000000 | 139, 0x00095009,
     140, QMetaType::UInt, 0x00095001,
     141, QMetaType::Bool, 0x00095001,
     142, QMetaType::QString, 0x00095001,
     143, 0x80000000 | 144, 0x00095009,
      18, QMetaType::QString, 0x00095103,
     145, 0x80000000 | 146, 0x00495009,
      32, QMetaType::QString, 0x00095001,
     147, 0x80000000 | 148, 0x00095009,
     149, 0x80000000 | 150, 0x00095009,
     151, 0x80000000 | 152, 0x00095009,
     153, 0x80000000 | 154, 0x00095009,
      58, QMetaType::Bool, 0x00095001,
     155, QMetaType::QString, 0x00095001,
     156, QMetaType::QString, 0x00095001,
     157, QMetaType::QString, 0x00095001,
     158, QMetaType::QString, 0x00095001,
     159, QMetaType::QString, 0x00095401,
     160, QMetaType::QString, 0x00095401,
     161, QMetaType::ULongLong, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       6,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       7,

 // enums: name, flags, count, data
     137, 0x0,    3,  922,
      21, 0x0,    3,  928,

 // enum data: key, value
     162, uint(Wallet::Status_Ok),
     163, uint(Wallet::Status_Error),
     164, uint(Wallet::Status_Critical),
     165, uint(Wallet::ConnectionStatus_Connected),
     166, uint(Wallet::ConnectionStatus_Disconnected),
     167, uint(Wallet::ConnectionStatus_WrongVersion),

       0        // eod
};

void Wallet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Wallet *_t = static_cast<Wallet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->refreshed(); break;
        case 2: _t->moneySpent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 3: _t->moneyReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 4: _t->unconfirmedMoneyReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 5: _t->newBlock((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 6: _t->historyModelChanged(); break;
        case 7: _t->walletCreationHeightChanged(); break;
        case 8: _t->transactionCreated((*reinterpret_cast< PendingTransaction*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4]))); break;
        case 9: _t->connectionStatusChanged((*reinterpret_cast< ConnectionStatus(*)>(_a[1]))); break;
        case 10: _t->setSeedLanguage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: { ConnectionStatus _r = _t->connected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ConnectionStatus*>(_a[0]) = std::move(_r); }  break;
        case 12: { ConnectionStatus _r = _t->connected();
            if (_a[0]) *reinterpret_cast< ConnectionStatus*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->setPassword((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->address((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->store((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->store();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->init((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->init((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->init((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->init((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->initAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 22: _t->initAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->initAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 24: _t->initAsync((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->setDaemonLogin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 26: _t->setDaemonLogin((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->setDaemonLogin(); break;
        case 28: { bool _r = _t->createViewOnly((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->connectToDaemon();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->setTrustedDaemon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: { quint64 _r = _t->balance((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 32: { quint64 _r = _t->balanceAll();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 33: { quint64 _r = _t->unlockedBalance((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 34: { quint64 _r = _t->unlockedBalanceAll();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->switchSubaddressAccount((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 36: _t->addSubaddressAccount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: { quint32 _r = _t->numSubaddressAccounts();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 38: { quint32 _r = _t->numSubaddresses((*reinterpret_cast< quint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 39: _t->addSubaddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: { QString _r = _t->getSubaddressLabel((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 41: _t->setSubaddressLabel((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 42: { bool _r = _t->viewOnly();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: { quint64 _r = _t->blockChainHeight();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 44: { quint64 _r = _t->daemonBlockChainHeight();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 45: { quint64 _r = _t->daemonBlockChainTargetHeight();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 46: { bool _r = _t->refresh();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: _t->refreshAsync(); break;
        case 48: _t->setAutoRefreshInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: { int _r = _t->autoRefreshInterval();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->startRefresh(); break;
        case 51: _t->pauseRefresh(); break;
        case 52: { PendingTransaction* _r = _t->createTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4])),(*reinterpret_cast< PendingTransaction::Priority(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< PendingTransaction**>(_a[0]) = std::move(_r); }  break;
        case 53: _t->createTransactionAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4])),(*reinterpret_cast< PendingTransaction::Priority(*)>(_a[5]))); break;
        case 54: { PendingTransaction* _r = _t->createTransactionAll((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< PendingTransaction::Priority(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< PendingTransaction**>(_a[0]) = std::move(_r); }  break;
        case 55: _t->createTransactionAllAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< PendingTransaction::Priority(*)>(_a[4]))); break;
        case 56: { PendingTransaction* _r = _t->createSweepUnmixableTransaction();
            if (_a[0]) *reinterpret_cast< PendingTransaction**>(_a[0]) = std::move(_r); }  break;
        case 57: _t->createSweepUnmixableTransactionAsync(); break;
        case 58: { UnsignedTransaction* _r = _t->loadTxFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< UnsignedTransaction**>(_a[0]) = std::move(_r); }  break;
        case 59: { bool _r = _t->submitTxFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 60: _t->disposeTransaction((*reinterpret_cast< PendingTransaction*(*)>(_a[1]))); break;
        case 61: _t->disposeTransaction((*reinterpret_cast< UnsignedTransaction*(*)>(_a[1]))); break;
        case 62: { QString _r = _t->generatePaymentId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 63: { QString _r = _t->integratedAddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 64: { QString _r = _t->signMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 65: { QString _r = _t->signMessage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 66: { bool _r = _t->verifySignedMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 67: { bool _r = _t->verifySignedMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 68: { bool _r = _t->parse_uri((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< uint64_t(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QVector<QString>(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 69: { bool _r = _t->setUserNote((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 70: { QString _r = _t->getUserNote((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 71: { QString _r = _t->getTxKey((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 72: { QString _r = _t->checkTxKey((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 73: { QString _r = _t->getTxProof((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 74: { QString _r = _t->checkTxProof((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 75: { QString _r = _t->getSpendProof((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 76: { QString _r = _t->checkSpendProof((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 77: { bool _r = _t->rescanSpent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 78: { bool _r = _t->useForkRules((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 79: { bool _r = _t->useForkRules((*reinterpret_cast< quint8(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 80: { bool _r = _t->blackballOutput((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 81: { bool _r = _t->blackballOutputs((*reinterpret_cast< const QList<QString>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 82: { bool _r = _t->blackballOutputs((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 83: { bool _r = _t->unblackballOutput((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 84: { QString _r = _t->getRing((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 85: { QString _r = _t->getRings((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 86: { bool _r = _t->setRing((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 87: _t->segregatePreForkOutputs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->segregationHeight((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 89: _t->keyReuseMitigation2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PendingTransaction* >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PendingTransaction* >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UnsignedTransaction* >(); break;
            }
            break;
        case 81:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Wallet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::updated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::refreshed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)(const QString & , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::moneySpent)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)(const QString & , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::moneyReceived)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)(const QString & , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::unconfirmedMoneyReceived)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)(quint64 , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::newBlock)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::historyModelChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::walletCreationHeightChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)(PendingTransaction * , QString , QString , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::transactionCreated)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Wallet::*_t)(ConnectionStatus ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wallet::connectionStatusChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Wallet *_t = static_cast<Wallet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getSeed(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getSeedLanguage(); break;
        case 2: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 3: *reinterpret_cast< NetworkType::Type*>(_v) = _t->nettype(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->currentSubaddressAccount(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->synchronized(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 7: *reinterpret_cast< TransactionHistory**>(_v) = _t->history(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->paymentId(); break;
        case 9: *reinterpret_cast< TransactionHistorySortFilterModel**>(_v) = _t->historyModel(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 11: *reinterpret_cast< AddressBookModel**>(_v) = _t->addressBookModel(); break;
        case 12: *reinterpret_cast< AddressBook**>(_v) = _t->addressBook(); break;
        case 13: *reinterpret_cast< SubaddressModel**>(_v) = _t->subaddressModel(); break;
        case 14: *reinterpret_cast< Subaddress**>(_v) = _t->subaddress(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->viewOnly(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->getSecretViewKey(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->getPublicViewKey(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->getSecretSpendKey(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->getPublicSpendKey(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->getDaemonLogPath(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->getWalletLogPath(); break;
        case 22: *reinterpret_cast< quint64*>(_v) = _t->getWalletCreationHeight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Wallet *_t = static_cast<Wallet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 8: _t->setPaymentId(*reinterpret_cast< QString*>(_v)); break;
        case 22: _t->setWalletCreationHeight(*reinterpret_cast< quint64*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_Wallet[] = {
        &NetworkType::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject Wallet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Wallet.data,
      qt_meta_data_Wallet,  qt_static_metacall, qt_meta_extradata_Wallet, nullptr}
};


const QMetaObject *Wallet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Wallet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Wallet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Wallet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 90)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 90;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 90)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 90;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 23;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Wallet::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Wallet::refreshed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Wallet::moneySpent(const QString & _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Wallet::moneyReceived(const QString & _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Wallet::unconfirmedMoneyReceived(const QString & _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Wallet::newBlock(quint64 _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Wallet::historyModelChanged()const
{
    QMetaObject::activate(const_cast< Wallet *>(this), &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Wallet::walletCreationHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Wallet::transactionCreated(PendingTransaction * _t1, QString _t2, QString _t3, quint32 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Wallet::connectionStatusChanged(ConnectionStatus _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< Wallet *>(this), &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
