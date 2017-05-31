/****************************************************************************
** Meta object code from reading C++ file 'owncloudshibbolethcredspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client/src/gui/wizard/owncloudshibbolethcredspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudshibbolethcredspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__OwncloudShibbolethCredsPage_t {
    QByteArrayData data[8];
    char stringdata[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__OwncloudShibbolethCredsPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__OwncloudShibbolethCredsPage_t qt_meta_stringdata_OCC__OwncloudShibbolethCredsPage = {
    {
QT_MOC_LITERAL(0, 0, 32), // "OCC::OwncloudShibbolethCredsPage"
QT_MOC_LITERAL(1, 33, 14), // "connectToOCUrl"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 10), // "setVisible"
QT_MOC_LITERAL(4, 60, 7), // "visible"
QT_MOC_LITERAL(5, 68, 28), // "slotShibbolethCookieReceived"
QT_MOC_LITERAL(6, 97, 14), // "QNetworkCookie"
QT_MOC_LITERAL(7, 112, 19) // "slotBrowserRejected"

    },
    "OCC::OwncloudShibbolethCredsPage\0"
    "connectToOCUrl\0\0setVisible\0visible\0"
    "slotShibbolethCookieReceived\0"
    "QNetworkCookie\0slotBrowserRejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__OwncloudShibbolethCredsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x0a /* Public */,
       5,    1,   40,    2, 0x08 /* Private */,
       7,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,

       0        // eod
};

void OCC::OwncloudShibbolethCredsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OwncloudShibbolethCredsPage *_t = static_cast<OwncloudShibbolethCredsPage *>(_o);
        switch (_id) {
        case 0: _t->connectToOCUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slotShibbolethCookieReceived((*reinterpret_cast< const QNetworkCookie(*)>(_a[1]))); break;
        case 3: _t->slotBrowserRejected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookie >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OwncloudShibbolethCredsPage::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OwncloudShibbolethCredsPage::connectToOCUrl)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OCC::OwncloudShibbolethCredsPage::staticMetaObject = {
    { &AbstractCredentialsWizardPage::staticMetaObject, qt_meta_stringdata_OCC__OwncloudShibbolethCredsPage.data,
      qt_meta_data_OCC__OwncloudShibbolethCredsPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::OwncloudShibbolethCredsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudShibbolethCredsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__OwncloudShibbolethCredsPage.stringdata))
        return static_cast<void*>(const_cast< OwncloudShibbolethCredsPage*>(this));
    return AbstractCredentialsWizardPage::qt_metacast(_clname);
}

int OCC::OwncloudShibbolethCredsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCredentialsWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OCC::OwncloudShibbolethCredsPage::connectToOCUrl(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
