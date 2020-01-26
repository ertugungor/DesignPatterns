#include "AbstractTechFactory.hpp"
#include "NotebookPro.hpp"
#include "NotebookFlash.hpp"
#include "GalaxyA50.hpp"
#include "GalaxyNote10.hpp"

class SamsungFactory : public AbstractTechFactory
{
public:
  virtual Notebook* createNotebook(NotebookType type) const override
  {
    if (type == NotebookType::DAILY_USE)
    {
      return new NotebookFlash();
    }
    else if (type == NotebookType::WORKSTATION)
    {
      return new NotebookPro();
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
      return new GalaxyA50();
    }
    else if (type == SmartphoneType::FLAGSHIP)
    {
      return new GalaxyNote10();
    }
    else
    {
      std::cout << "Invalid Smartphone Type" << std::endl;
      return nullptr;
    }
  }
};
