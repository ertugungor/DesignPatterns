#ifndef IPHONESE
#define IPHONESE

#include "Smartphone.hpp"
#include <iostream>

using namespace std;

class IPhoneSE : public Smartphone
{
public:
  virtual string getInfo() override
  {
    return string("IPhoneSE uses iOS as operating system"); 
  }
};

#endif