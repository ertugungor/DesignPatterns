#include "client.h"
#include <iostream>

Client::Client(IGraphicsLibrary* igraphics_library) : 
    graphics_library_(igraphics_library)  {}

Client::~Client()
{
  delete graphics_library_;
}

void Client::StartSimulation()
{
  std::cout << "Starting simulation.." << std::endl;
  graphics_library_->LoadScene();
}