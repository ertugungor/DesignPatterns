#include "smartphone_builder.h"
#include <iostream>

void SmartphoneBuilder::BuildScreen() {
  product_.AddFeature("Screen size 6.5");
}

void SmartphoneBuilder::BuildCamera() {
  product_.AddFeature("Powerful camera");
}

void SmartphoneBuilder::BuildCpu() {
  product_.AddFeature("Mediocre CPU");
}

void SmartphoneBuilder::BuildGpu() {
  product_.AddFeature("Powerful GPU");
}

std::unique_ptr<Smartphone> SmartphoneBuilder::GetProduct() {
  return std::make_unique<Smartphone>(product_);
}
