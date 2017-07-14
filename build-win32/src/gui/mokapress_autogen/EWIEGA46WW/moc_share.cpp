/****************************************************************************
** Meta object code from reading C++ file 'share.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/share.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'share.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__Share_t {
    QByteArrayData data[12];
    char stringdata[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Share_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Share_t qt_meta_stringdata_OCC__Share = {
    {
QT_MOC_LITERAL(0, 0, 10), // "OCC::Share"
QT_MOC_LITERAL(1, 11, 14), // "permissionsSet"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "shareDeleted"
QT_MOC_LITERAL(4, 40, 11), // "serverError"
QT_MOC_LITERAL(5, 52, 4), // "code"
QT_MOC_LITERAL(6, 57, 7), // "message"
QT_MOC_LITERAL(7, 65, 12), // "slotOcsError"
QT_MOC_LITERAL(8, 78, 10), // "statusCode"
QT_MOC_LITERAL(9, 89, 11), // "slotDeleted"
QT_MOC_LITERAL(10, 101, 18), // "slotPermissionsSet"
QT_MOC_LITERAL(11, 120, 5) // "value"

    },
    "OCC::Share\0permissionsSet\0\0shareDeleted\0"
    "serverError\0code\0message\0slotOcsError\0"
    "statusCode\0slotDeleted\0slotPermissionsSet\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Share[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    2,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   51,    2, 0x09 /* Protected */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    2,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::QVariant,    2,   11,

       0        // eod
};

