#ifndef ABSTRACT_FACTORY_NOTEBOOK_H_
#define ABSTRACT_FACTORY_NOTEBOOK_H_

#include <string>

class Notebook {
public:
  virtual ~Notebook() = default;
  virtual std::string GetInfo() const = 0;
};

#endif