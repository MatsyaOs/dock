/****************************************************************************
** Meta object code from reading C++ file 'docksettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/docksettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'docksettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DockSettings_t {
    QByteArrayData data[23];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockSettings_t qt_meta_stringdata_DockSettings = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DockSettings"
QT_MOC_LITERAL(1, 13, 15), // "iconSizeChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "directionChanged"
QT_MOC_LITERAL(4, 47, 17), // "visibilityChanged"
QT_MOC_LITERAL(5, 65, 27), // "roundedWindowEnabledChanged"
QT_MOC_LITERAL(6, 93, 12), // "styleChanged"
QT_MOC_LITERAL(7, 106, 9), // "direction"
QT_MOC_LITERAL(8, 116, 9), // "Direction"
QT_MOC_LITERAL(9, 126, 8), // "iconSize"
QT_MOC_LITERAL(10, 135, 11), // "edgeMargins"
QT_MOC_LITERAL(11, 147, 20), // "roundedWindowEnabled"
QT_MOC_LITERAL(12, 168, 5), // "style"
QT_MOC_LITERAL(13, 174, 5), // "Style"
QT_MOC_LITERAL(14, 180, 4), // "Left"
QT_MOC_LITERAL(15, 185, 6), // "Bottom"
QT_MOC_LITERAL(16, 192, 5), // "Right"
QT_MOC_LITERAL(17, 198, 10), // "Visibility"
QT_MOC_LITERAL(18, 209, 10), // "AlwaysShow"
QT_MOC_LITERAL(19, 220, 10), // "AlwaysHide"
QT_MOC_LITERAL(20, 231, 10), // "IntellHide"
QT_MOC_LITERAL(21, 242, 5), // "Round"
QT_MOC_LITERAL(22, 248, 8) // "Straight"

    },
    "DockSettings\0iconSizeChanged\0\0"
    "directionChanged\0visibilityChanged\0"
    "roundedWindowEnabledChanged\0styleChanged\0"
    "direction\0Direction\0iconSize\0edgeMargins\0"
    "roundedWindowEnabled\0style\0Style\0Left\0"
    "Bottom\0Right\0Visibility\0AlwaysShow\0"
    "AlwaysHide\0IntellHide\0Round\0Straight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       3,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0049510b,
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Bool, 0x00495103,
      12, 0x80000000 | 13, 0x0049510b,

 // properties: notify_signal_id
       1,
       0,
       0,
       3,
       4,

 // enums: name, alias, flags, count, data
       8,    8, 0x0,    3,   79,
      17,   17, 0x0,    3,   85,
      13,   13, 0x0,    2,   91,

 // enum data: key, value
      14, uint(DockSettings::Left),
      15, uint(DockSettings::Bottom),
      16, uint(DockSettings::Right),
      18, uint(DockSettings::AlwaysShow),
      19, uint(DockSettings::AlwaysHide),
      20, uint(DockSettings::IntellHide),
      21, uint(DockSettings::Round),
      22, uint(DockSettings::Straight),

       0        // eod
};

void DockSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconSizeChanged(); break;
        case 1: _t->directionChanged(); break;
        case 2: _t->visibilityChanged(); break;
        case 3: _t->roundedWindowEnabledChanged(); break;
        case 4: _t->styleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockSettings::iconSizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockSettings::directionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockSettings::visibilityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockSettings::roundedWindowEnabledChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DockSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockSettings::styleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Direction*>(_v) = _t->direction(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->iconSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->edgeMargins(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->roundedWindowEnabled(); break;
        case 4: *reinterpret_cast< Style*>(_v) = _t->style(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DockSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 1: _t->setIconSize(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setEdgeMargins(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setRoundedWindowEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setStyle(*reinterpret_cast< Style*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DockSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DockSettings.data,
    qt_meta_data_DockSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockSettings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DockSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DockSettings::iconSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DockSettings::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DockSettings::visibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DockSettings::roundedWindowEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DockSettings::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
