// Generated by gencpp from file roboy_cognition_msgs/RecognizeFacesRequest.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_RECOGNIZEFACESREQUEST_H
#define ROBOY_COGNITION_MSGS_MESSAGE_RECOGNIZEFACESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <roboy_cognition_msgs/FacialFeatures.h>

namespace roboy_cognition_msgs
{
template <class ContainerAllocator>
struct RecognizeFacesRequest_
{
  typedef RecognizeFacesRequest_<ContainerAllocator> Type;

  RecognizeFacesRequest_()
    : encodings()  {
    }
  RecognizeFacesRequest_(const ContainerAllocator& _alloc)
    : encodings(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::roboy_cognition_msgs::FacialFeatures_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::roboy_cognition_msgs::FacialFeatures_<ContainerAllocator> >::other >  _encodings_type;
  _encodings_type encodings;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RecognizeFacesRequest_

typedef ::roboy_cognition_msgs::RecognizeFacesRequest_<std::allocator<void> > RecognizeFacesRequest;

typedef boost::shared_ptr< ::roboy_cognition_msgs::RecognizeFacesRequest > RecognizeFacesRequestPtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::RecognizeFacesRequest const> RecognizeFacesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "083413108b4614ba96f55f9dd5867d9c";
  }

  static const char* value(const ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x083413108b4614baULL;
  static const uint64_t static_value2 = 0x96f55f9dd5867d9cULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/RecognizeFacesRequest";
  }

  static const char* value(const ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "FacialFeatures[] encodings\n"
"\n"
"================================================================================\n"
"MSG: roboy_cognition_msgs/FacialFeatures\n"
"#only for unrecognized faces\n"
"#is person speaking?\n"
"bool speaking\n"
"#facial features (128x1 vector)\n"
"float64[128] ff\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.encodings);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RecognizeFacesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::RecognizeFacesRequest_<ContainerAllocator>& v)
  {
    s << indent << "encodings[]" << std::endl;
    for (size_t i = 0; i < v.encodings.size(); ++i)
    {
      s << indent << "  encodings[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::roboy_cognition_msgs::FacialFeatures_<ContainerAllocator> >::stream(s, indent + "    ", v.encodings[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_RECOGNIZEFACESREQUEST_H
