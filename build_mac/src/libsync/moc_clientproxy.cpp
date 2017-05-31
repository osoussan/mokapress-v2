/****************************************************************************
** Meta object code from reading C++ file 'clientproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/libsync/clientproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ClientProxy_t {
    QByteArrayData data[3];
    char stringdata[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ClientProxy_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ClientProxy_t qt_meta_stringdata_OCC__ClientProxy = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::ClientProxy"
QT_MOC_LITERAL(1, 17, 22), // "setupQtProxyFromConfig"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "OCC::ClientProxy\0setupQtProxyFromConfig\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ClientProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::ClientProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientProxy *_t = static_cast<ClientProxy *>(_o);
        switch (_id) {
        case 0: _t->setupQtProxyFromConfig(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OCC::ClientProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__ClientProxy.data,
      qt_meta_data_OCC__ClientProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ClientProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ClientProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ClientProxy.stringdata))
        return static_cast<void*>(const_cast< ClientProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::ClientProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
struct qt_meta_stringdata_OCC__SystemProxyRunnable_t {
    QByteArrayData data[5];
    char stringdata[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SystemProxyRunnable_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SystemProxyRunnable_t qt_meta_stringdata_OCC__SystemProxyRunnable = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::SystemProxyRunnable"
QT_MOC_LITERAL(1, 25, 19), // "systemProxyLookedUp"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 13), // "QNetworkProxy"
QT_MOC_LITERAL(4, 60, 3) // "url"

    },
    "OCC::SystemProxyRunnable\0systemProxyLookedUp\0"
    "\0QNetworkProxy\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SystemProxyRunnable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void OCC::SystemProxyRunnable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SystemProxyRunnable *_t = static_cast<SystemProxyRunnable *>(_o);
        switch (_id) {
        case 0: _t->systemProxyLookedUp((*reinterpret_cast< const QNetworkProxy(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SystemProxyRunnable::*_t)(const QNetworkProxy & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SystemProxyRunnable::systemProxyLookedUp)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::SystemProxyRunnable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__SystemProxyRunnable.data,
      qt_meta_data_OCC__SystemProxyRunnable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::SystemProxyRunnable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SystemProxyRunnable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SystemProxyRunnable.stringdata))
        return static_cast<void*>(const_cast< SystemProxyRunnable*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< SystemProxyRunnable*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::SystemProxyRunnable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void OCC::SystemProxyRunnable::systemProxyLookedUp(const QNetworkProxy & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
