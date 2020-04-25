#include "shopping_agent.h"

ShoppingAgent::ShoppingAgent(ShoppingStrategy* shopping_strategy)
  : shopping_strategy_(shopping_strategy) {}

ShoppingAgent::~ShoppingAgent()
{
  delete shopping_strategy_;
}

/* Agent dispatches shopping action to strategy object */
void ShoppingAgent::DoShopping() const
{
  shopping_strategy_->DoShopping();
}

void ShoppingAgent::SetStrategy(ShoppingStrategy *shopping_strategy)
{
  std::cout << "Changing strategy to " << typeid(*shopping_strategy).name() << std::endl;
  delete shopping_strategy_;
  shopping_strategy_ = shopping_strategy;
}
