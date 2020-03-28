#include "contrast_adjusted_decorator.h"
#include <iostream>

/* A decorator adds a new runtime behaviour and call
 * it's wrapped object's operation over Base Decorator.
 */
void ConstrastAdjustedDecorator::ShowImage()
{
  std::cout << "Contrast of the image has been adjusted." << std::endl;
  PhotoViewerDecorator::ShowImage();
}