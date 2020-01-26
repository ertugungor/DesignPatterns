#include "SingletonObject.hpp"

void SingletonObject::setData(int data)
{
  this->data = data;
}

int SingletonObject::getData()
{
  return data;
}