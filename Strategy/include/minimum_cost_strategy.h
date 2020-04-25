#ifndef DESING_PATTERNS_STRATEGY_INCLUDE_MINIMUM_COST_STRATEGY_
#define DESING_PATTERNS_STRATEGY_INCLUDE_MINIMUM_COST_STRATEGY_

#include "shopping_strategy.h"
#include <iostream>

class MinimumCostStrategy : public ShoppingStrategy
{
public:
  ~MinimumCostStrategy()
  {
    std::cout << "minimum cost strategy dtor" << std::endl;
  }

  void DoShopping() const override
  {
    std::cout << "Doing shopping with minimum cost strategy!!" << std::endl;
  }
};

#endif
