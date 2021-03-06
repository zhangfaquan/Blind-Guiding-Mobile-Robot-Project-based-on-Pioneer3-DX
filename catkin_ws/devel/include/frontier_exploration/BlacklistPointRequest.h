// Generated by gencpp from file frontier_exploration/BlacklistPointRequest.msg
// DO NOT EDIT!


#ifndef FRONTIER_EXPLORATION_MESSAGE_BLACKLISTPOINTREQUEST_H
#define FRONTIER_EXPLORATION_MESSAGE_BLACKLISTPOINTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace frontier_exploration
{
template <class ContainerAllocator>
struct BlacklistPointRequest_
{
  typedef BlacklistPointRequest_<ContainerAllocator> Type;

  BlacklistPointRequest_()
    : point()  {
    }
  BlacklistPointRequest_(const ContainerAllocator& _alloc)
    : point(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _point_type;
  _point_type point;




  typedef boost::shared_ptr< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BlacklistPointRequest_

typedef ::frontier_exploration::BlacklistPointRequest_<std::allocator<void> > BlacklistPointRequest;

typedef boost::shared_ptr< ::frontier_exploration::BlacklistPointRequest > BlacklistPointRequestPtr;
typedef boost::shared_ptr< ::frontier_exploration::BlacklistPointRequest const> BlacklistPointRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace frontier_exploration

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'frontier_exploration': ['/home/hunter/catkin_ws/src/frontier_exploration/msg', '/home/hunter/catkin_ws/devel/share/frontier_exploration/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg'], 'move_base_msgs': ['/opt/ros/indigo/share/move_base_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a7c84ff13976aa04656e56e300124444";
  }

  static const char* value(const ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa7c84ff13976aa04ULL;
  static const uint64_t static_value2 = 0x656e56e300124444ULL;
};

template<class ContainerAllocator>
struct DataType< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "frontier_exploration/BlacklistPointRequest";
  }

  static const char* value(const ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point point\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BlacklistPointRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::frontier_exploration::BlacklistPointRequest_<ContainerAllocator>& v)
  {
    s << indent << "point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FRONTIER_EXPLORATION_MESSAGE_BLACKLISTPOINTREQUEST_H
