/****************************************************************************
** Meta object code from reading C++ file 'owncloudwizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/wizard/owncloudwizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__OwncloudWizard_t {
    QByteArrayData data[18];
    char stringdata[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OwncloudWizard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OwncloudWizard_t qt_meta_stringdata_OCC__OwncloudWizard = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::OwncloudWizard"
QT_MOC_LITERAL(1, 20, 20), // "clearPendingRequests"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 17), // "determineAuthType"
QT_MOC_LITERAL(4, 60, 14), // "connectToOCUrl"
QT_MOC_LITERAL(5, 75, 27), // "createLocalAndRemoteFolders"
QT_MOC_LITERAL(6, 103, 18), // "basicSetupFinished"
QT_MOC_LITERAL(7, 122, 23), // "skipFolderConfiguration"
QT_MOC_LITERAL(8, 146, 15), // "needCertificate"
QT_MOC_LITERAL(9, 162, 11), // "setAuthType"
QT_MOC_LITERAL(10, 174, 22), // "WizardCommon::AuthType"
QT_MOC_LITERAL(11, 197, 4), // "type"
QT_MOC_LITERAL(12, 202, 15), // "setRemoteFolder"
QT_MOC_LITERAL(13, 218, 24), // "appendToConfigurationLog"
QT_MOC_LITERAL(14, 243, 3), // "msg"
QT_MOC_LITERAL(15, 247, 7), // "LogType"
QT_MOC_LITERAL(16, 255, 22), // "slotCurrentPageChanged"
QT_MOC_LITERAL(17, 278, 14) // "successfulStep"

    },
    "OCC::OwncloudWizard\0clearPendingRequests\0"
    "\0determineAuthType\0connectToOCUrl\0"
    "createLocalAndRemoteFolders\0"
    "basicSetupFinished\0skipFolderConfiguration\0"
    "needCertificate\0setAuthType\0"
    "WizardCommon::AuthType\0type\0setRemoteFolder\0"
    "appendToConfigurationLog\0msg\0LogType\0"
    "slotCurrentPageChanged\0successfulStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OwncloudWizard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       4,    1,   83,    2, 0x06 /* Public */,
       5,    2,   86,    2, 0x06 /* Public */,
       6,    1,   91,    2, 0x06 /* Public */,
       7,    0,   94,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   96,    2, 0x0a /* Public */,
      12,    1,   99,    2, 0x0a /* Public */,
      13,    2,  102,    2, 0x0a /* Public */,
      13,    1,  107,    2, 0x2a /* Public | MethodCloned */,
      16,    1,  110,    2, 0x0a /* Public */,
      17,    0,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15,   14,   11,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void OCC::OwncloudWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OwncloudWizard *_t = static_cast<OwncloudWizard *>(_o);
        switch (_id) {
        case 0: _t->clearPendingRequests(); break;
        case 1: _t->determineAuthType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->connectToOCUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->createLocalAndRemoteFolders((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->basicSetupFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->skipFolderConfiguration(); break;
        case 6: _t->needCertificate(); break;
        case 7: _t->setAuthType((*reinterpret_cast< WizardCommon::AuthType(*)>(_a[1]))); break;
        case 8: _t->setRemoteFolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->appendToConfigurationLog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< LogType(*)>(_a[2]))); break;
        case 10: _t->appendToConfigurationLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->slotCurrentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->successfulStep(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OwncloudWizard::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudWizard::clearPendingRequests)) {
                *result = 0;
            }
        }
        {
            typedef void (OwncloudWizard::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudWizard::determineAuthType)) {
                *result = 1;
            }
        }
        {
            typedef void (OwncloudWizard::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudWizard::connectToOCUrl)) {
                *result = 2;
            }
        }
        {
            typedef void (OwncloudWizard::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudWizard::createLocalAndRemoteFolders)) {
                *result = 3;
            }
        }
        {
            typedef void (OwncloudWizard::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudWizard::basicSetupFinished)) {
                *result = 4;
            }
        }
        {
            typedef void (OwncloudWizard::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudWizard::skipFolderConfiguration)) {
                *result = 5;
            }
        }
        {
            typedef void (OwncloudWizard::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudWizard::needCertificate)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject OCC::OwncloudWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_OCC__OwncloudWizard.data,
      qt_meta_data_OCC__OwncloudWizard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::OwncloudWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OwncloudWizard.stringdata))
        return static_cast<void*>(const_cast< OwncloudWizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int OCC::OwncloudWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void OCC::OwncloudWizard::clearPendingRequests()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::OwncloudWizard::determineAuthType(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::OwncloudWizard::connectToOCUrl(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::OwncloudWizard::createLocalAndRemoteFolders(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::OwncloudWizard::basicSetupFinished(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::OwncloudWizard::skipFolderConfiguration()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void OCC::OwncloudWizard::needCertificate()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
