#ifndef GALAXY_A50_H
#define GALAXY_A50_H

#include "smartphone.h"
#include <string>

class GalaxyA50 : public Smartphone {
public:
  std::string GetInfo() const override;
};

#endif