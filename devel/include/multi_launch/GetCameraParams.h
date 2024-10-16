// Generated by gencpp from file multi_launch/GetCameraParams.msg
// DO NOT EDIT!


#ifndef MULTI_LAUNCH_MESSAGE_GETCAMERAPARAMS_H
#define MULTI_LAUNCH_MESSAGE_GETCAMERAPARAMS_H

#include <ros/service_traits.h>


#include <multi_launch/GetCameraParamsRequest.h>
#include <multi_launch/GetCameraParamsResponse.h>


namespace multi_launch
{

struct GetCameraParams
{

typedef GetCameraParamsRequest Request;
typedef GetCameraParamsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCameraParams
} // namespace multi_launch


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::multi_launch::GetCameraParams > {
  static const char* value()
  {
    return "06621ca772ba4ac96475002c209b1554";
  }

  static const char* value(const ::multi_launch::GetCameraParams&) { return value(); }
};

template<>
struct DataType< ::multi_launch::GetCameraParams > {
  static const char* value()
  {
    return "multi_launch/GetCameraParams";
  }

  static const char* value(const ::multi_launch::GetCameraParams&) { return value(); }
};


// service_traits::MD5Sum< ::multi_launch::GetCameraParamsRequest> should match
// service_traits::MD5Sum< ::multi_launch::GetCameraParams >
template<>
struct MD5Sum< ::multi_launch::GetCameraParamsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::multi_launch::GetCameraParams >::value();
  }
  static const char* value(const ::multi_launch::GetCameraParamsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::multi_launch::GetCameraParamsRequest> should match
// service_traits::DataType< ::multi_launch::GetCameraParams >
template<>
struct DataType< ::multi_launch::GetCameraParamsRequest>
{
  static const char* value()
  {
    return DataType< ::multi_launch::GetCameraParams >::value();
  }
  static const char* value(const ::multi_launch::GetCameraParamsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::multi_launch::GetCameraParamsResponse> should match
// service_traits::MD5Sum< ::multi_launch::GetCameraParams >
template<>
struct MD5Sum< ::multi_launch::GetCameraParamsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::multi_launch::GetCameraParams >::value();
  }
  static const char* value(const ::multi_launch::GetCameraParamsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::multi_launch::GetCameraParamsResponse> should match
// service_traits::DataType< ::multi_launch::GetCameraParams >
template<>
struct DataType< ::multi_launch::GetCameraParamsResponse>
{
  static const char* value()
  {
    return DataType< ::multi_launch::GetCameraParams >::value();
  }
  static const char* value(const ::multi_launch::GetCameraParamsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MULTI_LAUNCH_MESSAGE_GETCAMERAPARAMS_H
