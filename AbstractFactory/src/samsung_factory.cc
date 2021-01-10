#include "samsung_factory.h"
#include "notebook_pro.h"
#include "notebook_flash.h"
#include "galaxy_a50.h"
#include "galaxy_note10.h"
#include <iostream>
#include <memory>

std::unique_ptr<Notebook> SamsungFactory::CreateNotebook(NotebookType type) const
{
  if (type == NotebookType::DAILY_USE) {
    return std::make_unique<NotebookFlash>();
  }
  else if (type == NotebookType::WORKSTATION) {
    return std::make_unique<NotebookPro>();
  }
  return nullptr;
}

std::unique_ptr<Smartphone> SamsungFactory::CreateSmartphone(SmartphoneType type) const
{
  if (type == SmartphoneType::BUDGET) {
    return std::make_unique<GalaxyA50>();
  }
  else if (type == SmartphoneType::FLAGSHIP) {
    return std::make_unique<GalaxyNote10>();
  }
  return nullptr;
}
