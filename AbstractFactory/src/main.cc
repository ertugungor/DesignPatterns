#include "tech_store.h"
#include <iostream>

int main()
{
  TechStore expensive_apple_store(StoreType::EXPENSIVE, std::make_unique<AppleFactory>());
  std::cout << "An Apple store selling expensive product range:" << std::endl;
  expensive_apple_store.ShowProducts();  
  TechStore cheap_apple_store(StoreType::CHEAP, std::make_unique<AppleFactory>());
  std::cout << "An Apple store selling cheap product range:" << std::endl;
  cheap_apple_store.ShowProducts();  

  TechStore expensive_samsung_store(StoreType::EXPENSIVE, std::make_unique<SamsungFactory>());
  std::cout << "A Samsung store selling expensive product range:" << std::endl;
  expensive_samsung_store.ShowProducts();  
  std::cout << "A Samsung store selling cheap product range:" << std::endl;
  TechStore cheap_samsung_store(StoreType::CHEAP, std::make_unique<SamsungFactory>());
  cheap_samsung_store.ShowProducts();  
  

  return 0;
}
