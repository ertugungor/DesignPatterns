#include "apple_creator.h"
#include "smartphone.h"
#include "iphone_xr.h"
#include <memory>

std::unique_ptr<Smartphone> AppleCreator::CreateSmartphone() const {
  return std::make_unique<IPhoneXR>();
}
