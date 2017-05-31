/****************************************************************************
** Meta object code from reading C++ file 'owncloudwizardresultpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/wizard/owncloudwizardresultpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudwizardresultpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__OwncloudWizardResultPage_t {
    QByteArrayData data[6];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OwncloudWizardResultPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OwncloudWizardResultPage_t qt_meta_stringdata_OCC__OwncloudWizardResultPage = {
    {
QT_MOC_LITERAL(0, 0, 29), // "OCC::OwncloudWizardResultPage"
QT_MOC_LITERAL(1, 30, 11), // "setComplete"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "complete"
QT_MOC_LITERAL(4, 52, 13), // "slotOpenLocal"
QT_MOC_LITERAL(5, 66, 14) // "slotOpenServer"

    },
    "OCC::OwncloudWizardResultPage\0setComplete\0"
    "\0complete\0slotOpenLocal\0slotOpenServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OwncloudWizardResultPage[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x09 /* Protected */,
       5,    0,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OCC::OwncloudWizardResultPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OwncloudWizardResultPage *_t = static_cast<OwncloudWizardResultPage *>(_o);
        switch (_id) {
        case 0: _t->setComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotOpenLocal(); break;
        case 2: _t->slotOpenServer(); break;
        default: ;
        }
    }
}

const QMetaObject OCC::OwncloudWizardResultPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_OCC__OwncloudWizardResultPage.data,
      qt_meta_data_OCC__OwncloudWizardResultPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::OwncloudWizardResultPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudWizardResultPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OwncloudWizardResultPage.stringdata))
        return static_cast<void*>(const_cast< OwncloudWizardResultPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int OCC::OwncloudWizardResultPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
