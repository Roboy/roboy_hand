// Generated by gencpp from file roboy_cognition_msgs/FindInstancesResponse.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_FINDINSTANCESRESPONSE_H
#define ROBOY_COGNITION_MSGS_MESSAGE_FINDINSTANCESRESPONSE_H


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
struct FindInstancesResponse_
{
  typedef FindInstancesResponse_<ContainerAllocator> Type;

  FindInstancesResponse_()
    : instances()  {
    }
  FindInstancesResponse_(const ContainerAllocator& _alloc)
    : instances(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _instances_type;
  _instances_type instances;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FindInstancesResponse_

typedef ::roboy_cognition_msgs::FindInstancesResponse_<std::allocator<void> > FindInstancesResponse;

typedef boost::shared_ptr< ::roboy_cognition_msgs::FindInstancesResponse > FindInstancesResponsePtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::FindInstancesResponse const> FindInstancesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c37cf4d14d6c5bfa6fbe319c1865eb5a";
  }

  static const char* value(const ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc37cf4d14d6c5bfaULL;
  static const uint64_t static_value2 = 0x6fbe319c1865eb5aULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/FindInstancesResponse";
  }

  static const char* value(const ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] instances\n"
"\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.instances);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FindInstancesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::FindInstancesResponse_<ContainerAllocator>& v)
  {
    s << indent << "instances[]" << std::endl;
    for (size_t i = 0; i < v.instances.size(); ++i)
    {
      s << indent << "  instances[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.instances[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_FINDINSTANCESRESPONSE_H
