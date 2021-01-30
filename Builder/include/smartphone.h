#ifndef SMARTPHONE_H_
#define SMARTPHONE_H_

#include <string>
#include <vector>

#include <iostream>


class Smartphone {
public:
  Smartphone() = default;
  ~Smartphone() = default;
  void AddFeature(const std::string&);
  void ListFeatures();
private:
  std::vector<std::string> features_;
};

#endif