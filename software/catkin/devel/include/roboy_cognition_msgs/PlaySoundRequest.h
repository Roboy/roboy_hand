// Generated by gencpp from file roboy_cognition_msgs/PlaySoundRequest.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_PLAYSOUNDREQUEST_H
#define ROBOY_COGNITION_MSGS_MESSAGE_PLAYSOUNDREQUEST_H


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
struct PlaySoundRequest_
{
  typedef PlaySoundRequest_<ContainerAllocator> Type;

  PlaySoundRequest_()
    : filepath()
    , timestamps()
    , emotions()  {
    }
  PlaySoundRequest_(const ContainerAllocator& _alloc)
    : filepath(_alloc)
    , timestamps(_alloc)
    , emotions(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filepath_type;
  _filepath_type filepath;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _timestamps_type;
  _timestamps_type timestamps;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _emotions_type;
  _emotions_type emotions;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PlaySoundRequest_

typedef ::roboy_cognition_msgs::PlaySoundRequest_<std::allocator<void> > PlaySoundRequest;

typedef boost::shared_ptr< ::roboy_cognition_msgs::PlaySoundRequest > PlaySoundRequestPtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::PlaySoundRequest const> PlaySoundRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_cognition_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_cognition_msgs': ['/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_communication/roboy_cognition_msgs/msg', '/home/sausy/Projects/Hand_openBionic/software/catkin/devel/share/roboy_cognition_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "12b0025a19b95fa6876dd43a46ebc229";
  }

  static const char* value(const ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x12b0025a19b95fa6ULL;
  static const uint64_t static_value2 = 0x876dd43a46ebc229ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/PlaySoundRequest";
  }

  static const char* value(const ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string filepath\n"
"float64[] timestamps\n"
"string[] emotions\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.filepath);
      stream.next(m.timestamps);
      stream.next(m.emotions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlaySoundRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::PlaySoundRequest_<ContainerAllocator>& v)
  {
    s << indent << "filepath: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filepath);
    s << indent << "timestamps[]" << std::endl;
    for (size_t i = 0; i < v.timestamps.size(); ++i)
    {
      s << indent << "  timestamps[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.timestamps[i]);
    }
    s << indent << "emotions[]" << std::endl;
    for (size_t i = 0; i < v.emotions.size(); ++i)
    {
      s << indent << "  emotions[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.emotions[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_PLAYSOUNDREQUEST_H
