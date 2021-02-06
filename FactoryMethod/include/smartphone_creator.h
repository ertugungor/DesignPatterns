#ifndef SMARTPHONE_CREATOR_H_
#define SMARTPHONE_CREATOR_H_

#include <memory>

class Smartphone;

class SmartphoneCreator {
public:
  virtual ~SmartphoneCreator() = default;
  virtual void Transport() const; 
  virtual std::unique_ptr<Smartphone> CreateSmartphone() const = 0;
};

#endif
