#ifndef IPHONE_SE_H_
#define IPHONE_SE_H_

#include "smartphone.h"
#include <string>

class IPhoneSE : public Smartphone {
public:
  virtual std::string GetInfo() const override;
};

#endif