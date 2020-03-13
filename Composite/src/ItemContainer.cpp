#include "ItemContainer.hpp"

float ItemContainer::getWeight()
{
  if (weight == 0)
  {
    for(Item *item : listOfItems)
    {
      weight += item->getWeight();
    }
  }
  return weight;
}

void ItemContainer::addItem(Item* item)
{
  listOfItems.push_back(item);
}

void ItemContainer::removeItem(Item* item)
{
  // check if container contains the item
  const auto itemPosition = std::find(listOfItems.begin(), listOfItems.end(), item);
  if(itemPosition != listOfItems.end()) 
  {
    listOfItems.erase(itemPosition);
  }
  else
  {
    std::cout << "The item to be removed is not in the container" << std::endl;
  }
}