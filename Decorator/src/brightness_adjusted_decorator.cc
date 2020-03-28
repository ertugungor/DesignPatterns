#include "brightness_adjusted_decorator.h"
#include <iostream>

void BrightnessAdjustedDecorator::ShowImage()
{
  std::cout << "Brightness of the image has been adjusted." << std::endl;
  PhotoViewerDecorator::ShowImage();
}