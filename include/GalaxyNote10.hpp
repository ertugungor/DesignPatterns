#ifndef GALAXYNOTE10
#define GALAXYNOTE10

#include "Smartphone.hpp"
#include <iostream>

using namespace std;

class GalaxyNote10 : public Smartphone
{
public:
  virtual string getInfo() override
  {
    return string("GalaxyNote10 uses Android as operating system"); 
  }
};

#endif