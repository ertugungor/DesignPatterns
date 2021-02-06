#ifndef ABSTRACT_FACTORY_SAMSUNG_FACTORY_H_
#define ABSTRACT_FACTORY_SAMSUNG_FACTORY_H_

#include "tech_factory.h"

class SamsungFactory : public TechFactory {
public:
  std::unique_ptr<Notebook> CreateNotebook(NotebookType type) const override;
  std::unique_ptr<Smartphone> CreateSmartphone(SmartphoneType type) const override;
  virtual ~SamsungFactory() = default;
};

#endif
