#ifndef CONTRAST_ADJUSTED_DECORATOR_
#define CONTRAST_ADJUSTED_DECORATOR_

#include "photo_viewer_decorator.h"
#include "photo_viewer.h"

class ConstrastAdjustedDecorator : public PhotoViewerDecorator
{
public:
  ConstrastAdjustedDecorator(PhotoViewer* photo_viewer) : PhotoViewerDecorator(photo_viewer) {}
  void ShowImage() override;
};

#endif