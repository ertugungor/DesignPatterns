#ifndef FACTORY_METHOD_GALAXY_NOTE10_H_
#define FACTORY_METHOD_GALAXY_NOTE10_H_

#include "smartphone.h"
#include <string>

class GalaxyNote10 : public Smartphone {
public:
  virtual std::string GetInfo() const override;
};

#endif
