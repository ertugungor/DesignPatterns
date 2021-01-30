#include "tablet.h"
#include <string>
#include <iostream>

void Tablet::AddFeature(const std::string& feature) {
  features_.push_back(feature);
}

void Tablet::ListFeatures() {
  for(const auto& feature : features_) {
    std::cout << feature << std::endl;
  }
}
