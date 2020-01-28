/****************************************************************************
** Meta object code from reading C++ file 'roboy_motor_command.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/roboy_rqt_plugins/roboy_motor_command/include/roboy_motor_command/roboy_motor_command.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roboy_motor_command.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoboyMotorCommand_t {
    QByteArrayData data[12];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoboyMotorCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoboyMotorCommand_t qt_meta_stringdata_RoboyMotorCommand = {
    {
QT_MOC_LITERAL(0, 0, 17), // "RoboyMotorCommand"
QT_MOC_LITERAL(1, 18, 20), // "stopButtonAllClicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "setPointChanged"
QT_MOC_LITERAL(4, 56, 21), // "setPointChangedSlider"
QT_MOC_LITERAL(5, 78, 18), // "setPointAllChanged"
QT_MOC_LITERAL(6, 97, 24), // "setPointAllChangedSlider"
QT_MOC_LITERAL(7, 122, 18), // "controlModeChanged"
QT_MOC_LITERAL(8, 141, 13), // "update_config"
QT_MOC_LITERAL(9, 155, 15), // "loadMotorConfig"
QT_MOC_LITERAL(10, 171, 14), // "addFpgaWidgets"
QT_MOC_LITERAL(11, 186, 4) // "fpga"

    },
    "RoboyMotorCommand\0stopButtonAllClicked\0"
    "\0setPointChanged\0setPointChangedSlider\0"
    "setPointAllChanged\0setPointAllChangedSlider\0"
    "controlModeChanged\0update_config\0"
    "loadMotorConfig\0addFpgaWidgets\0fpga"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoboyMotorCommand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void RoboyMotorCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoboyMotorCommand *_t = static_cast<RoboyMotorCommand *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopButtonAllClicked(); break;
        case 1: _t->setPointChanged(); break;
        case 2: _t->setPointChangedSlider(); break;
        case 3: _t->setPointAllChanged(); break;
        case 4: _t->setPointAllChangedSlider(); break;
        case 5: _t->controlModeChanged(); break;
        case 6: _t->update_config(); break;
        case 7: _t->loadMotorConfig(); break;
        case 8: _t->addFpgaWidgets((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject RoboyMotorCommand::staticMetaObject = {
    { &rqt_gui_cpp::Plugin::staticMetaObject, qt_meta_stringdata_RoboyMotorCommand.data,
      qt_meta_data_RoboyMotorCommand,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RoboyMotorCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoboyMotorCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoboyMotorCommand.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MotorConfig"))
        return static_cast< MotorConfig*>(this);
    return rqt_gui_cpp::Plugin::qt_metacast(_clname);
}

int RoboyMotorCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rqt_gui_cpp::Plugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
