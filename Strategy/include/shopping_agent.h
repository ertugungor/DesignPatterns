#ifndef DESING_PATTERNS_STRATEGY_SRC_SHOPPING_AGENT_
#define DESING_PATTERNS_STRATEGY_SRC_SHOPPING_AGENT_

#include "shopping_strategy.h"

class ShoppingAgent
{
public:
  ShoppingAgent(ShoppingStrategy* shopping_strategy);
  ~ShoppingAgent();
  void DoShopping() const;

  /* Agent can change it's strategy at runtime */
  void SetStrategy(ShoppingStrategy *shopping_strategy);

private:
  /* Agent uses composition to hold a reference to a 
   * strategy interface. At runtime, true derived
   * class method will be called via inheritance 
   */ 
  ShoppingStrategy *shopping_strategy_;
};

#endif
