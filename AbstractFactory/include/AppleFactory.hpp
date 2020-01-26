#include "AbstractTechFactory.hpp"
#include "MacbookAir.hpp"
#include "MacbookPro.hpp"
#include "IPhoneSE.hpp"
#include "IPhoneXR.hpp"

class AppleFactory : public AbstractTechFactory
{
public:
  virtual Notebook* createNotebook(NotebookType type) const override
  {
    if (type == NotebookType::DAILY_USE)
    {
      return new MacbookAir();
    }
    else if (type == NotebookType::WORKSTATION)
    {
      return new MacbookPro();
    }
    else
    {
      std::cout << "Invalid Notebook Type" << std::endl;
      return nullptr;
    }
  }

  virtual Smartphone* createSmartphone(SmartphoneType type) const override
  {
    if (type == SmartphoneType::BUDGET)
    {
      return new IPhoneSE();
    }
    else if (type == SmartphoneType::FLAGSHIP)
    {
      return new IPhoneXR();
    }
    else
    {
      std::cout << "Invalid Smartphone Type" << std::endl;
      return nullptr;
    }
  }
};
