#include "brightness_adjusted_decorator.h"
#include <iostream>

/* A decorator adds a new runtime behaviour and call
 * it's wrapped object's operation over Base Decorator.
 */
void BrightnessAdjustedDecorator::ShowImage()
{
  std::cout << "Brightness of the image has been adjusted." << std::endl;
  PhotoViewerDecorator::ShowImage();
}