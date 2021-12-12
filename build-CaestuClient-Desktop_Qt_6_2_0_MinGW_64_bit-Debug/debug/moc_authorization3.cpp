/****************************************************************************
** Meta object code from reading C++ file 'authorization3.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CaestuClient/authorization3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'authorization3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Authorization3_t {
    const uint offsetsAndSize[18];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Authorization3_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Authorization3_t qt_meta_stringdata_Authorization3 = {
    {
QT_MOC_LITERAL(0, 14), // "Authorization3"
QT_MOC_LITERAL(15, 22), // "send_to_authorization2"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 17), // "send_to_main_menu"
QT_MOC_LITERAL(57, 23), // "get_from_authorization1"
QT_MOC_LITERAL(81, 23), // "get_from_authorization2"
QT_MOC_LITERAL(105, 29), // "on_to_forgot_password_clicked"
QT_MOC_LITERAL(135, 19), // "on_to_login_clicked"
QT_MOC_LITERAL(155, 21) // "on_to_sign_up_clicked"

    },
    "Authorization3\0send_to_authorization2\0"
    "\0send_to_main_menu\0get_from_authorization1\0"
    "get_from_authorization2\0"
    "on_to_forgot_password_clicked\0"
    "on_to_login_clicked\0on_to_sign_up_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Authorization3[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   58,    2, 0x0a,    3 /* Public */,
       5,    0,   59,    2, 0x0a,    4 /* Public */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Authorization3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Authorization3 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->send_to_authorization2(); break;
        case 1: _t->send_to_main_menu(); break;
        case 2: _t->get_from_authorization1(); break;
        case 3: _t->get_from_authorization2(); break;
        case 4: _t->on_to_forgot_password_clicked(); break;
        case 5: _t->on_to_login_clicked(); break;
        case 6: _t->on_to_sign_up_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Authorization3::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Authorization3::send_to_authorization2)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Authorization3::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Authorization3::send_to_main_menu)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject Authorization3::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Authorization3.offsetsAndSize,
    qt_meta_data_Authorization3,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Authorization3_t
, QtPrivate::TypeAndForceComplete<Authorization3, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Authorization3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Authorization3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Authorization3.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Authorization3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Authorization3::send_to_authorization2()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Authorization3::send_to_main_menu()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
