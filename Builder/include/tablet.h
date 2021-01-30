#ifndef TABLET_H_
#define TABLET_H_

#include <string>
#include <vector>

#include <iostream>


class Tablet {
public:
  Tablet() = default;
  ~Tablet() = default;
  void AddFeature(const std::string&);
  void ListFeatures();
private:
  std::vector<std::string> features_;
};

#endif