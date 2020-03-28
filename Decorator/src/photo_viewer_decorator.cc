#include "photo_viewer_decorator.h"

/* Base decorator just delegates the
 * operation to common interface 
 */
void PhotoViewerDecorator::ShowImage()
{
  this->_photo_viewer->ShowImage();
}