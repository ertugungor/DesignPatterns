#include "TechStore.hpp"
#include "AppleFactory.hpp"
#include "SamsungFactory.hpp"

int main()
{
  AppleFactory appleFactory;
  TechStore expensiveAppleStore(appleFactory, StoreType::EXPENSIVE);
  expensiveAppleStore.showProducts();  

  SamsungFactory samsungFactory;
  TechStore expensiveSamsungStore(samsungFactory, StoreType::EXPENSIVE);
  expensiveSamsungStore.showProducts();  

  return 0;
}
