#ifndef NOTEBOOK_H_
#define NOTEBOOK_H_

#include <string>

class Notebook {
public:
  virtual ~Notebook() = default;
  virtual std::string GetInfo() const = 0;
};

#endif