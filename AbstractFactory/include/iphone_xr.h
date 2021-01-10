#ifndef IPHONE_XR_H_
#define IPHONE_XR_H_

#include "smartphone.h"
#include <string>

class IPhoneXR : public Smartphone {
public:
  virtual std::string GetInfo() const override;
};

#endif