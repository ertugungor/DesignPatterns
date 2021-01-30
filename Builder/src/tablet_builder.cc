#include "tablet_builder.h"
#include <iostream>

void TabletBuilder::BuildScreen() {
  product_.AddFeature("Screen sized 10.5");
}

void TabletBuilder::BuildCamera() {
  product_.AddFeature("Mediocre Camera");
}

void TabletBuilder::BuildCpu() {
  product_.AddFeature("Powerful CPU");
}

void TabletBuilder::BuildGpu() {
  product_.AddFeature("Powerful GPU");
}

std::unique_ptr<Tablet> TabletBuilder::GetProduct() {
  return std::make_unique<Tablet>(product_);
}
