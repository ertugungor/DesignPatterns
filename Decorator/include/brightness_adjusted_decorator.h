#ifndef BRIGHTNESS_ADJUSTED_DECORATOR_
#define BRIGHTNESS_ADJUSTED_DECORATOR_

#include "photo_viewer_decorator.h"
#include "photo_viewer.h"

class BrightnessAdjustedDecorator : public PhotoViewerDecorator
{
public:
  BrightnessAdjustedDecorator(PhotoViewer* photo_viewer) : PhotoViewerDecorator(photo_viewer) {}
  void ShowImage() override;
};

#endif