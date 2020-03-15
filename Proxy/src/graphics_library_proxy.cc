#include "graphics_library_proxy.h"

GraphicsLibraryProxy::~GraphicsLibraryProxy()
{
  std::cout << "GraphicsLibraryProxy dtor" << std::endl;
}

void GraphicsLibraryProxy::LoadScene()
{
  /* This is the key point of Proxy pattern. Assuming
   * GraphicsLibrary objects are expensive to create
   * proxy gives us a chance to initialize the expensive 
   * objects when they are really needed (Lazy Instantiation) 
   * 
   * Also, there are other kind of functionalities proxy can offer
   * such as caching some results after the use of service (GraphicsLibrary 
   * in this example) in case of the original service implementation does
   * not have this capability.
   * 
   * In a general manner, it can be think of extra functionalities we 
   * want to add before and/or after the use of a service.
   */
  
  if (graphics_library_ == nullptr)
  {
    graphics_library_ = new GraphicsLibrary();
  }
  graphics_library_->LoadScene();
}