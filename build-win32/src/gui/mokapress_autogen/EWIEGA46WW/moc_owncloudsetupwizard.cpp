/****************************************************************************
** Meta object code from reading C++ file 'owncloudsetupwizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/owncloudsetupwizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudsetupwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__DetermineAuthTypeJob_t {
    QByteArrayData data[5];
    char stringdata[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__DetermineAuthTypeJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__DetermineAuthTypeJob_t qt_meta_stringdata_OCC__DetermineAuthTypeJob = {
    {
QT_MOC_LITERAL(0, 0, 25), // "OCC::DetermineAuthTypeJob"
QT_MOC_LITERAL(1, 26, 8), // "authType"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "WizardCommon::AuthType"
QT_MOC_LITERAL(4, 59, 8) // "finished"

    },
    "OCC::DetermineAuthTypeJob\0authType\0\0"
    "WizardCommon::AuthType\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__DetermineAuthTypeJob[] = {

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

void OCC::DetermineAuthTypeJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DetermineAuthTypeJob *_t = static_cast<DetermineAuthTypeJob *>(_o);
        switch (_id) {
        case 0: _t->authType((*reinterpret_cast< WizardCommon::AuthType(*)>(_a[1]))); break;
        case 1: { bool _r = _t->finished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DetermineAuthTypeJob::*_t)(WizardCommon::AuthType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DetermineAuthTypeJob::authType)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::DetermineAuthTypeJob::staticMetaObject = {
    { &AbstractNetworkJob::staticMetaObject, qt_meta_stringdata_OCC__DetermineAuthTypeJob.data,
      qt_meta_data_OCC__DetermineAuthTypeJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::DetermineAuthTypeJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DetermineAuthTypeJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__DetermineAuthTypeJob.stringdata))
        return static_cast<void*>(const_cast< DetermineAuthTypeJob*>(this));
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::DetermineAuthTypeJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::DetermineAuthTypeJob::authType(WizardCommon::AuthType _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OCC__OwncloudSetupWizard_t {
    QByteArrayData data[18];
    char stringdata[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OwncloudSetupWizard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OwncloudSetupWizard_t qt_meta_stringdata_OCC__OwncloudSetupWizard = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OCC::OwncloudSetupWizard"
QT_MOC_LITERAL(1, 25, 18), // "ownCloudWizardDone"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 21), // "slotDetermineAuthType"
QT_MOC_LITERAL(4, 67, 21), // "slotOwnCloudFoundAuth"
QT_MOC_LITERAL(5, 89, 23), // "slotNoOwnCloudFoundAuth"
QT_MOC_LITERAL(6, 113, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 128, 5), // "reply"
QT_MOC_LITERAL(8, 134, 30), // "slotNoOwnCloudFoundAuthTimeout"
QT_MOC_LITERAL(9, 165, 3), // "url"
QT_MOC_LITERAL(10, 169, 18), // "slotConnectToOCUrl"
QT_MOC_LITERAL(11, 188, 13), // "slotAuthError"
QT_MOC_LITERAL(12, 202, 31), // "slotCreateLocalAndRemoteFolders"
QT_MOC_LITERAL(13, 234, 22), // "slotRemoteFolderExists"
QT_MOC_LITERAL(14, 257, 30), // "slotCreateRemoteFolderFinished"
QT_MOC_LITERAL(15, 288, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(16, 316, 21), // "slotAssistantFinished"
QT_MOC_LITERAL(17, 338, 27) // "slotSkipFolderConfiguration"

    },
    "OCC::OwncloudSetupWizard\0ownCloudWizardDone\0"
    "\0slotDetermineAuthType\0slotOwnCloudFoundAuth\0"
    "slotNoOwnCloudFoundAuth\0QNetworkReply*\0"
    "reply\0slotNoOwnCloudFoundAuthTimeout\0"
    "url\0slotConnectToOCUrl\0slotAuthError\0"
    "slotCreateLocalAndRemoteFolders\0"
    "slotRemoteFolderExists\0"
    "slotCreateRemoteFolderFinished\0"
    "QNetworkReply::NetworkError\0"
    "slotAssistantFinished\0slotSkipFolderConfiguration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OwncloudSetupWizard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   77,    2, 0x08 /* Private */,
       4,    2,   80,    2, 0x08 /* Private */,
       5,    1,   85,    2, 0x08 /* Private */,
       8,    1,   88,    2, 0x08 /* Private */,
      10,    1,   91,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    2,   95,    2, 0x08 /* Private */,
      13,    1,  100,    2, 0x08 /* Private */,
      14,    1,  103,    2, 0x08 /* Private */,
      16,    1,  106,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QVariantMap,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void OCC::OwncloudSetupWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OwncloudSetupWizard *_t = static_cast<OwncloudSetupWizard *>(_o);
        switch (_id) {
        case 0: _t->ownCloudWizardDone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotDetermineAuthType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotOwnCloudFoundAuth((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 3: _t->slotNoOwnCloudFoundAuth((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->slotNoOwnCloudFoundAuthTimeout((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->slotConnectToOCUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotAuthError(); break;
        case 7: _t->slotCreateLocalAndRemoteFolders((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->slotRemoteFolderExists((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->slotCreateRemoteFolderFinished((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 10: _t->slotAssistantFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->slotSkipFolderConfiguration(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
        case 9:
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
            typedef void (OwncloudSetupWizard::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudSetupWizard::ownCloudWizardDone)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::OwncloudSetupWizard::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OCC__OwncloudSetupWizard.data,
      qt_meta_data_OCC__OwncloudSetupWizard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::OwncloudSetupWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudSetupWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OwncloudSetupWizard.stringdata))
        return static_cast<void*>(const_cast< OwncloudSetupWizard*>(this));
    return QObject::qt_metacast(_clname);
}

int OCC::OwncloudSetupWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void OCC::OwncloudSetupWizard::ownCloudWizardDone(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
