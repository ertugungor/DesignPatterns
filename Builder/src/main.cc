#include <iostream>
#include "smartphone_builder.h"
#include "tablet_builder.h"
#include "device_producer.h"

int main()
{
  auto smartphone_builder = std::make_shared<SmartphoneBuilder>();
  DeviceProducer producer{smartphone_builder};
  producer.MakeProduct(DeviceType::kComplete);
  smartphone_builder->GetProduct()->ListFeatures();

  auto tablet_builder = std::make_shared<TabletBuilder>();
  producer.SetBuilder(tablet_builder);
  producer.MakeProduct(DeviceType::kComplete);
  tablet_builder->GetProduct()->ListFeatures();
  
  return 0;
}
