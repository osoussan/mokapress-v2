/****************************************************************************
** Meta object code from reading C++ file 'owncloudadvancedsetuppage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/wizard/owncloudadvancedsetuppage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudadvancedsetuppage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__OwncloudAdvancedSetupPage_t {
    QByteArrayData data[9];
    char stringdata[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OwncloudAdvancedSetupPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OwncloudAdvancedSetupPage_t qt_meta_stringdata_OCC__OwncloudAdvancedSetupPage = {
    {
QT_MOC_LITERAL(0, 0, 30), // "OCC::OwncloudAdvancedSetupPage"
QT_MOC_LITERAL(1, 31, 27), // "createLocalAndRemoteFolders"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 14), // "setErrorString"
QT_MOC_LITERAL(4, 75, 16), // "slotSelectFolder"
QT_MOC_LITERAL(5, 92, 25), // "slotSyncEverythingClicked"
QT_MOC_LITERAL(6, 118, 24), // "slotSelectiveSyncClicked"
QT_MOC_LITERAL(7, 143, 18), // "slotQuotaRetrieved"
QT_MOC_LITERAL(8, 162, 6) // "result"

    },
    "OCC::OwncloudAdvancedSetupPage\0"
    "createLocalAndRemoteFolders\0\0"
    "setErrorString\0slotSelectFolder\0"
    "slotSyncEverythingClicked\0"
    "slotSelectiveSyncClicked\0slotQuotaRetrieved\0"
    "result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OwncloudAdvancedSetupPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   49,    2, 0x0a /* Public */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    8,

       0        // eod
};

void OCC::OwncloudAdvancedSetupPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OwncloudAdvancedSetupPage *_t = static_cast<OwncloudAdvancedSetupPage *>(_o);
        switch (_id) {
        case 0: _t->createLocalAndRemoteFolders((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->setErrorString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotSelectFolder(); break;
        case 3: _t->slotSyncEverythingClicked(); break;
        case 4: _t->slotSelectiveSyncClicked(); break;
        case 5: _t->slotQuotaRetrieved((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OwncloudAdvancedSetupPage::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudAdvancedSetupPage::createLocalAndRemoteFolders)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::OwncloudAdvancedSetupPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_OCC__OwncloudAdvancedSetupPage.data,
      qt_meta_data_OCC__OwncloudAdvancedSetupPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::OwncloudAdvancedSetupPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudAdvancedSetupPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OwncloudAdvancedSetupPage.stringdata))
        return static_cast<void*>(const_cast< OwncloudAdvancedSetupPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int OCC::OwncloudAdvancedSetupPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
void OCC::OwncloudAdvancedSetupPage::createLocalAndRemoteFolders(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
