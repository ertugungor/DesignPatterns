#include "contrast_adjusted_decorator.h"
#include <iostream>

void ConstrastAdjustedDecorator::ShowImage()
{
  std::cout << "Contrast of the image has been adjusted." << std::endl;
  PhotoViewerDecorator::ShowImage();
}