#ifndef IGRAPHICS_LIBRARY_
#define IGRAPHICS_LIBRARY_

#include <iostream>

class IGraphicsLibrary 
{
public:
  virtual ~IGraphicsLibrary()
  {
    std::cout << "IGraphicsLibrary dtor" << std::endl;
  }
  virtual void LoadScene() = 0;
};

#endif