// Generated by gencpp from file roboy_middleware_msgs/MotorState.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_MOTORSTATE_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_MOTORSTATE_H


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
struct MotorState_
{
  typedef MotorState_<ContainerAllocator> Type;

  MotorState_()
    : setpoint()
    , encoder0_pos()
    , encoder1_pos()
    , displacement()
    , current()  {
    }
  MotorState_(const ContainerAllocator& _alloc)
    : setpoint(_alloc)
    , encoder0_pos(_alloc)
    , encoder1_pos(_alloc)
    , displacement(_alloc)
    , current(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _setpoint_type;
  _setpoint_type setpoint;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _encoder0_pos_type;
  _encoder0_pos_type encoder0_pos;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _encoder1_pos_type;
  _encoder1_pos_type encoder1_pos;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _displacement_type;
  _displacement_type displacement;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _current_type;
  _current_type current;





  typedef boost::shared_ptr< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> const> ConstPtr;

}; // struct MotorState_

typedef ::roboy_middleware_msgs::MotorState_<std::allocator<void> > MotorState;

typedef boost::shared_ptr< ::roboy_middleware_msgs::MotorState > MotorStatePtr;
typedef boost::shared_ptr< ::roboy_middleware_msgs::MotorState const> MotorStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_middleware_msgs::MotorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "43b4e124c55bb2ff5cc2fe10577476dd";
  }

  static const char* value(const ::roboy_middleware_msgs::MotorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x43b4e124c55bb2ffULL;
  static const uint64_t static_value2 = 0x5cc2fe10577476ddULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_middleware_msgs/MotorState";
  }

  static const char* value(const ::roboy_middleware_msgs::MotorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] setpoint\n"
"int32[] encoder0_pos\n"
"int32[] encoder1_pos\n"
"int32[] displacement\n"
"int32[] current\n"
;
  }

  static const char* value(const ::roboy_middleware_msgs::MotorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.setpoint);
      stream.next(m.encoder0_pos);
      stream.next(m.encoder1_pos);
      stream.next(m.displacement);
      stream.next(m.current);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_middleware_msgs::MotorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_middleware_msgs::MotorState_<ContainerAllocator>& v)
  {
    s << indent << "setpoint[]" << std::endl;
    for (size_t i = 0; i < v.setpoint.size(); ++i)
    {
      s << indent << "  setpoint[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.setpoint[i]);
    }
    s << indent << "encoder0_pos[]" << std::endl;
    for (size_t i = 0; i < v.encoder0_pos.size(); ++i)
    {
      s << indent << "  encoder0_pos[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.encoder0_pos[i]);
    }
    s << indent << "encoder1_pos[]" << std::endl;
    for (size_t i = 0; i < v.encoder1_pos.size(); ++i)
    {
      s << indent << "  encoder1_pos[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.encoder1_pos[i]);
    }
    s << indent << "displacement[]" << std::endl;
    for (size_t i = 0; i < v.displacement.size(); ++i)
    {
      s << indent << "  displacement[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.displacement[i]);
    }
    s << indent << "current[]" << std::endl;
    for (size_t i = 0; i < v.current.size(); ++i)
    {
      s << indent << "  current[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.current[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_MOTORSTATE_H
