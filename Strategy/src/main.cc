#include "shopping_agent.h"
#include "minimum_cost_strategy.h"
#include "minimum_time_strategy.h"

int main()
{
  ShoppingStrategy *min_cost_shopping_strategy = new MinimumCostStrategy();
  ShoppingAgent shopping_agent(min_cost_shopping_strategy);
  shopping_agent.DoShopping();

  ShoppingStrategy *min_time_shopping_strategy = new MinimumTimeStrategy();
  shopping_agent.SetStrategy(min_time_shopping_strategy);
  shopping_agent.DoShopping();
}
