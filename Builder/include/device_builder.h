#ifndef DEVICE_BUILDER_H_
#define DEVICE_BUILDER_H_

class DeviceBuilder{
public:
  DeviceBuilder() = default;
  virtual ~DeviceBuilder() = default;
  virtual void BuildScreen() = 0;
  virtual void BuildCamera() = 0;
  virtual void BuildCpu() = 0;
  virtual void BuildGpu() = 0;
};


#endif