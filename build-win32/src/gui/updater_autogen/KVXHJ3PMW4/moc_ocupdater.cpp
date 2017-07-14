/****************************************************************************
** Meta object code from reading C++ file 'ocupdater.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/updater/ocupdater.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ocupdater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__UpdaterScheduler_t {
    QByteArrayData data[7];
    char stringdata[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__UpdaterScheduler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__UpdaterScheduler_t qt_meta_stringdata_OCC__UpdaterScheduler = {
    {
QT_MOC_LITERAL(0, 0, 21), // "OCC::UpdaterScheduler"
QT_MOC_LITERAL(1, 22, 19), // "updaterAnnouncement"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "title"
QT_MOC_LITERAL(4, 49, 3), // "msg"
QT_MOC_LITERAL(5, 53, 14), // "requestRestart"
QT_MOC_LITERAL(6, 68, 14) // "slotTimerFired"

    },
    "OCC::UpdaterScheduler\0updaterAnnouncement\0"
    "\0title\0msg\0requestRestart\0slotTimerFired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__UpdaterScheduler[] = {

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
       1,    2,   29,    2, 0x06 /* Public */,
       5,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OCC::UpdaterScheduler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UpdaterScheduler *_t = static_cast<UpdaterScheduler *>(_o);
        switch (_id) {
        case 0: _t->updaterAnnouncement((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->requestRestart(); break;
        case 2: _t->slotTimerFired(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UpdaterScheduler::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UpdaterScheduler::updaterAnnouncement)) {
                *result = 0;
            }
        }
        {
            typedef void (UpdaterScheduler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UpdaterScheduler::requestRestart)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::UpdaterScheduler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__UpdaterScheduler.data,
      qt_meta_data_OCC__UpdaterScheduler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::UpdaterScheduler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UpdaterScheduler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__UpdaterScheduler.stringdata))
        return static_cast<void*>(const_cast< UpdaterScheduler*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::UpdaterScheduler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void OCC::UpdaterScheduler::updaterAnnouncement(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::UpdaterScheduler::requestRestart()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_OCC__OCUpdater_t {
    QByteArrayData data[12];
    char stringdata[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OCUpdater_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OCUpdater_t qt_meta_stringdata_OCC__OCUpdater = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OCC::OCUpdater"
QT_MOC_LITERAL(1, 15, 20), // "downloadStateChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 18), // "newUpdateAvailable"
QT_MOC_LITERAL(4, 56, 6), // "header"
QT_MOC_LITERAL(5, 63, 7), // "message"
QT_MOC_LITERAL(6, 71, 14), // "requestRestart"
QT_MOC_LITERAL(7, 86, 18), // "slotStartInstaller"
QT_MOC_LITERAL(8, 105, 24), // "backgroundCheckForUpdate"
QT_MOC_LITERAL(9, 130, 17), // "slotOpenUpdateUrl"
QT_MOC_LITERAL(10, 148, 22), // "slotVersionInfoArrived"
QT_MOC_LITERAL(11, 171, 12) // "slotTimedOut"

    },
    "OCC::OCUpdater\0downloadStateChanged\0"
    "\0newUpdateAvailable\0header\0message\0"
    "requestRestart\0slotStartInstaller\0"
    "backgroundCheckForUpdate\0slotOpenUpdateUrl\0"
    "slotVersionInfoArrived\0slotTimedOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OCUpdater[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,
       6,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x09 /* Protected */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::OCUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OCUpdater *_t = static_cast<OCUpdater *>(_o);
        switch (_id) {
        case 0: _t->downloadStateChanged(); break;
        case 1: _t->newUpdateAvailable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->requestRestart(); break;
        case 3: _t->slotStartInstaller(); break;
        case 4: _t->backgroundCheckForUpdate(); break;
        case 5: _t->slotOpenUpdateUrl(); break;
        case 6: _t->slotVersionInfoArrived(); break;
        case 7: _t->slotTimedOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OCUpdater::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OCUpdater::downloadStateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (OCUpdater::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OCUpdater::newUpdateAvailable)) {
                *result = 1;
            }
        }
        {
            typedef void (OCUpdater::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OCUpdater::requestRestart)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject OCC::OCUpdater::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__OCUpdater.data,
      qt_meta_data_OCC__OCUpdater,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::OCUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OCUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OCUpdater.stringdata))
        return static_cast<void*>(const_cast< OCUpdater*>(this));
    if (!strcmp(_clname, "Updater"))
        return static_cast< Updater*>(const_cast< OCUpdater*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::OCUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void OCC::OCUpdater::downloadStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::OCUpdater::newUpdateAvailable(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::OCUpdater::requestRestart()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
struct qt_meta_stringdata_OCC__NSISUpdater_t {
    QByteArrayData data[5];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__NSISUpdater_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__NSISUpdater_t qt_meta_stringdata_OCC__NSISUpdater = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::NSISUpdater"
QT_MOC_LITERAL(1, 17, 18), // "slotSetSeenVersion"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "slotDownloadFinished"
QT_MOC_LITERAL(4, 58, 13) // "slotWriteFile"

    },
    "OCC::NSISUpdater\0slotSetSeenVersion\0"
    "\0slotDownloadFinished\0slotWriteFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__NSISUpdater[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::NSISUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NSISUpdater *_t = static_cast<NSISUpdater *>(_o);
        switch (_id) {
        case 0: _t->slotSetSeenVersion(); break;
        case 1: _t->slotDownloadFinished(); break;
        case 2: _t->slotWriteFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OCC::NSISUpdater::staticMetaObject = {
    { &OCUpdater::staticMetaObject, qt_meta_stringdata_OCC__NSISUpdater.data,
      qt_meta_data_OCC__NSISUpdater,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::NSISUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::NSISUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__NSISUpdater.stringdata))
        return static_cast<void*>(const_cast< NSISUpdater*>(this));
    return OCUpdater::qt_metacast(_clname);
}

int OCC::NSISUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OCUpdater::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_OCC__PassiveUpdateNotifier_t {
    QByteArrayData data[1];
    char stringdata[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__PassiveUpdateNotifier_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__PassiveUpdateNotifier_t qt_meta_stringdata_OCC__PassiveUpdateNotifier = {
    {
QT_MOC_LITERAL(0, 0, 26) // "OCC::PassiveUpdateNotifier"

    },
    "OCC::PassiveUpdateNotifier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__PassiveUpdateNotifier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OCC::PassiveUpdateNotifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OCC::PassiveUpdateNotifier::staticMetaObject = {
    { &OCUpdater::staticMetaObject, qt_meta_stringdata_OCC__PassiveUpdateNotifier.data,
      qt_meta_data_OCC__PassiveUpdateNotifier,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::PassiveUpdateNotifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PassiveUpdateNotifier::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__PassiveUpdateNotifier.stringdata))
        return static_cast<void*>(const_cast< PassiveUpdateNotifier*>(this));
    return OCUpdater::qt_metacast(_clname);
}

int OCC::PassiveUpdateNotifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OCUpdater::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
