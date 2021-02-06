#ifndef FACTORY_METHOD_APPLE_CREATOR_H_
#define FACTORY_METHOD_APPLE_CREATOR_H_

#include "smartphone_creator.h"
#include <memory>

class AppleCreator : public SmartphoneCreator {
public:
  std::unique_ptr<Smartphone> CreateSmartphone() const override;
};

#endif
