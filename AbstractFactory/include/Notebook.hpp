#ifndef NOTEBOOK
#define NOTEBOOK

#include <iostream>
#include <string>

using namespace std;

class Notebook
{
public:
  virtual ~Notebook() {};
  virtual string getInfo() = 0;
};

#endif