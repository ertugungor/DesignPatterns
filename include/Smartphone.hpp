#ifndef SMARTPHONE
#define SMARTPHONE

#include <iostream>
#include <string>

using namespace std;

class Smartphone
{
public:
  virtual ~Smartphone() {};
  virtual string getInfo() = 0;
};

#endif