#include "TechStore.hpp"
#include "IPhoneXR.hpp"

void TechStore::showProducts()
{
  Smartphone* smartphone;
  Notebook* notebook;
  
  if (storeType == StoreType::EXPENSIVE)
  {
    smartphone = storeFactory.createSmartphone(SmartphoneType::FLAGSHIP);
    notebook = storeFactory.createNotebook(NotebookType::WORKSTATION);
  }
  else if (storeType == StoreType::CHEAP)
  {
    smartphone = storeFactory.createSmartphone(SmartphoneType::BUDGET);
    notebook = storeFactory.createNotebook(NotebookType::DAILY_USE);
  }
  else
  {
    std::cout << "Invalid store type" << std::endl;
    return;
  }
  std::cout << smartphone->getInfo() << std::endl;
  std::cout << notebook->getInfo() << std::endl;
  
  delete notebook;
  delete smartphone;
}