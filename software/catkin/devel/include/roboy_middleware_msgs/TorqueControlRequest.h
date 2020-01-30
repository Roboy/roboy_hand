// Generated by gencpp from file roboy_middleware_msgs/TorqueControlRequest.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_TORQUECONTROLREQUEST_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_TORQUECONTROLREQUEST_H


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
struct TorqueControlRequest_
{
  typedef TorqueControlRequest_<ContainerAllocator> Type;

  TorqueControlRequest_()
    : joint_names()
    , torque()  {
    }
  TorqueControlRequest_(const ContainerAllocator& _alloc)
    : joint_names(_alloc)
    , torque(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _torque_type;
  _torque_type torque;





  typedef boost::shared_ptr< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TorqueControlRequest_

typedef ::roboy_middleware_msgs::TorqueControlRequest_<std::allocator<void> > TorqueControlRequest;

typedef boost::shared_ptr< ::roboy_middleware_msgs::TorqueControlRequest > TorqueControlRequestPtr;
typedef boost::shared_ptr< ::roboy_middleware_msgs::TorqueControlRequest const> TorqueControlRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "41b1f656e77197c6e815a8a1ff7ad441";
  }

  static const char* value(const ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x41b1f656e77197c6ULL;
  static const uint64_t static_value2 = 0xe815a8a1ff7ad441ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_middleware_msgs/TorqueControlRequest";
  }

  static const char* value(const ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] joint_names\n"
"float32[] torque\n"
;
  }

  static const char* value(const ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_names);
      stream.next(m.torque);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TorqueControlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_middleware_msgs::TorqueControlRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "torque[]" << std::endl;
    for (size_t i = 0; i < v.torque.size(); ++i)
    {
      s << indent << "  torque[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.torque[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_TORQUECONTROLREQUEST_H