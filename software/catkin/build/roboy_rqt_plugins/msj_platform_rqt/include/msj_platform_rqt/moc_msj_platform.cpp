/****************************************************************************
** Meta object code from reading C++ file 'msj_platform.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/roboy_rqt_plugins/msj_platform_rqt/include/msj_platform_rqt/msj_platform.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msj_platform.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MSJPlatformRQT_t {
    QByteArrayData data[21];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MSJPlatformRQT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MSJPlatformRQT_t qt_meta_stringdata_MSJPlatformRQT = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MSJPlatformRQT"
QT_MOC_LITERAL(1, 15, 7), // "newData"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "newJointState"
QT_MOC_LITERAL(4, 38, 8), // "plotData"
QT_MOC_LITERAL(5, 47, 14), // "plotJointState"
QT_MOC_LITERAL(6, 62, 7), // "rescale"
QT_MOC_LITERAL(7, 70, 22), // "rescaleMagneticSensors"
QT_MOC_LITERAL(8, 93, 16), // "plotMotorChanged"
QT_MOC_LITERAL(9, 110, 9), // "toggleAll"
QT_MOC_LITERAL(10, 120, 11), // "fpgaChanged"
QT_MOC_LITERAL(11, 132, 4), // "fpga"
QT_MOC_LITERAL(12, 137, 15), // "motorPosChanged"
QT_MOC_LITERAL(13, 153, 3), // "pos"
QT_MOC_LITERAL(14, 157, 17), // "stopButtonClicked"
QT_MOC_LITERAL(15, 175, 11), // "zeroClicked"
QT_MOC_LITERAL(16, 187, 17), // "showMagneticField"
QT_MOC_LITERAL(17, 205, 18), // "clearMagneticField"
QT_MOC_LITERAL(18, 224, 8), // "zeroPose"
QT_MOC_LITERAL(19, 233, 15), // "calibrateSystem"
QT_MOC_LITERAL(20, 249, 18) // "measureJointLimits"

    },
    "MSJPlatformRQT\0newData\0\0newJointState\0"
    "plotData\0plotJointState\0rescale\0"
    "rescaleMagneticSensors\0plotMotorChanged\0"
    "toggleAll\0fpgaChanged\0fpga\0motorPosChanged\0"
    "pos\0stopButtonClicked\0zeroClicked\0"
    "showMagneticField\0clearMagneticField\0"
    "zeroPose\0calibrateSystem\0measureJointLimits"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSJPlatformRQT[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  101,    2, 0x0a /* Public */,
       5,    0,  102,    2, 0x0a /* Public */,
       6,    0,  103,    2, 0x0a /* Public */,
       7,    0,  104,    2, 0x0a /* Public */,
       8,    0,  105,    2, 0x0a /* Public */,
       9,    0,  106,    2, 0x0a /* Public */,
      10,    1,  107,    2, 0x0a /* Public */,
      12,    1,  110,    2, 0x0a /* Public */,
      14,    0,  113,    2, 0x0a /* Public */,
      15,    0,  114,    2, 0x0a /* Public */,
      16,    0,  115,    2, 0x0a /* Public */,
      17,    0,  116,    2, 0x0a /* Public */,
      18,    0,  117,    2, 0x0a /* Public */,
      19,    0,  118,    2, 0x0a /* Public */,
      20,    0,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MSJPlatformRQT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MSJPlatformRQT *_t = static_cast<MSJPlatformRQT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newData(); break;
        case 1: _t->newJointState(); break;
        case 2: _t->plotData(); break;
        case 3: _t->plotJointState(); break;
        case 4: _t->rescale(); break;
        case 5: _t->rescaleMagneticSensors(); break;
        case 6: _t->plotMotorChanged(); break;
        case 7: _t->toggleAll(); break;
        case 8: _t->fpgaChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->motorPosChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->stopButtonClicked(); break;
        case 11: _t->zeroClicked(); break;
        case 12: _t->showMagneticField(); break;
        case 13: _t->clearMagneticField(); break;
        case 14: _t->zeroPose(); break;
        case 15: _t->calibrateSystem(); break;
        case 16: _t->measureJointLimits(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MSJPlatformRQT::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MSJPlatformRQT::newData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MSJPlatformRQT::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MSJPlatformRQT::newJointState)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MSJPlatformRQT::staticMetaObject = {
    { &rqt_gui_cpp::Plugin::staticMetaObject, qt_meta_stringdata_MSJPlatformRQT.data,
      qt_meta_data_MSJPlatformRQT,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MSJPlatformRQT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSJPlatformRQT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MSJPlatformRQT.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "rviz_visualization"))
        return static_cast< rviz_visualization*>(this);
    return rqt_gui_cpp::Plugin::qt_metacast(_clname);
}

int MSJPlatformRQT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rqt_gui_cpp::Plugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MSJPlatformRQT::newData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MSJPlatformRQT::newJointState()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
