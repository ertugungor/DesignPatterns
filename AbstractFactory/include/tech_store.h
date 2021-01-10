#ifndef TECH_STORE_H_
#define TECH_STORE_H_

#include "tech_factory.h"
#include "samsung_factory.h"
#include "apple_factory.h"

enum class StoreType {EXPENSIVE, CHEAP};

class TechStore {
public:
  TechStore(StoreType store_type) : store_type_(store_type) {};
  void ShowProducts();

private:
  StoreType store_type_;
  SamsungFactory samsung_factory_;
  AppleFactory apple_factory_;
};

#endif