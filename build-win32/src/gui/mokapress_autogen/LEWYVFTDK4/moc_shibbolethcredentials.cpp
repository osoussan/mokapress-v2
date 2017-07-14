/****************************************************************************
** Meta object code from reading C++ file 'shibbolethcredentials.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/creds/shibbolethcredentials.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shibbolethcredentials.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ShibbolethCredentials_t {
    QByteArrayData data[15];
    char stringdata[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ShibbolethCredentials_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ShibbolethCredentials_t qt_meta_stringdata_OCC__ShibbolethCredentials = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::ShibbolethCredentials"
QT_MOC_LITERAL(1, 27, 9), // "newCookie"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "QNetworkCookie"
QT_MOC_LITERAL(4, 53, 6), // "cookie"
QT_MOC_LITERAL(5, 60, 26), // "onShibbolethCookieReceived"
QT_MOC_LITERAL(6, 87, 19), // "slotBrowserRejected"
QT_MOC_LITERAL(7, 107, 15), // "slotReadJobDone"
QT_MOC_LITERAL(8, 123, 15), // "QKeychain::Job*"
QT_MOC_LITERAL(9, 139, 17), // "slotReplyFinished"
QT_MOC_LITERAL(10, 157, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 172, 15), // "slotUserFetched"
QT_MOC_LITERAL(12, 188, 4), // "user"
QT_MOC_LITERAL(13, 193, 13), // "slotFetchUser"
QT_MOC_LITERAL(14, 207, 19) // "slotFetchUserHelper"

    },
    "OCC::ShibbolethCredentials\0newCookie\0"
    "\0QNetworkCookie\0cookie\0"
    "onShibbolethCookieReceived\0"
    "slotBrowserRejected\0slotReadJobDone\0"
    "QKeychain::Job*\0slotReplyFinished\0"
    "QNetworkReply*\0slotUserFetched\0user\0"
    "slotFetchUser\0slotFetchUserHelper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ShibbolethCredentials[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x08 /* Private */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      11,    1,   67,    2, 0x08 /* Private */,
      13,    0,   70,    2, 0x08 /* Private */,
      14,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::ShibbolethCredentials::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShibbolethCredentials *_t = static_cast<ShibbolethCredentials *>(_o);
        switch (_id) {
        case 0: _t->newCookie((*reinterpret_cast< const QNetworkCookie(*)>(_a[1]))); break;
        case 1: _t->onShibbolethCookieReceived((*reinterpret_cast< const QNetworkCookie(*)>(_a[1]))); break;
        case 2: _t->slotBrowserRejected(); break;
        case 3: _t->slotReadJobDone((*reinterpret_cast< QKeychain::Job*(*)>(_a[1]))); break;
        case 4: _t->slotReplyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->slotUserFetched((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotFetchUser(); break;
        case 7: _t->slotFetchUserHelper(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookie >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookie >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ShibbolethCredentials::*_t)(const QNetworkCookie & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShibbolethCredentials::newCookie)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::ShibbolethCredentials::staticMetaObject = {
    { &AbstractCredentials::staticMetaObject, qt_meta_stringdata_OCC__ShibbolethCredentials.data,
      qt_meta_data_OCC__ShibbolethCredentials,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ShibbolethCredentials::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShibbolethCredentials::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ShibbolethCredentials.stringdata))
        return static_cast<void*>(const_cast< ShibbolethCredentials*>(this));
    return AbstractCredentials::qt_metacast(_clname);
}

int OCC::ShibbolethCredentials::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCredentials::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OCC::ShibbolethCredentials::newCookie(const QNetworkCookie & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
