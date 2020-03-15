#include <iostream>
#include "graphics_library.h"
#include "graphics_library_proxy.h"
#include "client.h"

int main()
{
  IGraphicsLibrary* igraphics_library = new GraphicsLibraryProxy();
  Client client(igraphics_library);
  client.StartSimulation();
}
