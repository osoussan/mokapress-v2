/****************************************************************************
** Meta object code from reading C++ file 'connectionvalidator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/libsync/connectionvalidator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionvalidator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ConnectionValidator_t {
    QByteArrayData data[22];
    char stringdata[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ConnectionValidator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ConnectionValidator_t qt_meta_stringdata_OCC__ConnectionValidator = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::ConnectionValidator"
QT_MOC_LITERAL(1, 25, 16), // "connectionResult"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 27), // "ConnectionValidator::Status"
QT_MOC_LITERAL(4, 71, 6), // "status"
QT_MOC_LITERAL(5, 78, 6), // "errors"
QT_MOC_LITERAL(6, 85, 18), // "checkServerAndAuth"
QT_MOC_LITERAL(7, 104, 21), // "systemProxyLookupDone"
QT_MOC_LITERAL(8, 126, 13), // "QNetworkProxy"
QT_MOC_LITERAL(9, 140, 5), // "proxy"
QT_MOC_LITERAL(10, 146, 19), // "checkAuthentication"
QT_MOC_LITERAL(11, 166, 22), // "slotCheckServerAndAuth"
QT_MOC_LITERAL(12, 189, 15), // "slotStatusFound"
QT_MOC_LITERAL(13, 205, 3), // "url"
QT_MOC_LITERAL(14, 209, 4), // "info"
QT_MOC_LITERAL(15, 214, 17), // "slotNoStatusFound"
QT_MOC_LITERAL(16, 232, 14), // "QNetworkReply*"
QT_MOC_LITERAL(17, 247, 5), // "reply"
QT_MOC_LITERAL(18, 253, 14), // "slotJobTimeout"
QT_MOC_LITERAL(19, 268, 14), // "slotAuthFailed"
QT_MOC_LITERAL(20, 283, 15), // "slotAuthSuccess"
QT_MOC_LITERAL(21, 299, 24) // "slotCapabilitiesRecieved"

    },
    "OCC::ConnectionValidator\0connectionResult\0"
    "\0ConnectionValidator::Status\0status\0"
    "errors\0checkServerAndAuth\0"
    "systemProxyLookupDone\0QNetworkProxy\0"
    "proxy\0checkAuthentication\0"
    "slotCheckServerAndAuth\0slotStatusFound\0"
    "url\0info\0slotNoStatusFound\0QNetworkReply*\0"
    "reply\0slotJobTimeout\0slotAuthFailed\0"
    "slotAuthSuccess\0slotCapabilitiesRecieved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ConnectionValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   74,    2, 0x0a /* Public */,
       7,    1,   75,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x09 /* Protected */,
      12,    2,   80,    2, 0x09 /* Protected */,
      15,    1,   85,    2, 0x09 /* Protected */,
      18,    1,   88,    2, 0x09 /* Protected */,
      19,    1,   91,    2, 0x09 /* Protected */,
      20,    0,   94,    2, 0x09 /* Protected */,
      21,    1,   95,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QVariantMap,   13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QUrl,   13,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    2,

       0        // eod
};

void OCC::ConnectionValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectionValidator *_t = static_cast<ConnectionValidator *>(_o);
        switch (_id) {
        case 0: _t->connectionResult((*reinterpret_cast< ConnectionValidator::Status(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 1: _t->checkServerAndAuth(); break;
        case 2: _t->systemProxyLookupDone((*reinterpret_cast< const QNetworkProxy(*)>(_a[1]))); break;
        case 3: _t->checkAuthentication(); break;
        case 4: _t->slotCheckServerAndAuth(); break;
        case 5: _t->slotStatusFound((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 6: _t->slotNoStatusFound((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->slotJobTimeout((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->slotAuthFailed((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->slotAuthSuccess(); break;
        case 10: _t->slotCapabilitiesRecieved((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ConnectionValidator::*_t)(ConnectionValidator::Status , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionValidator::connectionResult)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::ConnectionValidator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__ConnectionValidator.data,
      qt_meta_data_OCC__ConnectionValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ConnectionValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ConnectionValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ConnectionValidator.stringdata))
        return static_cast<void*>(const_cast< ConnectionValidator*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::ConnectionValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OCC::ConnectionValidator::connectionResult(ConnectionValidator::Status _t1, QStringList _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
