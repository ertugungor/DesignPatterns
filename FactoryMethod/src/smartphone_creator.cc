#include "smartphone_creator.h"
#include "smartphone.h"
#include <iostream>

/** 
 * This class is not only responsible for creating `Product`s 
 * but also performin some operations on them. The important point
 * is it delegates the object creation to it's subclasses, i.e. it
 * benefits from inheritance. However it's not only a abstract class,
 * it has some functionality using the creation function. 
 */
void SmartphoneCreator::Transport() const {
  // Create and use, how or what will be created depends on subclasses
  auto smartphone = CreateSmartphone();
  std::cout << "Phone with info: " << smartphone->GetInfo()
    << " has been created and will be transported" << std::endl;
} 
