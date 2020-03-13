#ifndef ITEM
#define ITEM

// TODO: Change root level cmake file

class Item
{
public:
  virtual float getWeight() = 0;
  virtual ~Item() {};
  Item() {};
  Item(float weight) : weight(weight) {}
  
protected:
  float weight;
};

#endif