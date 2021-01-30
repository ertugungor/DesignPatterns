#include "device_producer.h"

void DeviceProducer::MakeProduct(DeviceType type) {
  builder_->BuildCpu();
  builder_->BuildScreen();
  if (type == DeviceType::kPrototype) {
    return;
  } else if (type == DeviceType::kComplete) {
    builder_->BuildGpu();
    builder_->BuildCamera();
  }
}