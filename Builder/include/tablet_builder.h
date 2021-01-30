#ifndef TABLET_BUILDER_H_
#define TABLET_BUILDER_H_

#include "device_builder.h"
#include "tablet.h"
#include <memory>

#include <iostream>

class TabletBuilder : public DeviceBuilder {
public:
  TabletBuilder() = default;
  ~TabletBuilder() = default;
  void BuildScreen() override;
  void BuildCamera() override;
  void BuildCpu() override;
  void BuildGpu() override;
  std::unique_ptr<Tablet> GetProduct();
private:
  Tablet product_;
};

#endif