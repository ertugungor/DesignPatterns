#ifndef FACTORY_METHOD_SMARTPHONE_H_
#define FACTORY_METHOD_SMARTPHONE_H_

#include <string>

class Smartphone {
public:
  virtual ~Smartphone() = default;
  virtual std::string GetInfo() const = 0;
};

#endif
