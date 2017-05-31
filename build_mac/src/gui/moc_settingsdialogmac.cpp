/****************************************************************************
** Meta object code from reading C++ file 'settingsdialogmac.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/settingsdialogmac.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialogmac.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__SettingsDialogMac_t {
    QByteArrayData data[8];
    char stringdata[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SettingsDialogMac_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SettingsDialogMac_t qt_meta_stringdata_OCC__SettingsDialogMac = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OCC::SettingsDialogMac"
QT_MOC_LITERAL(1, 23, 16), // "showActivityPage"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "slotRefreshActivity"
QT_MOC_LITERAL(4, 61, 13), // "AccountState*"
QT_MOC_LITERAL(5, 75, 12), // "accountState"
QT_MOC_LITERAL(6, 88, 12), // "accountAdded"
QT_MOC_LITERAL(7, 101, 14) // "accountRemoved"

    },
    "OCC::SettingsDialogMac\0showActivityPage\0"
    "\0slotRefreshActivity\0AccountState*\0"
    "accountState\0accountAdded\0accountRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SettingsDialogMac[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       6,    1,   38,    2, 0x08 /* Private */,
       7,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void OCC::SettingsDialogMac::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsDialogMac *_t = static_cast<SettingsDialogMac *>(_o);
        switch (_id) {
        case 0: _t->showActivityPage(); break;
        case 1: _t->slotRefreshActivity((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        case 2: _t->accountAdded((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        case 3: _t->accountRemoved((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject OCC::SettingsDialogMac::staticMetaObject = {
    { &MacPreferencesWindow::staticMetaObject, qt_meta_stringdata_OCC__SettingsDialogMac.data,
      qt_meta_data_OCC__SettingsDialogMac,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::SettingsDialogMac::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SettingsDialogMac::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SettingsDialogMac.stringdata))
        return static_cast<void*>(const_cast< SettingsDialogMac*>(this));
    return MacPreferencesWindow::qt_metacast(_clname);
}

int OCC::SettingsDialogMac::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MacPreferencesWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
