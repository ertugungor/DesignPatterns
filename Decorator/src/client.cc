#include <iostream>
#include "photo_viewer_decorator.h"
#include "basic_photo_viewer.h"
#include "contrast_adjusted_decorator.h"
#include "brightness_adjusted_decorator.h"

int main()
{
  PhotoViewer* brightness_contrast_adjusted_viewer = new BrightnessAdjustedDecorator(new ConstrastAdjustedDecorator(new BasicPhotoViewer()));
  brightness_contrast_adjusted_viewer->ShowImage();
}