#ifndef ABSTRACT_FACTORY_TECH_STORE_H_
#define ABSTRACT_FACTORY_TECH_STORE_H_

#include "tech_factory.h"
#include "samsung_factory.h"
#include "apple_factory.h"

enum class StoreType {EXPENSIVE, CHEAP};

class TechStore {
public:
  TechStore(StoreType store_type, std::unique_ptr<TechFactory> factory);
  void ShowProducts();

private:
  StoreType store_type_;
  std::unique_ptr<TechFactory> tech_factory_ = nullptr;
};

#endif