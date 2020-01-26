#ifndef MACBOOKPRO
#define MACBOOKPRO

#include "Notebook.hpp"
#include <iostream>

using namespace std;

class MacbookPro : public Notebook
{
public:
  virtual string getInfo() override
  {
    return string("MacbookPro uses OS X as operating system"); 
  }
};

#endif