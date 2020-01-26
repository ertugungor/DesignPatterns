#ifndef GALAXYA50
#define GALAXYA50

#include "Smartphone.hpp"
#include <iostream>

using namespace std;

class GalaxyA50 : public Smartphone
{
public:
  virtual string getInfo() override
  {
    return string("GalaxyA50 uses Android as operating system"); 
  }
};

#endif