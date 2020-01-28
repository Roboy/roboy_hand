/****************************************************************************
** Meta object code from reading C++ file 'roboy_arms.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/roboy_rqt_plugins/roboy_arms/include/roboy_arms/roboy_arms.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roboy_arms.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoboyArms_t {
    QByteArrayData data[9];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoboyArms_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoboyArms_t qt_meta_stringdata_RoboyArms = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RoboyArms"
QT_MOC_LITERAL(1, 10, 7), // "newData"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "plotData"
QT_MOC_LITERAL(4, 28, 7), // "rescale"
QT_MOC_LITERAL(5, 36, 16), // "plotMotorChanged"
QT_MOC_LITERAL(6, 53, 9), // "toggleAll"
QT_MOC_LITERAL(7, 63, 11), // "fpgaChanged"
QT_MOC_LITERAL(8, 75, 4) // "fpga"

    },
    "RoboyArms\0newData\0\0plotData\0rescale\0"
    "plotMotorChanged\0toggleAll\0fpgaChanged\0"
    "fpga"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoboyArms[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void RoboyArms::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoboyArms *_t = static_cast<RoboyArms *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newData(); break;
        case 1: _t->plotData(); break;
        case 2: _t->rescale(); break;
        case 3: _t->plotMotorChanged(); break;
        case 4: _t->toggleAll(); break;
        case 5: _t->fpgaChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RoboyArms::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoboyArms::newData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RoboyArms::staticMetaObject = {
    { &rqt_gui_cpp::Plugin::staticMetaObject, qt_meta_stringdata_RoboyArms.data,
      qt_meta_data_RoboyArms,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RoboyArms::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoboyArms::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoboyArms.stringdata0))
        return static_cast<void*>(this);
    return rqt_gui_cpp::Plugin::qt_metacast(_clname);
}

int RoboyArms::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rqt_gui_cpp::Plugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RoboyArms::newData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
