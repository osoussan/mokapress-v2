/****************************************************************************
** Meta object code from reading C++ file 'shibbolethwebview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../client/src/gui/creds/shibboleth/shibbolethwebview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shibbolethwebview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OCC__ShibbolethWebView_t {
    QByteArrayData data[13];
    char stringdata[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCC__ShibbolethWebView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCC__ShibbolethWebView_t qt_meta_stringdata_OCC__ShibbolethWebView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "OCC::ShibbolethWebView"
QT_MOC_LITERAL(1, 23, 24), // "shibbolethCookieReceived"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 14), // "QNetworkCookie"
QT_MOC_LITERAL(4, 64, 6), // "cookie"
QT_MOC_LITERAL(5, 71, 8), // "rejected"
QT_MOC_LITERAL(6, 80, 18), // "onNewCookiesForUrl"
QT_MOC_LITERAL(7, 99, 21), // "QList<QNetworkCookie>"
QT_MOC_LITERAL(8, 121, 10), // "cookieList"
QT_MOC_LITERAL(9, 132, 3), // "url"
QT_MOC_LITERAL(10, 136, 15), // "slotLoadStarted"
QT_MOC_LITERAL(11, 152, 16), // "slotLoadFinished"
QT_MOC_LITERAL(12, 169, 7) // "success"

    },
    "OCC::ShibbolethWebView\0shibbolethCookieReceived\0"
    "\0QNetworkCookie\0cookie\0rejected\0"
    "onNewCookiesForUrl\0QList<QNetworkCookie>\0"
    "cookieList\0url\0slotLoadStarted\0"
    "slotLoadFinished\0success"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCC__ShibbolethWebView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   43,    2, 0x08 /* Private */,
      10,    0,   48,    2, 0x08 /* Private */,
      11,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::QUrl,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void OCC::ShibbolethWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShibbolethWebView *_t = static_cast<ShibbolethWebView *>(_o);
        switch (_id) {
        case 0: _t->shibbolethCookieReceived((*reinterpret_cast< const QNetworkCookie(*)>(_a[1]))); break;
        case 1: _t->rejected(); break;
        case 2: _t->onNewCookiesForUrl((*reinterpret_cast< const QList<QNetworkCookie>(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 3: _t->slotLoadStarted(); break;
        case 4: _t->slotLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ShibbolethWebView::*_t)(const QNetworkCookie & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShibbolethWebView::shibbolethCookieReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (ShibbolethWebView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShibbolethWebView::rejected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OCC::ShibbolethWebView::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_OCC__ShibbolethWebView.data,
      qt_meta_data_OCC__ShibbolethWebView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OCC::ShibbolethWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShibbolethWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OCC__ShibbolethWebView.stringdata))
        return static_cast<void*>(const_cast< ShibbolethWebView*>(this));
    return QWebView::qt_metacast(_clname);
}

int OCC::ShibbolethWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OCC::ShibbolethWebView::shibbolethCookieReceived(const QNetworkCookie & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::ShibbolethWebView::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
