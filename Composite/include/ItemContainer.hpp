#ifndef ITEM_CONTAINER 
#define ITEM_CONTAINER

#include <vector>
#include <iostream>
#include "Item.hpp"

class ItemContainer : public Item
{
public:
  virtual float getWeight();
  ItemContainer() 
  {
    weight = 0;
  }

  void addItem(Item* item);
  void removeItem(Item* item);

private:
  std::vector<Item*> listOfItems;

};

#endif