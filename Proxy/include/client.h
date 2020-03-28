#ifndef CLIENT_
#define CLIENT_

#include "igraphics_library.h"

class Client
{
private:
  IGraphicsLibrary* graphics_library_;
public:
  ~Client();
  Client(IGraphicsLibrary* graphics_library);
  void StartSimulation();
};

#endif