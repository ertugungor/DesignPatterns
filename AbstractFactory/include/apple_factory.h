#ifndef APPLE_FACTORY_H_
#define APPLE_FACTORY_H_

#include "tech_factory.h"

class AppleFactory : public TechFactory {
public:
  std::unique_ptr<Notebook> CreateNotebook(NotebookType type) const override;
  std::unique_ptr<Smartphone> CreateSmartphone(SmartphoneType type) const override;
  virtual ~AppleFactory() = default;
};

#endif