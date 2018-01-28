/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Ant/settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Settings_t {
    QByteArrayData data[16];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Settings_t qt_meta_stringdata_Settings = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Settings"
QT_MOC_LITERAL(1, 9, 17), // "nbAntHillStartChg"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "maxAntPerAntHillChg"
QT_MOC_LITERAL(4, 48, 18), // "antLifeDurationChg"
QT_MOC_LITERAL(5, 67, 13), // "foodPerAntChg"
QT_MOC_LITERAL(6, 81, 15), // "foodPerQueenChg"
QT_MOC_LITERAL(7, 97, 17), // "saltButterEEClick"
QT_MOC_LITERAL(8, 115, 21), // "queenElisabethEEClick"
QT_MOC_LITERAL(9, 137, 19), // "onNbAntHillStartChg"
QT_MOC_LITERAL(10, 157, 21), // "onMaxAntPerAntHillChg"
QT_MOC_LITERAL(11, 179, 20), // "onAntLifeDurationChg"
QT_MOC_LITERAL(12, 200, 15), // "onFoodPerAntChg"
QT_MOC_LITERAL(13, 216, 17), // "onFoodPerQueenChg"
QT_MOC_LITERAL(14, 234, 19), // "onSaltButterEEClick"
QT_MOC_LITERAL(15, 254, 23) // "onQueenElisabethEEClick"

    },
    "Settings\0nbAntHillStartChg\0\0"
    "maxAntPerAntHillChg\0antLifeDurationChg\0"
    "foodPerAntChg\0foodPerQueenChg\0"
    "saltButterEEClick\0queenElisabethEEClick\0"
    "onNbAntHillStartChg\0onMaxAntPerAntHillChg\0"
    "onAntLifeDurationChg\0onFoodPerAntChg\0"
    "onFoodPerQueenChg\0onSaltButterEEClick\0"
    "onQueenElisabethEEClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Settings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,
       7,    0,   89,    2, 0x06 /* Public */,
       8,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Settings *_t = static_cast<Settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nbAntHillStartChg(); break;
        case 1: _t->maxAntPerAntHillChg(); break;
        case 2: _t->antLifeDurationChg(); break;
        case 3: _t->foodPerAntChg(); break;
        case 4: _t->foodPerQueenChg(); break;
        case 5: _t->saltButterEEClick(); break;
        case 6: _t->queenElisabethEEClick(); break;
        case 7: _t->onNbAntHillStartChg(); break;
        case 8: _t->onMaxAntPerAntHillChg(); break;
        case 9: _t->onAntLifeDurationChg(); break;
        case 10: _t->onFoodPerAntChg(); break;
        case 11: _t->onFoodPerQueenChg(); break;
        case 12: _t->onSaltButterEEClick(); break;
        case 13: _t->onQueenElisabethEEClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::nbAntHillStartChg)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::maxAntPerAntHillChg)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::antLifeDurationChg)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::foodPerAntChg)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::foodPerQueenChg)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::saltButterEEClick)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Settings::queenElisabethEEClick)) {
                *result = 6;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Settings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Settings.data,
      qt_meta_data_Settings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Settings.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Settings::nbAntHillStartChg()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Settings::maxAntPerAntHillChg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Settings::antLifeDurationChg()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Settings::foodPerAntChg()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Settings::foodPerQueenChg()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Settings::saltButterEEClick()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Settings::queenElisabethEEClick()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
