// Generated by gencpp from file roboy_middleware_msgs/MotorConfig.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_MOTORCONFIG_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_MOTORCONFIG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboy_middleware_msgs
{
template <class ContainerAllocator>
struct MotorConfig_
{
  typedef MotorConfig_<ContainerAllocator> Type;

  MotorConfig_()
    : update_frequency()
    , motor()
    , control_mode()
    , PWMLimit()
    , IntegralLimit()
    , Kp()
    , Ki()
    , Kd()
    , deadband()
    , setpoint()
    , gearBoxRatio()  {
    }
  MotorConfig_(const ContainerAllocator& _alloc)
    : update_frequency(_alloc)
    , motor(_alloc)
    , control_mode(_alloc)
    , PWMLimit(_alloc)
    , IntegralLimit(_alloc)
    , Kp(_alloc)
    , Ki(_alloc)
    , Kd(_alloc)
    , deadband(_alloc)
    , setpoint(_alloc)
    , gearBoxRatio(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _update_frequency_type;
  _update_frequency_type update_frequency;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _motor_type;
  _motor_type motor;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _control_mode_type;
  _control_mode_type control_mode;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _PWMLimit_type;
  _PWMLimit_type PWMLimit;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _IntegralLimit_type;
  _IntegralLimit_type IntegralLimit;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _Kp_type;
  _Kp_type Kp;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _Ki_type;
  _Ki_type Ki;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _Kd_type;
  _Kd_type Kd;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _deadband_type;
  _deadband_type deadband;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _setpoint_type;
  _setpoint_type setpoint;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _gearBoxRatio_type;
  _gearBoxRatio_type gearBoxRatio;





  typedef boost::shared_ptr< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> const> ConstPtr;

}; // struct MotorConfig_

typedef ::roboy_middleware_msgs::MotorConfig_<std::allocator<void> > MotorConfig;

typedef boost::shared_ptr< ::roboy_middleware_msgs::MotorConfig > MotorConfigPtr;
typedef boost::shared_ptr< ::roboy_middleware_msgs::MotorConfig const> MotorConfigConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_middleware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_middleware_msgs': ['/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_communication/roboy_middleware_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e8035a85d6754846f143f80bcf9f5f79";
  }

  static const char* value(const ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe8035a85d6754846ULL;
  static const uint64_t static_value2 = 0xf143f80bcf9f5f79ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_middleware_msgs/MotorConfig";
  }

  static const char* value(const ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] update_frequency\n"
"uint8[] motor\n"
"uint8[] control_mode\n"
"int32[] PWMLimit\n"
"int32[] IntegralLimit\n"
"int32[] Kp\n"
"int32[] Ki\n"
"int32[] Kd\n"
"int32[] deadband\n"
"int32[] setpoint\n"
"int32[] gearBoxRatio\n"
;
  }

  static const char* value(const ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.update_frequency);
      stream.next(m.motor);
      stream.next(m.control_mode);
      stream.next(m.PWMLimit);
      stream.next(m.IntegralLimit);
      stream.next(m.Kp);
      stream.next(m.Ki);
      stream.next(m.Kd);
      stream.next(m.deadband);
      stream.next(m.setpoint);
      stream.next(m.gearBoxRatio);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorConfig_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_middleware_msgs::MotorConfig_<ContainerAllocator>& v)
  {
    s << indent << "update_frequency[]" << std::endl;
    for (size_t i = 0; i < v.update_frequency.size(); ++i)
    {
      s << indent << "  update_frequency[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.update_frequency[i]);
    }
    s << indent << "motor[]" << std::endl;
    for (size_t i = 0; i < v.motor.size(); ++i)
    {
      s << indent << "  motor[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.motor[i]);
    }
    s << indent << "control_mode[]" << std::endl;
    for (size_t i = 0; i < v.control_mode.size(); ++i)
    {
      s << indent << "  control_mode[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.control_mode[i]);
    }
    s << indent << "PWMLimit[]" << std::endl;
    for (size_t i = 0; i < v.PWMLimit.size(); ++i)
    {
      s << indent << "  PWMLimit[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.PWMLimit[i]);
    }
    s << indent << "IntegralLimit[]" << std::endl;
    for (size_t i = 0; i < v.IntegralLimit.size(); ++i)
    {
      s << indent << "  IntegralLimit[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.IntegralLimit[i]);
    }
    s << indent << "Kp[]" << std::endl;
    for (size_t i = 0; i < v.Kp.size(); ++i)
    {
      s << indent << "  Kp[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.Kp[i]);
    }
    s << indent << "Ki[]" << std::endl;
    for (size_t i = 0; i < v.Ki.size(); ++i)
    {
      s << indent << "  Ki[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.Ki[i]);
    }
    s << indent << "Kd[]" << std::endl;
    for (size_t i = 0; i < v.Kd.size(); ++i)
    {
      s << indent << "  Kd[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.Kd[i]);
    }
    s << indent << "deadband[]" << std::endl;
    for (size_t i = 0; i < v.deadband.size(); ++i)
    {
      s << indent << "  deadband[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.deadband[i]);
    }
    s << indent << "setpoint[]" << std::endl;
    for (size_t i = 0; i < v.setpoint.size(); ++i)
    {
      s << indent << "  setpoint[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.setpoint[i]);
    }
    s << indent << "gearBoxRatio[]" << std::endl;
    for (size_t i = 0; i < v.gearBoxRatio.size(); ++i)
    {
      s << indent << "  gearBoxRatio[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.gearBoxRatio[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_MOTORCONFIG_H
