// Generated by gencpp from file roboy_simulation_msgs/GymGoalResponse.msg
// DO NOT EDIT!


#ifndef ROBOY_SIMULATION_MSGS_MESSAGE_GYMGOALRESPONSE_H
#define ROBOY_SIMULATION_MSGS_MESSAGE_GYMGOALRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboy_simulation_msgs
{
template <class ContainerAllocator>
struct GymGoalResponse_
{
  typedef GymGoalResponse_<ContainerAllocator> Type;

  GymGoalResponse_()
    : q()  {
    }
  GymGoalResponse_(const ContainerAllocator& _alloc)
    : q(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _q_type;
  _q_type q;





  typedef boost::shared_ptr< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GymGoalResponse_

typedef ::roboy_simulation_msgs::GymGoalResponse_<std::allocator<void> > GymGoalResponse;

typedef boost::shared_ptr< ::roboy_simulation_msgs::GymGoalResponse > GymGoalResponsePtr;
typedef boost::shared_ptr< ::roboy_simulation_msgs::GymGoalResponse const> GymGoalResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_simulation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_simulation_msgs': ['/home/sausy/Projects/Hand_openBionic/catkin/src/roboy_communication/roboy_simulation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ab94b9bcaaa12f74def43e4b33992df1";
  }

  static const char* value(const ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xab94b9bcaaa12f74ULL;
  static const uint64_t static_value2 = 0xdef43e4b33992df1ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_simulation_msgs/GymGoalResponse";
  }

  static const char* value(const ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] q\n"
"\n"
;
  }

  static const char* value(const ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.q);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GymGoalResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_simulation_msgs::GymGoalResponse_<ContainerAllocator>& v)
  {
    s << indent << "q[]" << std::endl;
    for (size_t i = 0; i < v.q.size(); ++i)
    {
      s << indent << "  q[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.q[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_SIMULATION_MSGS_MESSAGE_GYMGOALRESPONSE_H
