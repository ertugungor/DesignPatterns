#ifndef GALAXY_NOTE10_H_
#define GALAXY_NOTE10_H_

#include "smartphone.h"
#include <string>

class GalaxyNote10 : public Smartphone {
public:
  virtual std::string GetInfo() const override;
};

#endif