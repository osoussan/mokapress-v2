/****************************************************************************
** Meta object code from reading C++ file 'owncloudhttpcredspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/wizard/owncloudhttpcredspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudhttpcredspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__OwncloudHttpCredsPage_t {
    QByteArrayData data[3];
    char stringdata[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OwncloudHttpCredsPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OwncloudHttpCredsPage_t qt_meta_stringdata_OCC__OwncloudHttpCredsPage = {
    {
QT_MOC_LITERAL(0, 0, 26), // "OCC::OwncloudHttpCredsPage"
QT_MOC_LITERAL(1, 27, 14), // "connectToOCUrl"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "OCC::OwncloudHttpCredsPage\0connectToOCUrl\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OwncloudHttpCredsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void OCC::OwncloudHttpCredsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OwncloudHttpCredsPage *_t = static_cast<OwncloudHttpCredsPage *>(_o);
        switch (_id) {
        case 0: _t->connectToOCUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OwncloudHttpCredsPage::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudHttpCredsPage::connectToOCUrl)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::OwncloudHttpCredsPage::staticMetaObject = {
    { &AbstractCredentialsWizardPage::staticMetaObject, qt_meta_stringdata_OCC__OwncloudHttpCredsPage.data,
      qt_meta_data_OCC__OwncloudHttpCredsPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::OwncloudHttpCredsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudHttpCredsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OwncloudHttpCredsPage.stringdata))
        return static_cast<void*>(const_cast< OwncloudHttpCredsPage*>(this));
    return AbstractCredentialsWizardPage::qt_metacast(_clname);
}

int OCC::OwncloudHttpCredsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCredentialsWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void OCC::OwncloudHttpCredsPage::connectToOCUrl(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
