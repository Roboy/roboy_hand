// Generated by gencpp from file roboy_middleware_msgs/ADCvalue.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_ADCVALUE_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_ADCVALUE_H


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
struct ADCvalue_
{
  typedef ADCvalue_<ContainerAllocator> Type;

  ADCvalue_()
    : id(0)
    , adc_value()
    , load()  {
    }
  ADCvalue_(const ContainerAllocator& _alloc)
    : id(0)
    , adc_value(_alloc)
    , load(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _id_type;
  _id_type id;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _adc_value_type;
  _adc_value_type adc_value;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _load_type;
  _load_type load;





  typedef boost::shared_ptr< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> const> ConstPtr;

}; // struct ADCvalue_

typedef ::roboy_middleware_msgs::ADCvalue_<std::allocator<void> > ADCvalue;

typedef boost::shared_ptr< ::roboy_middleware_msgs::ADCvalue > ADCvaluePtr;
typedef boost::shared_ptr< ::roboy_middleware_msgs::ADCvalue const> ADCvalueConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f98e33d20942e68bbee66ab1b8b068eb";
  }

  static const char* value(const ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf98e33d20942e68bULL;
  static const uint64_t static_value2 = 0xbee66ab1b8b068ebULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_middleware_msgs/ADCvalue";
  }

  static const char* value(const ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 id\n"
"int32[] adc_value\n"
"float32[] load\n"
;
  }

  static const char* value(const ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.adc_value);
      stream.next(m.load);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ADCvalue_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_middleware_msgs::ADCvalue_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "adc_value[]" << std::endl;
    for (size_t i = 0; i < v.adc_value.size(); ++i)
    {
      s << indent << "  adc_value[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.adc_value[i]);
    }
    s << indent << "load[]" << std::endl;
    for (size_t i = 0; i < v.load.size(); ++i)
    {
      s << indent << "  load[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.load[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_ADCVALUE_H
