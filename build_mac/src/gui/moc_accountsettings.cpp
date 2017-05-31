/****************************************************************************
** Meta object code from reading C++ file 'accountsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/accountsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__AccountSettings_t {
    QByteArrayData data[28];
    char stringdata[492];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__AccountSettings_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__AccountSettings_t qt_meta_stringdata_OCC__AccountSettings = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OCC::AccountSettings"
QT_MOC_LITERAL(1, 21, 13), // "folderChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "openFolderAlias"
QT_MOC_LITERAL(4, 52, 10), // "slotOpenOC"
QT_MOC_LITERAL(5, 63, 15), // "slotUpdateQuota"
QT_MOC_LITERAL(6, 79, 23), // "slotAccountStateChanged"
QT_MOC_LITERAL(7, 103, 5), // "state"
QT_MOC_LITERAL(8, 109, 13), // "accountsState"
QT_MOC_LITERAL(9, 123, 13), // "AccountState*"
QT_MOC_LITERAL(10, 137, 13), // "slotAddFolder"
QT_MOC_LITERAL(11, 151, 23), // "slotEnableCurrentFolder"
QT_MOC_LITERAL(12, 175, 24), // "slotSyncCurrentFolderNow"
QT_MOC_LITERAL(13, 200, 23), // "slotRemoveCurrentFolder"
QT_MOC_LITERAL(14, 224, 21), // "slotOpenCurrentFolder"
QT_MOC_LITERAL(15, 246, 24), // "slotFolderWizardAccepted"
QT_MOC_LITERAL(16, 271, 24), // "slotFolderWizardRejected"
QT_MOC_LITERAL(17, 296, 17), // "slotDeleteAccount"
QT_MOC_LITERAL(18, 314, 21), // "slotToggleSignInState"
QT_MOC_LITERAL(19, 336, 21), // "slotOpenAccountWizard"
QT_MOC_LITERAL(20, 358, 16), // "slotAccountAdded"
QT_MOC_LITERAL(21, 375, 26), // "refreshSelectiveSyncStatus"
QT_MOC_LITERAL(22, 402, 30), // "slotCustomContextMenuRequested"
QT_MOC_LITERAL(23, 433, 21), // "slotFolderListClicked"
QT_MOC_LITERAL(24, 455, 4), // "indx"
QT_MOC_LITERAL(25, 460, 8), // "doExpand"
QT_MOC_LITERAL(26, 469, 17), // "slotLinkActivated"
QT_MOC_LITERAL(27, 487, 4) // "link"

    },
    "OCC::AccountSettings\0folderChanged\0\0"
    "openFolderAlias\0slotOpenOC\0slotUpdateQuota\0"
    "slotAccountStateChanged\0state\0"
    "accountsState\0AccountState*\0slotAddFolder\0"
    "slotEnableCurrentFolder\0"
    "slotSyncCurrentFolderNow\0"
    "slotRemoveCurrentFolder\0slotOpenCurrentFolder\0"
    "slotFolderWizardAccepted\0"
    "slotFolderWizardRejected\0slotDeleteAccount\0"
    "slotToggleSignInState\0slotOpenAccountWizard\0"
    "slotAccountAdded\0refreshSelectiveSyncStatus\0"
    "slotCustomContextMenuRequested\0"
    "slotFolderListClicked\0indx\0doExpand\0"
    "slotLinkActivated\0link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__AccountSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    1,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  128,    2, 0x0a /* Public */,
       5,    2,  129,    2, 0x0a /* Public */,
       6,    1,  134,    2, 0x0a /* Public */,
       8,    0,  137,    2, 0x0a /* Public */,
      10,    0,  138,    2, 0x09 /* Protected */,
      11,    0,  139,    2, 0x09 /* Protected */,
      12,    0,  140,    2, 0x09 /* Protected */,
      13,    0,  141,    2, 0x09 /* Protected */,
      14,    0,  142,    2, 0x09 /* Protected */,
      15,    0,  143,    2, 0x09 /* Protected */,
      16,    0,  144,    2, 0x09 /* Protected */,
      17,    0,  145,    2, 0x09 /* Protected */,
      18,    0,  146,    2, 0x09 /* Protected */,
      19,    0,  147,    2, 0x09 /* Protected */,
      20,    1,  148,    2, 0x09 /* Protected */,
      21,    0,  151,    2, 0x09 /* Protected */,
      22,    1,  152,    2, 0x09 /* Protected */,
      23,    1,  155,    2, 0x09 /* Protected */,
      25,    0,  158,    2, 0x09 /* Protected */,
      26,    1,  159,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::Int,    7,
    0x80000000 | 9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QModelIndex,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,

       0        // eod
};

void OCC::AccountSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccountSettings *_t = static_cast<AccountSettings *>(_o);
        switch (_id) {
        case 0: _t->folderChanged(); break;
        case 1: _t->openFolderAlias((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotOpenOC(); break;
        case 3: _t->slotUpdateQuota((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->slotAccountStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: { AccountState* _r = _t->accountsState();
            if (_a[0]) *reinterpret_cast< AccountState**>(_a[0]) = _r; }  break;
        case 6: _t->slotAddFolder(); break;
        case 7: _t->slotEnableCurrentFolder(); break;
        case 8: _t->slotSyncCurrentFolderNow(); break;
        case 9: _t->slotRemoveCurrentFolder(); break;
        case 10: _t->slotOpenCurrentFolder(); break;
        case 11: _t->slotFolderWizardAccepted(); break;
        case 12: _t->slotFolderWizardRejected(); break;
        case 13: _t->slotDeleteAccount(); break;
        case 14: _t->slotToggleSignInState(); break;
        case 15: _t->slotOpenAccountWizard(); break;
        case 16: _t->slotAccountAdded((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        case 17: _t->refreshSelectiveSyncStatus(); break;
        case 18: _t->slotCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 19: _t->slotFolderListClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 20: _t->doExpand(); break;
        case 21: _t->slotLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AccountSettings::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountSettings::folderChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (AccountSettings::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountSettings::openFolderAlias)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::AccountSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OCC__AccountSettings.data,
      qt_meta_data_OCC__AccountSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::AccountSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__AccountSettings.stringdata))
        return static_cast<void*>(const_cast< AccountSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int OCC::AccountSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void OCC::AccountSettings::folderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OCC::AccountSettings::openFolderAlias(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
