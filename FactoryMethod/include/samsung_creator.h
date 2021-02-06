#ifndef FACTORY_METHOD_SAMSUNG_CREATOR_H_
#define FACTORY_METHOD_SAMSUNG_CREATOR_H_

#include "smartphone_creator.h"
#include <memory>

class SamsungCreator : public SmartphoneCreator {
public:
  std::unique_ptr<Smartphone> CreateSmartphone() const override;
};

#endif
