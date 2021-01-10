#ifndef SMARTPHONE_H_
#define SMARTPHONE_H_

#include <string>

class Smartphone {
public:
  virtual ~Smartphone() = default;
  virtual std::string GetInfo() const = 0;
};

#endif