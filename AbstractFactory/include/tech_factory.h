#ifndef TECH_FACTORY_H_
#define TECH_FACTORY_H_

#include "smartphone.h"
#include "notebook.h"
#include <memory>

enum class SmartphoneType {FLAGSHIP, BUDGET};
enum class NotebookType {WORKSTATION, DAILY_USE};

class TechFactory
{
public:
  virtual std::unique_ptr<Notebook> CreateNotebook(NotebookType type) const = 0;
  virtual std::unique_ptr<Smartphone> CreateSmartphone(SmartphoneType type) const = 0;
  virtual ~TechFactory() = default;
};

#endif