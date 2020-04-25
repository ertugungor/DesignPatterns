#ifndef DESING_PATTERNS_STRATEGY_INCLUDE_SHOPPING_STRATEGY
#define DESING_PATTERNS_STRATEGY_INCLUDE_SHOPPING_STRATEGY

#include <iostream>

class ShoppingStrategy
{
public:
  virtual ~ShoppingStrategy()
  {
    std::cout << "Shopping strategy dtor" << std::endl;
  }
  virtual void DoShopping() const = 0;
};

#endif