void OCC::Share::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Share *_t = static_cast<Share *>(_o);
        switch (_id) {
        case 0: _t->permissionsSet(); break;
        case 1: _t->shareDeleted(); break;
        case 2: _t->serverError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->slotOcsError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->slotDeleted(); break;
        case 5: _t->slotPermissionsSet((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Share::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Share::permissionsSet)) {
                *result = 0;
            }
        }
        {
            typedef void (Share::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Share::shareDeleted)) {
                *result = 1;
            }
        }
        {
            typedef void (Share::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Share::serverError)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject OCC::Share::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__Share.data,
      qt_meta_data_OCC__Share,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::Share::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Share::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__Share.stringdata))
        return static_cast<void*>(const_cast< Share*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::Share::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OCC::Share::permissionsSet()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::Share::shareDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void OCC::Share::serverError(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_OCC__LinkShare_t {
    QByteArrayData data[14];
    char stringdata[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__LinkShare_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__LinkShare_t qt_meta_stringdata_OCC__LinkShare = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OCC::LinkShare"
QT_MOC_LITERAL(1, 15, 13), // "expireDateSet"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "publicUploadSet"
QT_MOC_LITERAL(4, 46, 11), // "passwordSet"
QT_MOC_LITERAL(5, 58, 16), // "passwordSetError"
QT_MOC_LITERAL(6, 75, 10), // "statusCode"
QT_MOC_LITERAL(7, 86, 7), // "message"
QT_MOC_LITERAL(8, 94, 15), // "slotPasswordSet"
QT_MOC_LITERAL(9, 110, 5), // "value"
QT_MOC_LITERAL(10, 116, 19), // "slotPublicUploadSet"
QT_MOC_LITERAL(11, 136, 17), // "slotExpireDateSet"
QT_MOC_LITERAL(12, 154, 5), // "reply"
QT_MOC_LITERAL(13, 160, 20) // "slotSetPasswordError"

    },
    "OCC::LinkShare\0expireDateSet\0\0"
    "publicUploadSet\0passwordSet\0"
    "passwordSetError\0statusCode\0message\0"
    "slotPasswordSet\0value\0slotPublicUploadSet\0"
    "slotExpireDateSet\0reply\0slotSetPasswordError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__LinkShare[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    2,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   62,    2, 0x08 /* Private */,
      10,    2,   67,    2, 0x08 /* Private */,
      11,    2,   72,    2, 0x08 /* Private */,
      13,    2,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::QVariant,    2,    9,
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::QVariant,    2,    9,
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::QVariant,   12,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    7,

       0        // eod
};

void OCC::LinkShare::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinkShare *_t = static_cast<LinkShare *>(_o);
        switch (_id) {
        case 0: _t->expireDateSet(); break;
        case 1: _t->publicUploadSet(); break;
        case 2: _t->passwordSet(); break;
        case 3: _t->passwordSetError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->slotPasswordSet((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 5: _t->slotPublicUploadSet((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 6: _t->slotExpireDateSet((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 7: _t->slotSetPasswordError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LinkShare::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkShare::expireDateSet)) {
                *result = 0;
            }
        }
        {
            typedef void (LinkShare::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkShare::publicUploadSet)) {
                *result = 1;
            }
        }
        {
            typedef void (LinkShare::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkShare::passwordSet)) {
                *result = 2;
            }
        }
        {
            typedef void (LinkShare::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LinkShare::passwordSetError)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject OCC::LinkShare::staticMetaObject = {
    { &Share::staticMetaObject, qt_meta_stringdata_OCC__LinkShare.data,
      qt_meta_data_OCC__LinkShare,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::LinkShare::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::LinkShare::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__LinkShare.stringdata))
        return static_cast<void*>(const_cast< LinkShare*>(this));
    return Share::qt_metacast(_clname);
}

int OCC::LinkShare::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Share::qt_metacall(_c, _id, _a);
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
void OCC::LinkShare::expireDateSet()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::LinkShare::publicUploadSet()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void OCC::LinkShare::passwordSet()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void OCC::LinkShare::passwordSetError(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_OCC__ShareManager_t {
    QByteArrayData data[21];
    char stringdata[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ShareManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ShareManager_t qt_meta_stringdata_OCC__ShareManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::ShareManager"
QT_MOC_LITERAL(1, 18, 12), // "shareCreated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "QSharedPointer<Share>"
QT_MOC_LITERAL(4, 54, 5), // "share"
QT_MOC_LITERAL(5, 60, 16), // "linkShareCreated"
QT_MOC_LITERAL(6, 77, 25), // "QSharedPointer<LinkShare>"
QT_MOC_LITERAL(7, 103, 13), // "sharesFetched"
QT_MOC_LITERAL(8, 117, 29), // "QList<QSharedPointer<Share> >"
QT_MOC_LITERAL(9, 147, 6), // "shares"
QT_MOC_LITERAL(10, 154, 11), // "serverError"
QT_MOC_LITERAL(11, 166, 4), // "code"
QT_MOC_LITERAL(12, 171, 7), // "message"
QT_MOC_LITERAL(13, 179, 25), // "linkShareRequiresPassword"
QT_MOC_LITERAL(14, 205, 17), // "slotSharesFetched"
QT_MOC_LITERAL(15, 223, 5), // "reply"
QT_MOC_LITERAL(16, 229, 20), // "slotLinkShareCreated"
QT_MOC_LITERAL(17, 250, 16), // "slotShareCreated"
QT_MOC_LITERAL(18, 267, 12), // "slotOcsError"
QT_MOC_LITERAL(19, 280, 10), // "statusCode"
QT_MOC_LITERAL(20, 291, 15) // "slotCreateShare"

    },
    "OCC::ShareManager\0shareCreated\0\0"
    "QSharedPointer<Share>\0share\0"
    "linkShareCreated\0QSharedPointer<LinkShare>\0"
    "sharesFetched\0QList<QSharedPointer<Share> >\0"
    "shares\0serverError\0code\0message\0"
    "linkShareRequiresPassword\0slotSharesFetched\0"
    "reply\0slotLinkShareCreated\0slotShareCreated\0"
    "slotOcsError\0statusCode\0slotCreateShare"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ShareManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,
      10,    2,   73,    2, 0x06 /* Public */,
      13,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   81,    2, 0x08 /* Private */,
      16,    1,   84,    2, 0x08 /* Private */,
      17,    1,   87,    2, 0x08 /* Private */,
      18,    2,   90,    2, 0x08 /* Private */,
      20,    1,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,   15,
    QMetaType::Void, QMetaType::QVariantMap,   15,
    QMetaType::Void, QMetaType::QVariantMap,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   19,   12,
    QMetaType::Void, QMetaType::QVariantMap,   15,

       0        // eod
};

void OCC::ShareManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShareManager *_t = static_cast<ShareManager *>(_o);
        switch (_id) {
        case 0: _t->shareCreated((*reinterpret_cast< const QSharedPointer<Share>(*)>(_a[1]))); break;
        case 1: _t->linkShareCreated((*reinterpret_cast< const QSharedPointer<LinkShare>(*)>(_a[1]))); break;
        case 2: _t->sharesFetched((*reinterpret_cast< const QList<QSharedPointer<Share> >(*)>(_a[1]))); break;
        case 3: _t->serverError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->linkShareRequiresPassword((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotSharesFetched((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 6: _t->slotLinkShareCreated((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 7: _t->slotShareCreated((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 8: _t->slotOcsError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->slotCreateShare((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<Share> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<LinkShare> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSharedPointer<Share> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ShareManager::*_t)(const QSharedPointer<Share> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShareManager::shareCreated)) {
                *result = 0;
            }
        }
        {
            typedef void (ShareManager::*_t)(const QSharedPointer<LinkShare> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShareManager::linkShareCreated)) {
                *result = 1;
            }
        }
        {
            typedef void (ShareManager::*_t)(const QList<QSharedPointer<Share>> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShareManager::sharesFetched)) {
                *result = 2;
            }
        }
        {
            typedef void (ShareManager::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShareManager::serverError)) {
                *result = 3;
            }
        }
        {
            typedef void (ShareManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShareManager::linkShareRequiresPassword)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject OCC::ShareManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__ShareManager.data,
      qt_meta_data_OCC__ShareManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ShareManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShareManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ShareManager.stringdata))
        return static_cast<void*>(const_cast< ShareManager*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::ShareManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::ShareManager::shareCreated(const QSharedPointer<Share> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::ShareManager::linkShareCreated(const QSharedPointer<LinkShare> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::ShareManager::sharesFetched(const QList<QSharedPointer<Share>> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::ShareManager::serverError(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::ShareManager::linkShareRequiresPassword(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
