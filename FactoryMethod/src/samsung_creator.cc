#include "samsung_creator.h"
#include "smartphone.h"
#include "galaxy_note10.h"
#include <memory>

std::unique_ptr<Smartphone> SamsungCreator::CreateSmartphone() const {
  return std::make_unique<GalaxyNote10>();
}
