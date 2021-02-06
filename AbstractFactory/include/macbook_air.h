#ifndef ABSTRACT_FACTORY_MACBOOK_AIR_H_
#define ABSTRACT_FACTORY_MACBOOK_AIR_H_

#include "notebook.h"

class MacbookAir : public Notebook {
public:
  virtual std::string GetInfo() const override;
};

#endif