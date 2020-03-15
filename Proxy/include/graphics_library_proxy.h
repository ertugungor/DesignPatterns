#ifndef GRAPHICS_LIBRARY_PROXY_
#define GRAPHICS_LIBRARY_PROXY_

#include "graphics_library.h"
#include "igraphics_library.h"

/* Proxy objects should implement the same 
 * interface as the original service does
 */
class GraphicsLibraryProxy : public IGraphicsLibrary
{
private:
  GraphicsLibrary* graphics_library_;

public:
  ~GraphicsLibraryProxy();
  void LoadScene() override;

};

#endif