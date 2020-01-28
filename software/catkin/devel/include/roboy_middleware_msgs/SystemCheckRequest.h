// Generated by gencpp from file roboy_middleware_msgs/SystemCheckRequest.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_SYSTEMCHECKREQUEST_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_SYSTEMCHECKREQUEST_H


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
struct SystemCheckRequest_
{
  typedef SystemCheckRequest_<ContainerAllocator> Type;

  SystemCheckRequest_()
    : motorids()  {
    }
  SystemCheckRequest_(const ContainerAllocator& _alloc)
    : motorids(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _motorids_type;
  _motorids_type motorids;





  typedef boost::shared_ptr< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SystemCheckRequest_

typedef ::roboy_middleware_msgs::SystemCheckRequest_<std::allocator<void> > SystemCheckRequest;

typedef boost::shared_ptr< ::roboy_middleware_msgs::SystemCheckRequest > SystemCheckRequestPtr;
typedef boost::shared_ptr< ::roboy_middleware_msgs::SystemCheckRequest const> SystemCheckRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a6e886e25b6e52eefb773ca5d68c5bb7";
  }

  static const char* value(const ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa6e886e25b6e52eeULL;
  static const uint64_t static_value2 = 0xfb773ca5d68c5bb7ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_middleware_msgs/SystemCheckRequest";
  }

  static const char* value(const ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint8[] motorids\n"
;
  }

  static const char* value(const ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.motorids);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SystemCheckRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_middleware_msgs::SystemCheckRequest_<ContainerAllocator>& v)
  {
    s << indent << "motorids[]" << std::endl;
    for (size_t i = 0; i < v.motorids.size(); ++i)
    {
      s << indent << "  motorids[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.motorids[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_SYSTEMCHECKREQUEST_H
