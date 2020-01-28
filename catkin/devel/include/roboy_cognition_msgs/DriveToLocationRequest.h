// Generated by gencpp from file roboy_cognition_msgs/DriveToLocationRequest.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_DRIVETOLOCATIONREQUEST_H
#define ROBOY_COGNITION_MSGS_MESSAGE_DRIVETOLOCATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboy_cognition_msgs
{
template <class ContainerAllocator>
struct DriveToLocationRequest_
{
  typedef DriveToLocationRequest_<ContainerAllocator> Type;

  DriveToLocationRequest_()
    : destination()  {
    }
  DriveToLocationRequest_(const ContainerAllocator& _alloc)
    : destination(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _destination_type;
  _destination_type destination;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DriveToLocationRequest_

typedef ::roboy_cognition_msgs::DriveToLocationRequest_<std::allocator<void> > DriveToLocationRequest;

typedef boost::shared_ptr< ::roboy_cognition_msgs::DriveToLocationRequest > DriveToLocationRequestPtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::DriveToLocationRequest const> DriveToLocationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_cognition_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_cognition_msgs': ['/home/sausy/Projects/Hand_openBionic/catkin/src/roboy_communication/roboy_cognition_msgs/msg', '/home/sausy/Projects/Hand_openBionic/catkin/devel/share/roboy_cognition_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e47796db9d7d90bff30cd181ffc714b";
  }

  static const char* value(const ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e47796db9d7d90bULL;
  static const uint64_t static_value2 = 0xff30cd181ffc714bULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/DriveToLocationRequest";
  }

  static const char* value(const ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string destination\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.destination);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DriveToLocationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::DriveToLocationRequest_<ContainerAllocator>& v)
  {
    s << indent << "destination: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.destination);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_DRIVETOLOCATIONREQUEST_H