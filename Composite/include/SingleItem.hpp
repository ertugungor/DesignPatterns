#ifndef SINGLE_ITEM
#define SINGLE_ITEM

#include "Item.hpp"

class SingleItem : public Item
{

public:
  virtual float getWeight();
  SingleItem(float weight) : Item(weight) {}
};

#endif