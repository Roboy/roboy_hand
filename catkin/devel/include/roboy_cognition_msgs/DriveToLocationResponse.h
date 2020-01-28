// Generated by gencpp from file roboy_cognition_msgs/DriveToLocationResponse.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_DRIVETOLOCATIONRESPONSE_H
#define ROBOY_COGNITION_MSGS_MESSAGE_DRIVETOLOCATIONRESPONSE_H


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
struct DriveToLocationResponse_
{
  typedef DriveToLocationResponse_<ContainerAllocator> Type;

  DriveToLocationResponse_()
    : eta(0)
    , path_found(false)
    , error_message()  {
    }
  DriveToLocationResponse_(const ContainerAllocator& _alloc)
    : eta(0)
    , path_found(false)
    , error_message(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _eta_type;
  _eta_type eta;

   typedef uint8_t _path_found_type;
  _path_found_type path_found;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_message_type;
  _error_message_type error_message;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DriveToLocationResponse_

typedef ::roboy_cognition_msgs::DriveToLocationResponse_<std::allocator<void> > DriveToLocationResponse;

typedef boost::shared_ptr< ::roboy_cognition_msgs::DriveToLocationResponse > DriveToLocationResponsePtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::DriveToLocationResponse const> DriveToLocationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d0e53d73450e014ee19804b57dfcd6be";
  }

  static const char* value(const ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd0e53d73450e014eULL;
  static const uint64_t static_value2 = 0xe19804b57dfcd6beULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/DriveToLocationResponse";
  }

  static const char* value(const ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 eta\n"
"bool path_found\n"
"string error_message\n"
"\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.eta);
      stream.next(m.path_found);
      stream.next(m.error_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DriveToLocationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::DriveToLocationResponse_<ContainerAllocator>& v)
  {
    s << indent << "eta: ";
    Printer<int16_t>::stream(s, indent + "  ", v.eta);
    s << indent << "path_found: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.path_found);
    s << indent << "error_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_DRIVETOLOCATIONRESPONSE_H
