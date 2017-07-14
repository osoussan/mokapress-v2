/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/settingsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__SettingsDialog_t {
    QByteArrayData data[12];
    char stringdata[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__SettingsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__SettingsDialog_t qt_meta_stringdata_OCC__SettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OCC::SettingsDialog"
QT_MOC_LITERAL(1, 20, 13), // "showFirstPage"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "showActivityPage"
QT_MOC_LITERAL(4, 52, 14), // "slotSwitchPage"
QT_MOC_LITERAL(5, 67, 8), // "QAction*"
QT_MOC_LITERAL(6, 76, 6), // "action"
QT_MOC_LITERAL(7, 83, 19), // "slotRefreshActivity"
QT_MOC_LITERAL(8, 103, 13), // "AccountState*"
QT_MOC_LITERAL(9, 117, 12), // "accountState"
QT_MOC_LITERAL(10, 130, 12), // "accountAdded"
QT_MOC_LITERAL(11, 143, 14) // "accountRemoved"

    },
    "OCC::SettingsDialog\0showFirstPage\0\0"
    "showActivityPage\0slotSwitchPage\0"
    "QAction*\0action\0slotRefreshActivity\0"
    "AccountState*\0accountState\0accountAdded\0"
    "accountRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__SettingsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,
      10,    1,   52,    2, 0x08 /* Private */,
      11,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void OCC::SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsDialog *_t = static_cast<SettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->showFirstPage(); break;
        case 1: _t->showActivityPage(); break;
        case 2: _t->slotSwitchPage((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->slotRefreshActivity((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        case 4: _t->accountAdded((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        case 5: _t->accountRemoved((*reinterpret_cast< AccountState*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject OCC::SettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OCC__SettingsDialog.data,
      qt_meta_data_OCC__SettingsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__SettingsDialog.stringdata))
        return static_cast<void*>(const_cast< SettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OCC::SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
