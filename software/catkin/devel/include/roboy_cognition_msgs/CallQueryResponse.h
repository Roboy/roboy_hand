// Generated by gencpp from file roboy_cognition_msgs/CallQueryResponse.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_CALLQUERYRESPONSE_H
#define ROBOY_COGNITION_MSGS_MESSAGE_CALLQUERYRESPONSE_H


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
struct CallQueryResponse_
{
  typedef CallQueryResponse_<ContainerAllocator> Type;

  CallQueryResponse_()
    : result(false)  {
    }
  CallQueryResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CallQueryResponse_

typedef ::roboy_cognition_msgs::CallQueryResponse_<std::allocator<void> > CallQueryResponse;

typedef boost::shared_ptr< ::roboy_cognition_msgs::CallQueryResponse > CallQueryResponsePtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::CallQueryResponse const> CallQueryResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_cognition_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_cognition_msgs': ['/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_communication/roboy_cognition_msgs/msg', '/home/sausy/Projects/Hand_openBionic/software/catkin/devel/share/roboy_cognition_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/CallQueryResponse";
  }

  static const char* value(const ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CallQueryResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::CallQueryResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_CALLQUERYRESPONSE_H