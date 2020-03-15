#ifndef GRAPHICS_LIBRARY_
#define GRAPHICS_LIBRARY_
#include "igraphics_library.h"

class GraphicsLibrary : public IGraphicsLibrary
{
public:
  ~GraphicsLibrary();
  void LoadScene() override;
};


#endif