#ifndef ABSTRACTTECHFACTORY
#define ABSTRACTTECHFACTORY

#include <iostream>
#include "Smartphone.hpp"
#include "Notebook.hpp"

enum class SmartphoneType { FLAGSHIP, BUDGET};
enum class NotebookType { WORKSTATION, DAILY_USE};

class AbstractTechFactory
{
public:
  virtual Notebook* createNotebook(NotebookType type) const = 0;
  virtual Smartphone* createSmartphone(SmartphoneType type) const = 0;
  virtual ~AbstractTechFactory() {}
};

#endif