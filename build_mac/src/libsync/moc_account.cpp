/****************************************************************************
** Meta object code from reading C++ file 'account.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/libsync/account.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'account.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__Account_t {
    QByteArrayData data[23];
    char stringdata[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Account_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Account_t qt_meta_stringdata_OCC__Account = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OCC::Account"
QT_MOC_LITERAL(1, 13, 25), // "propagatorNetworkActivity"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "invalidCredentials"
QT_MOC_LITERAL(4, 59, 18), // "credentialsFetched"
QT_MOC_LITERAL(5, 78, 20), // "AbstractCredentials*"
QT_MOC_LITERAL(6, 99, 11), // "credentials"
QT_MOC_LITERAL(7, 111, 16), // "credentialsAsked"
QT_MOC_LITERAL(8, 128, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(9, 156, 13), // "QNetworkProxy"
QT_MOC_LITERAL(10, 170, 15), // "QAuthenticator*"
QT_MOC_LITERAL(11, 186, 17), // "wantsAccountSaved"
QT_MOC_LITERAL(12, 204, 8), // "Account*"
QT_MOC_LITERAL(13, 213, 3), // "acc"
QT_MOC_LITERAL(14, 217, 20), // "serverVersionChanged"
QT_MOC_LITERAL(15, 238, 7), // "account"
QT_MOC_LITERAL(16, 246, 10), // "newVersion"
QT_MOC_LITERAL(17, 257, 10), // "oldVersion"
QT_MOC_LITERAL(18, 268, 19), // "slotHandleSslErrors"
QT_MOC_LITERAL(19, 288, 14), // "QNetworkReply*"
QT_MOC_LITERAL(20, 303, 16), // "QList<QSslError>"
QT_MOC_LITERAL(21, 320, 22), // "slotCredentialsFetched"
QT_MOC_LITERAL(22, 343, 20) // "slotCredentialsAsked"

    },
    "OCC::Account\0propagatorNetworkActivity\0"
    "\0invalidCredentials\0credentialsFetched\0"
    "AbstractCredentials*\0credentials\0"
    "credentialsAsked\0proxyAuthenticationRequired\0"
    "QNetworkProxy\0QAuthenticator*\0"
    "wantsAccountSaved\0Account*\0acc\0"
    "serverVersionChanged\0account\0newVersion\0"
    "oldVersion\0slotHandleSslErrors\0"
    "QNetworkReply*\0QList<QSslError>\0"
    "slotCredentialsFetched\0slotCredentialsAsked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Account[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    1,   66,    2, 0x06 /* Public */,
       7,    1,   69,    2, 0x06 /* Public */,
       8,    2,   72,    2, 0x06 /* Public */,
      11,    1,   77,    2, 0x06 /* Public */,
      14,    3,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    2,   87,    2, 0x09 /* Protected */,
      21,    0,   92,    2, 0x09 /* Protected */,
      22,    0,   93,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 10,    2,    2,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString, QMetaType::QString,   15,   16,   17,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 20,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::Account::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Account *_t = static_cast<Account *>(_o);
        switch (_id) {
        case 0: _t->propagatorNetworkActivity(); break;
        case 1: _t->invalidCredentials(); break;
        case 2: _t->credentialsFetched((*reinterpret_cast< AbstractCredentials*(*)>(_a[1]))); break;
        case 3: _t->credentialsAsked((*reinterpret_cast< AbstractCredentials*(*)>(_a[1]))); break;
        case 4: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 5: _t->wantsAccountSaved((*reinterpret_cast< Account*(*)>(_a[1]))); break;
        case 6: _t->serverVersionChanged((*reinterpret_cast< Account*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->slotHandleSslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QList<QSslError>(*)>(_a[2]))); break;
        case 8: _t->slotCredentialsFetched(); break;
        case 9: _t->slotCredentialsAsked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Account* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Account* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Account::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Account::propagatorNetworkActivity)) {
                *result = 0;
            }
        }
        {
            typedef void (Account::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Account::invalidCredentials)) {
                *result = 1;
            }
        }
        {
            typedef void (Account::*_t)(AbstractCredentials * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Account::credentialsFetched)) {
                *result = 2;
            }
        }
        {
            typedef void (Account::*_t)(AbstractCredentials * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Account::credentialsAsked)) {
                *result = 3;
            }
        }
        {
            typedef void (Account::*_t)(const QNetworkProxy & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Account::proxyAuthenticationRequired)) {
                *result = 4;
            }
        }
        {
            typedef void (Account::*_t)(Account * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Account::wantsAccountSaved)) {
                *result = 5;
            }
        }
        {
            typedef void (Account::*_t)(Account * , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Account::serverVersionChanged)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject OCC::Account::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__Account.data,
      qt_meta_data_OCC__Account,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::Account::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Account::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__Account.stringdata))
        return static_cast<void*>(const_cast< Account*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::Account::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void OCC::Account::propagatorNetworkActivity()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::Account::invalidCredentials()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void OCC::Account::credentialsFetched(AbstractCredentials * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::Account::credentialsAsked(AbstractCredentials * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::Account::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::Account::wantsAccountSaved(Account * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::Account::serverVersionChanged(Account * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
