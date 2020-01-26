#ifndef IPHONEXR
#define IPHONEXR

#include "Smartphone.hpp"
#include <iostream>

using namespace std;

class IPhoneXR : public Smartphone
{
public:
  virtual string getInfo() override
  {
    return string("IPhoneXR uses iOS as operating system"); 
  }
};

#endif