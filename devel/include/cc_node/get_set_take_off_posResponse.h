// Generated by gencpp from file cc_node/get_set_take_off_posResponse.msg
// DO NOT EDIT!


#ifndef CC_NODE_MESSAGE_GET_SET_TAKE_OFF_POSRESPONSE_H
#define CC_NODE_MESSAGE_GET_SET_TAKE_OFF_POSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cc_node
{
template <class ContainerAllocator>
struct get_set_take_off_posResponse_
{
  typedef get_set_take_off_posResponse_<ContainerAllocator> Type;

  get_set_take_off_posResponse_()
    : gps_sats(0)
    , lat(0.0)
    , lon(0.0)
    , heading(0)
    , alt(0)
    , system_status(0)  {
    }
  get_set_take_off_posResponse_(const ContainerAllocator& _alloc)
    : gps_sats(0)
    , lat(0.0)
    , lon(0.0)
    , heading(0)
    , alt(0)
    , system_status(0)  {
  (void)_alloc;
    }



   typedef int32_t _gps_sats_type;
  _gps_sats_type gps_sats;

   typedef float _lat_type;
  _lat_type lat;

   typedef float _lon_type;
  _lon_type lon;

   typedef int32_t _heading_type;
  _heading_type heading;

   typedef int32_t _alt_type;
  _alt_type alt;

   typedef int64_t _system_status_type;
  _system_status_type system_status;





  typedef boost::shared_ptr< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> const> ConstPtr;

}; // struct get_set_take_off_posResponse_

typedef ::cc_node::get_set_take_off_posResponse_<std::allocator<void> > get_set_take_off_posResponse;

typedef boost::shared_ptr< ::cc_node::get_set_take_off_posResponse > get_set_take_off_posResponsePtr;
typedef boost::shared_ptr< ::cc_node::get_set_take_off_posResponse const> get_set_take_off_posResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cc_node

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9cb4460c3feccef855e07eaec0608a98";
  }

  static const char* value(const ::cc_node::get_set_take_off_posResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9cb4460c3feccef8ULL;
  static const uint64_t static_value2 = 0x55e07eaec0608a98ULL;
};

template<class ContainerAllocator>
struct DataType< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc_node/get_set_take_off_posResponse";
  }

  static const char* value(const ::cc_node::get_set_take_off_posResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 gps_sats\n\
float32 lat\n\
float32 lon\n\
int32 heading\n\
int32 alt\n\
int64 system_status\n\
\n\
";
  }

  static const char* value(const ::cc_node::get_set_take_off_posResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gps_sats);
      stream.next(m.lat);
      stream.next(m.lon);
      stream.next(m.heading);
      stream.next(m.alt);
      stream.next(m.system_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_set_take_off_posResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cc_node::get_set_take_off_posResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cc_node::get_set_take_off_posResponse_<ContainerAllocator>& v)
  {
    s << indent << "gps_sats: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gps_sats);
    s << indent << "lat: ";
    Printer<float>::stream(s, indent + "  ", v.lat);
    s << indent << "lon: ";
    Printer<float>::stream(s, indent + "  ", v.lon);
    s << indent << "heading: ";
    Printer<int32_t>::stream(s, indent + "  ", v.heading);
    s << indent << "alt: ";
    Printer<int32_t>::stream(s, indent + "  ", v.alt);
    s << indent << "system_status: ";
    Printer<int64_t>::stream(s, indent + "  ", v.system_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CC_NODE_MESSAGE_GET_SET_TAKE_OFF_POSRESPONSE_H