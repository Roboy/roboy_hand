// Generated by gencpp from file roboy_control_msgs/MoveEndEffectorResult.msg
// DO NOT EDIT!


#ifndef ROBOY_CONTROL_MSGS_MESSAGE_MOVEENDEFFECTORRESULT_H
#define ROBOY_CONTROL_MSGS_MESSAGE_MOVEENDEFFECTORRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboy_control_msgs
{
template <class ContainerAllocator>
struct MoveEndEffectorResult_
{
  typedef MoveEndEffectorResult_<ContainerAllocator> Type;

  MoveEndEffectorResult_()
    : q()  {
    }
  MoveEndEffectorResult_(const ContainerAllocator& _alloc)
    : q(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _q_type;
  _q_type q;





  typedef boost::shared_ptr< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> const> ConstPtr;

}; // struct MoveEndEffectorResult_

typedef ::roboy_control_msgs::MoveEndEffectorResult_<std::allocator<void> > MoveEndEffectorResult;

typedef boost::shared_ptr< ::roboy_control_msgs::MoveEndEffectorResult > MoveEndEffectorResultPtr;
typedef boost::shared_ptr< ::roboy_control_msgs::MoveEndEffectorResult const> MoveEndEffectorResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'roboy_control_msgs': ['/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_communication/roboy_control_msgs/msg', '/home/sausy/Projects/Hand_openBionic/software/catkin/devel/share/roboy_control_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2c86974d06038f368935285057a53691";
  }

  static const char* value(const ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2c86974d06038f36ULL;
  static const uint64_t static_value2 = 0x8935285057a53691ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_control_msgs/MoveEndEffectorResult";
  }

  static const char* value(const ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"float32[] q\n"
;
  }

  static const char* value(const ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.q);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveEndEffectorResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_control_msgs::MoveEndEffectorResult_<ContainerAllocator>& v)
  {
    s << indent << "q[]" << std::endl;
    for (size_t i = 0; i < v.q.size(); ++i)
    {
      s << indent << "  q[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.q[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_CONTROL_MSGS_MESSAGE_MOVEENDEFFECTORRESULT_H
