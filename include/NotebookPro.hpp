#ifndef NOTEBOOKPRO
#define NOTEBOOKPRO

#include "Notebook.hpp"
#include <iostream>

using namespace std;

class NotebookPro : public Notebook
{
public:
  virtual string getInfo() override
  {
    return string("NotebookPro uses Windows as operating system"); 
  }
};

#endif