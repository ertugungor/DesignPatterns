#include "apple_factory.h"
#include "macbook_air.h"
#include "macbook_pro.h"
#include "iphone_se.h"
#include "iphone_xr.h"
#include <iostream>
#include <memory>

std::unique_ptr<Notebook> AppleFactory::CreateNotebook(NotebookType type) const
{
  if (type == NotebookType::DAILY_USE) {
    return std::make_unique<MacbookAir>();
  }
  else if (type == NotebookType::WORKSTATION) {
    return std::make_unique<MacbookPro>();
  }
  return nullptr;
}

std::unique_ptr<Smartphone> AppleFactory::CreateSmartphone(SmartphoneType type) const
{
  if (type == SmartphoneType::BUDGET) {
    return std::make_unique<IPhoneSE>();
  }
  else if (type == SmartphoneType::FLAGSHIP) {
    return std::make_unique<IPhoneXR>();
  }
  return nullptr;
}
