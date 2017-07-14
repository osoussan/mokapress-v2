/****************************************************************************
** Meta object code from reading C++ file 'accountmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/accountmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__AccountManager_t {
    QByteArrayData data[10];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__AccountManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__AccountManager_t qt_meta_stringdata_OCC__AccountManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::AccountManager"
QT_MOC_LITERAL(1, 20, 12), // "accountAdded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "AccountState*"
QT_MOC_LITERAL(4, 48, 7), // "account"
QT_MOC_LITERAL(5, 56, 14), // "accountRemoved"
QT_MOC_LITERAL(6, 71, 11), // "saveAccount"
QT_MOC_LITERAL(7, 83, 8), // "Account*"
QT_MOC_LITERAL(8, 92, 1), // "a"
QT_MOC_LITERAL(9, 94, 16) // "saveAccountState"

    },
    "OCC::AccountManager\0accountAdded\0\0"
    "AccountState*\0account\0accountRemoved\0"
    "saveAccount\0Account*\0a\0saveAccountState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__AccountManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       9,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3,    8,

       0        // eod
};

void OCC::AccountManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccountManager *_t = static_cast<AccountManager *>(_o);
        switch (_id) {
        case 0: _t->accountAdded((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        case 1: _t->accountRemoved((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        case 2: _t->saveAccount((*reinterpret_cast< Account*(*)>(_a[1]))); break;
        case 3: _t->saveAccountState((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountState* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountState* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Account* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountState* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AccountManager::*_t)(AccountState * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountManager::accountAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (AccountManager::*_t)(AccountState * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountManager::accountRemoved)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::AccountManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__AccountManager.data,
      qt_meta_data_OCC__AccountManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::AccountManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__AccountManager.stringdata))
        return static_cast<void*>(const_cast< AccountManager*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::AccountManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OCC::AccountManager::accountAdded(AccountState * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::AccountManager::accountRemoved(AccountState * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
