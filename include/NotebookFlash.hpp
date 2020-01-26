#ifndef NOTEBOOKFLASH
#define NOTEBOOKFLASH

#include "Notebook.hpp"
#include <iostream>

using namespace std;

class NotebookFlash : public Notebook
{
public:
  virtual string getInfo() override
  {
    return string("NotebookFlash uses Windows as operating system"); 
  }
};

#endif