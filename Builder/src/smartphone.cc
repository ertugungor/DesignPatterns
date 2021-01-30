#include "smartphone.h"
#include <string>
#include <iostream>

void Smartphone::AddFeature(const std::string& feature) {
  features_.push_back(feature);
}

void Smartphone::ListFeatures() {
  for(const auto& feature : features_) {
    std::cout << feature << std::endl;
  }
}
