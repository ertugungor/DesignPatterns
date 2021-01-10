#include "tech_store.h"

int main()
{
  TechStore expensive_store(StoreType::EXPENSIVE);
  expensive_store.ShowProducts();  
  
  TechStore cheap_store(StoreType::CHEAP);
  cheap_store.ShowProducts();

  return 0;
}
