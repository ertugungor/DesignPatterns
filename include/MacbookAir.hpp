#ifndef MACBOOKAIR
#define MACBOOKAIR

#include "Notebook.hpp"
#include <iostream>

using namespace std;

class MacbookAir : public Notebook
{
public:
  virtual string getInfo()
  {
    return string("MacbookAir uses OS X as operating system"); 
  }
};

#endif