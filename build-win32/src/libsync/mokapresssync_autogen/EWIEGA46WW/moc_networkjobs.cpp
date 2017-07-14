/****************************************************************************
** Meta object code from reading C++ file 'networkjobs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/libsync/networkjobs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkjobs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__EntityExistsJob_t {
    QByteArrayData data[5];
    char stringdata[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__EntityExistsJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__EntityExistsJob_t qt_meta_stringdata_OCC__EntityExistsJob = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OCC::EntityExistsJob"
QT_MOC_LITERAL(1, 21, 6), // "exists"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 44, 8) // "finished"

    },
    "OCC::EntityExistsJob\0exists\0\0"
    "QNetworkReply*\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__EntityExistsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::EntityExistsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntityExistsJob *_t = static_cast<EntityExistsJob *>(_o);
        switch (_id) {
        case 0: _t->exists((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (EntityExistsJob::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntityExistsJob::exists)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::EntityExistsJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__EntityExistsJob.data,
      qt_meta_data_OCC__EntityExistsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::EntityExistsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::EntityExistsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__EntityExistsJob.stringdata))
        return static_cast<void*>(const_cast< EntityExistsJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::EntityExistsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::EntityExistsJob::exists(QNetworkReply * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__LsColXMLParser_t {
    QByteArrayData data[12];
    char stringdata[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__LsColXMLParser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__LsColXMLParser_t qt_meta_stringdata_OCC__LsColXMLParser = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::LsColXMLParser"
QT_MOC_LITERAL(1, 20, 26), // "directoryListingSubfolders"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "items"
QT_MOC_LITERAL(4, 54, 24), // "directoryListingIterated"
QT_MOC_LITERAL(5, 79, 4), // "name"
QT_MOC_LITERAL(6, 84, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(7, 106, 10), // "properties"
QT_MOC_LITERAL(8, 117, 17), // "finishedWithError"
QT_MOC_LITERAL(9, 135, 14), // "QNetworkReply*"
QT_MOC_LITERAL(10, 150, 5), // "reply"
QT_MOC_LITERAL(11, 156, 20) // "finishedWithoutError"

    },
    "OCC::LsColXMLParser\0directoryListingSubfolders\0"
    "\0items\0directoryListingIterated\0name\0"
    "QMap<QString,QString>\0properties\0"
    "finishedWithError\0QNetworkReply*\0reply\0"
    "finishedWithoutError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__LsColXMLParser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,
       8,    1,   42,    2, 0x06 /* Public */,
      11,    0,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void OCC::LsColXMLParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LsColXMLParser *_t = static_cast<LsColXMLParser *>(_o);
        switch (_id) {
        case 0: _t->directoryListingSubfolders((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->directoryListingIterated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2]))); break;
        case 2: _t->finishedWithError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->finishedWithoutError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            typedef void (LsColXMLParser::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LsColXMLParser::directoryListingSubfolders)) {
                *result = 0;
            }
        }
        {
            typedef void (LsColXMLParser::*_t)(const QString & , const QMap<QString,QString> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LsColXMLParser::directoryListingIterated)) {
                *result = 1;
            }
        }
        {
            typedef void (LsColXMLParser::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LsColXMLParser::finishedWithError)) {
                *result = 2;
            }
        }
        {
            typedef void (LsColXMLParser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LsColXMLParser::finishedWithoutError)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject OCC::LsColXMLParser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__LsColXMLParser.data,
      qt_meta_data_OCC__LsColXMLParser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::LsColXMLParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::LsColXMLParser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__LsColXMLParser.stringdata))
        return static_cast<void*>(const_cast< LsColXMLParser*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::LsColXMLParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::LsColXMLParser::directoryListingSubfolders(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::LsColXMLParser::directoryListingIterated(const QString & _t1, const QMap<QString,QString> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::LsColXMLParser::finishedWithError(QNetworkReply * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::LsColXMLParser::finishedWithoutError()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
struct qt_meta_stringdata_OCC__LsColJob_t {
    QByteArrayData data[13];
    char stringdata[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__LsColJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__LsColJob_t qt_meta_stringdata_OCC__LsColJob = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OCC::LsColJob"
QT_MOC_LITERAL(1, 14, 26), // "directoryListingSubfolders"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "items"
QT_MOC_LITERAL(4, 48, 24), // "directoryListingIterated"
QT_MOC_LITERAL(5, 73, 4), // "name"
QT_MOC_LITERAL(6, 78, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(7, 100, 10), // "properties"
QT_MOC_LITERAL(8, 111, 17), // "finishedWithError"
QT_MOC_LITERAL(9, 129, 14), // "QNetworkReply*"
QT_MOC_LITERAL(10, 144, 5), // "reply"
QT_MOC_LITERAL(11, 150, 20), // "finishedWithoutError"
QT_MOC_LITERAL(12, 171, 8) // "finished"

    },
    "OCC::LsColJob\0directoryListingSubfolders\0"
    "\0items\0directoryListingIterated\0name\0"
    "QMap<QString,QString>\0properties\0"
    "finishedWithError\0QNetworkReply*\0reply\0"
    "finishedWithoutError\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__LsColJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,
       8,    1,   47,    2, 0x06 /* Public */,
      11,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::LsColJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LsColJob *_t = static_cast<LsColJob *>(_o);
        switch (_id) {
        case 0: _t->directoryListingSubfolders((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->directoryListingIterated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[2]))); break;
        case 2: _t->finishedWithError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->finishedWithoutError(); break;
        case 4: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            typedef void (LsColJob::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LsColJob::directoryListingSubfolders)) {
                *result = 0;
            }
        }
        {
            typedef void (LsColJob::*_t)(const QString & , const QMap<QString,QString> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LsColJob::directoryListingIterated)) {
                *result = 1;
            }
        }
        {
            typedef void (LsColJob::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LsColJob::finishedWithError)) {
                *result = 2;
            }
        }
        {
            typedef void (LsColJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LsColJob::finishedWithoutError)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject OCC::LsColJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__LsColJob.data,
      qt_meta_data_OCC__LsColJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::LsColJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::LsColJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__LsColJob.stringdata))
        return static_cast<void*>(const_cast< LsColJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::LsColJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OCC::LsColJob::directoryListingSubfolders(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::LsColJob::directoryListingIterated(const QString & _t1, const QMap<QString,QString> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::LsColJob::finishedWithError(QNetworkReply * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::LsColJob::finishedWithoutError()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
struct qt_meta_stringdata_OCC__PropfindJob_t {
    QByteArrayData data[8];
    char stringdata[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PropfindJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PropfindJob_t qt_meta_stringdata_OCC__PropfindJob = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::PropfindJob"
QT_MOC_LITERAL(1, 17, 6), // "result"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "values"
QT_MOC_LITERAL(4, 32, 17), // "finishedWithError"
QT_MOC_LITERAL(5, 50, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 65, 5), // "reply"
QT_MOC_LITERAL(7, 71, 8) // "finished"

    },
    "OCC::PropfindJob\0result\0\0values\0"
    "finishedWithError\0QNetworkReply*\0reply\0"
    "finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PropfindJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       4,    0,   40,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::PropfindJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropfindJob *_t = static_cast<PropfindJob *>(_o);
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 1: _t->finishedWithError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->finishedWithError(); break;
        case 3: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            typedef void (PropfindJob::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropfindJob::result)) {
                *result = 0;
            }
        }
        {
            typedef void (PropfindJob::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropfindJob::finishedWithError)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::PropfindJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__PropfindJob.data,
      qt_meta_data_OCC__PropfindJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PropfindJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropfindJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PropfindJob.stringdata))
        return static_cast<void*>(const_cast< PropfindJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::PropfindJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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
void OCC::PropfindJob::result(const QVariantMap & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::PropfindJob::finishedWithError(QNetworkReply * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_OCC__ProppatchJob_t {
    QByteArrayData data[5];
    char stringdata[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ProppatchJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ProppatchJob_t qt_meta_stringdata_OCC__ProppatchJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OCC::ProppatchJob"
QT_MOC_LITERAL(1, 18, 7), // "success"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "finishedWithError"
QT_MOC_LITERAL(4, 45, 8) // "finished"

    },
    "OCC::ProppatchJob\0success\0\0finishedWithError\0"
    "finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ProppatchJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::ProppatchJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProppatchJob *_t = static_cast<ProppatchJob *>(_o);
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->finishedWithError(); break;
        case 2: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProppatchJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProppatchJob::success)) {
                *result = 0;
            }
        }
        {
            typedef void (ProppatchJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProppatchJob::finishedWithError)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::ProppatchJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__ProppatchJob.data,
      qt_meta_data_OCC__ProppatchJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ProppatchJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ProppatchJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ProppatchJob.stringdata))
        return static_cast<void*>(const_cast< ProppatchJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::ProppatchJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OCC::ProppatchJob::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::ProppatchJob::finishedWithError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_OCC__MkColJob_t {
    QByteArrayData data[4];
    char stringdata[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__MkColJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__MkColJob_t qt_meta_stringdata_OCC__MkColJob = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OCC::MkColJob"
QT_MOC_LITERAL(1, 14, 8), // "finished"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 27) // "QNetworkReply::NetworkError"

    },
    "OCC::MkColJob\0finished\0\0"
    "QNetworkReply::NetworkError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__MkColJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       1,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::MkColJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MkColJob *_t = static_cast<MkColJob *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 1: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MkColJob::*_t)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MkColJob::finished)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::MkColJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__MkColJob.data,
      qt_meta_data_OCC__MkColJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::MkColJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::MkColJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__MkColJob.stringdata))
        return static_cast<void*>(const_cast< MkColJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::MkColJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::MkColJob::finished(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__CheckServerJob_t {
    QByteArrayData data[13];
    char stringdata[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__CheckServerJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__CheckServerJob_t qt_meta_stringdata_OCC__CheckServerJob = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::CheckServerJob"
QT_MOC_LITERAL(1, 20, 13), // "instanceFound"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "url"
QT_MOC_LITERAL(4, 39, 4), // "info"
QT_MOC_LITERAL(5, 44, 16), // "instanceNotFound"
QT_MOC_LITERAL(6, 61, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 76, 5), // "reply"
QT_MOC_LITERAL(8, 82, 7), // "timeout"
QT_MOC_LITERAL(9, 90, 8), // "finished"
QT_MOC_LITERAL(10, 99, 11), // "slotTimeout"
QT_MOC_LITERAL(11, 111, 19), // "metaDataChangedSlot"
QT_MOC_LITERAL(12, 131, 13) // "encryptedSlot"

    },
    "OCC::CheckServerJob\0instanceFound\0\0"
    "url\0info\0instanceNotFound\0QNetworkReply*\0"
    "reply\0timeout\0finished\0slotTimeout\0"
    "metaDataChangedSlot\0encryptedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__CheckServerJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    1,   54,    2, 0x06 /* Public */,
       8,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   60,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,
      11,    0,   62,    2, 0x08 /* Private */,
      12,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QVariantMap,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::CheckServerJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CheckServerJob *_t = static_cast<CheckServerJob *>(_o);
        switch (_id) {
        case 0: _t->instanceFound((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 1: _t->instanceNotFound((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->timeout((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->slotTimeout(); break;
        case 5: _t->metaDataChangedSlot(); break;
        case 6: _t->encryptedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            typedef void (CheckServerJob::*_t)(const QUrl & , const QVariantMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckServerJob::instanceFound)) {
                *result = 0;
            }
        }
        {
            typedef void (CheckServerJob::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckServerJob::instanceNotFound)) {
                *result = 1;
            }
        }
        {
            typedef void (CheckServerJob::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckServerJob::timeout)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject OCC::CheckServerJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__CheckServerJob.data,
      qt_meta_data_OCC__CheckServerJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::CheckServerJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CheckServerJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__CheckServerJob.stringdata))
        return static_cast<void*>(const_cast< CheckServerJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::CheckServerJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OCC::CheckServerJob::instanceFound(const QUrl & _t1, const QVariantMap & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::CheckServerJob::instanceNotFound(QNetworkReply * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::CheckServerJob::timeout(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_OCC__RequestEtagJob_t {
    QByteArrayData data[5];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__RequestEtagJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__RequestEtagJob_t qt_meta_stringdata_OCC__RequestEtagJob = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::RequestEtagJob"
QT_MOC_LITERAL(1, 20, 13), // "etagRetreived"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "etag"
QT_MOC_LITERAL(4, 40, 8) // "finished"

    },
    "OCC::RequestEtagJob\0etagRetreived\0\0"
    "etag\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__RequestEtagJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void OCC::RequestEtagJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RequestEtagJob *_t = static_cast<RequestEtagJob *>(_o);
        switch (_id) {
        case 0: _t->etagRetreived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RequestEtagJob::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RequestEtagJob::etagRetreived)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::RequestEtagJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__RequestEtagJob.data,
      qt_meta_data_OCC__RequestEtagJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::RequestEtagJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::RequestEtagJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__RequestEtagJob.stringdata))
        return static_cast<void*>(const_cast< RequestEtagJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::RequestEtagJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OCC::RequestEtagJob::etagRetreived(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__JsonApiJob_t {
    QByteArrayData data[6];
    char stringdata[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__JsonApiJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__JsonApiJob_t qt_meta_stringdata_OCC__JsonApiJob = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OCC::JsonApiJob"
QT_MOC_LITERAL(1, 16, 12), // "jsonReceived"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "json"
QT_MOC_LITERAL(4, 35, 10), // "statusCode"
QT_MOC_LITERAL(5, 46, 5) // "start"

    },
    "OCC::JsonApiJob\0jsonReceived\0\0json\0"
    "statusCode\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__JsonApiJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::JsonApiJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JsonApiJob *_t = static_cast<JsonApiJob *>(_o);
        switch (_id) {
        case 0: _t->jsonReceived((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (JsonApiJob::*_t)(const QVariantMap & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JsonApiJob::jsonReceived)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::JsonApiJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__JsonApiJob.data,
      qt_meta_data_OCC__JsonApiJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::JsonApiJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::JsonApiJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__JsonApiJob.stringdata))
        return static_cast<void*>(const_cast< JsonApiJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::JsonApiJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OCC::JsonApiJob::jsonReceived(const QVariantMap & _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
