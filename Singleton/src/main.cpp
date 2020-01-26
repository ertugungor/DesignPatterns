#include <iostream>
#include "SingletonObject.hpp"

int main()
{
  SingletonObject& singletonObject = SingletonObject::getInstance();
  singletonObject.setData(5);
  SingletonObject& anotherObject = SingletonObject::getInstance();
  anotherObject.setData(15);
  std::cout << "singleObject data: " << singletonObject.getData() << std::endl;
  std::cout << "singleObject data: " << anotherObject.getData() << std::endl;
}