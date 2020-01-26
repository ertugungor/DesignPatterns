#ifndef TECHSTORE
#define TECHSTORE

#include "AbstractTechFactory.hpp"
#include <iostream>

enum class StoreType { EXPENSIVE, CHEAP};
class TechStore
{
public:
  TechStore(const AbstractTechFactory& abstractTechFactory,
            StoreType storeType) : 
            storeFactory(abstractTechFactory),
            storeType(storeType) {};
  void showProducts();

private:
  const AbstractTechFactory& storeFactory;
  StoreType storeType;
};

#endif