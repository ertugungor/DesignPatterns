#include "graphics_library.h"
#include <iostream>

GraphicsLibrary::~GraphicsLibrary()
{
  std::cout << "GraphicsLibrary dtor" << std::endl;
}

void GraphicsLibrary::LoadScene()
{
  std::cout << "Graphics library is loading scene.." << std::endl;
}