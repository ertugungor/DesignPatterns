#ifndef SMARTPHONE_BUILDER_H_
#define SMARTPHONE_BUILDER_H_

#include "device_builder.h"
#include "smartphone.h"
#include <memory>

#include <iostream>

class SmartphoneBuilder : public DeviceBuilder {
public:
  SmartphoneBuilder() = default;
  ~SmartphoneBuilder() = default;
  void BuildScreen() override;
  void BuildCamera() override;
  void BuildCpu() override;
  void BuildGpu() override;
  std::unique_ptr<Smartphone> GetProduct();
private:
  Smartphone product_;
};

#endif