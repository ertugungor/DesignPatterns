#ifndef DESING_PATTERNS_STRATEGY_INCLUDE_MINIMUM_TIME_STRATEGY_
#define DESING_PATTERNS_STRATEGY_INCLUDE_MINIMUM_TIME_STRATEGY_

#include "shopping_strategy.h"
#include <iostream>

class MinimumTimeStrategy : public ShoppingStrategy
{
public:
  ~MinimumTimeStrategy()
  {
    std::cout << "minimum time strategy dtor" << std::endl;
  }

  void DoShopping() const override
  {
    std::cout << "Doing shopping with minimum time strategy!!" << std::endl;
  }
};

#endif
