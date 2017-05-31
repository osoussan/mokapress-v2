/****************************************************************************
** Meta object code from reading C++ file 'application.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/application.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__Application_t {
    QByteArrayData data[17];
    char stringdata[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__Application_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__Application_t qt_meta_stringdata_OCC__Application = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OCC::Application"
QT_MOC_LITERAL(1, 17, 13), // "folderRemoved"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "folderStateChanged"
QT_MOC_LITERAL(4, 51, 7), // "Folder*"
QT_MOC_LITERAL(5, 59, 22), // "slotownCloudWizardDone"
QT_MOC_LITERAL(6, 82, 16), // "slotParseMessage"
QT_MOC_LITERAL(7, 99, 19), // "slotCheckConnection"
QT_MOC_LITERAL(8, 119, 23), // "slotUseMonoIconsChanged"
QT_MOC_LITERAL(9, 143, 11), // "slotCleanup"
QT_MOC_LITERAL(10, 155, 21), // "slotAccountStateAdded"
QT_MOC_LITERAL(11, 177, 13), // "AccountState*"
QT_MOC_LITERAL(12, 191, 12), // "accountState"
QT_MOC_LITERAL(13, 204, 23), // "slotAccountStateRemoved"
QT_MOC_LITERAL(14, 228, 9), // "slotCrash"
QT_MOC_LITERAL(15, 238, 36), // "slotSystemOnlineConfiguration..."
QT_MOC_LITERAL(16, 275, 21) // "QNetworkConfiguration"

    },
    "OCC::Application\0folderRemoved\0\0"
    "folderStateChanged\0Folder*\0"
    "slotownCloudWizardDone\0slotParseMessage\0"
    "slotCheckConnection\0slotUseMonoIconsChanged\0"
    "slotCleanup\0slotAccountStateAdded\0"
    "AccountState*\0accountState\0"
    "slotAccountStateRemoved\0slotCrash\0"
    "slotSystemOnlineConfigurationChanged\0"
    "QNetworkConfiguration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__Application[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   73,    2, 0x0a /* Public */,
       6,    2,   76,    2, 0x09 /* Protected */,
       7,    0,   81,    2, 0x09 /* Protected */,
       8,    1,   82,    2, 0x09 /* Protected */,
       9,    0,   85,    2, 0x09 /* Protected */,
      10,    1,   86,    2, 0x09 /* Protected */,
      13,    1,   89,    2, 0x09 /* Protected */,
      14,    0,   92,    2, 0x09 /* Protected */,
      15,    1,   93,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QObjectStar,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    2,

       0        // eod
};

void OCC::Application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Application *_t = static_cast<Application *>(_o);
        switch (_id) {
        case 0: _t->folderRemoved(); break;
        case 1: _t->folderStateChanged((*reinterpret_cast< Folder*(*)>(_a[1]))); break;
        case 2: _t->slotownCloudWizardDone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotParseMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 4: _t->slotCheckConnection(); break;
        case 5: _t->slotUseMonoIconsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slotCleanup(); break;
        case 7: _t->slotAccountStateAdded((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        case 8: _t->slotAccountStateRemoved((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        case 9: _t->slotCrash(); break;
        case 10: _t->slotSystemOnlineConfigurationChanged((*reinterpret_cast< QNetworkConfiguration(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Folder* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Application::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Application::folderRemoved)) {
                *result = 0;
            }
        }
        {
            typedef void (Application::*_t)(Folder * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Application::folderStateChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::Application::staticMetaObject = {
    { &SharedTools::QtSingleApplication::staticMetaObject, qt_meta_stringdata_OCC__Application.data,
      qt_meta_data_OCC__Application,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::Application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Application::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__Application.stringdata))
        return static_cast<void*>(const_cast< Application*>(this));
    return SharedTools::QtSingleApplication::qt_metacast(_clname);
}

int OCC::Application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SharedTools::QtSingleApplication::qt_metacall(_c, _id, _a);
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
void OCC::Application::folderRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::Application::folderStateChanged(Folder * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
