#ifndef PHOTO_VIEW_DECORATOR_
#define PHOTO_VIEW_DECORATOR_

#include "photo_viewer.h"

class PhotoViewerDecorator : public PhotoViewer
{

public:
  PhotoViewerDecorator(PhotoViewer* photo_viewer) : _photo_viewer(photo_viewer) {}
  void ShowImage() override;

private:
  PhotoViewer* _photo_viewer;

};
#endif