#ifndef DEVICE_PRODUCER_H_
#define DEVICE_PRODUCER_H_

#include "device_builder.h"
#include <memory>
#include <iostream>

enum class DeviceType{
  kPrototype, kComplete
};

class DeviceProducer{
public:
  DeviceProducer(std::shared_ptr<DeviceBuilder> builder) 
    : builder_{builder} {}
  ~DeviceProducer() = default;
  void MakeProduct(DeviceType type);
  void SetBuilder(std::shared_ptr<DeviceBuilder> builder) {
    builder_ = builder;
  }
private:
  std::shared_ptr<DeviceBuilder> builder_;
};


#endif