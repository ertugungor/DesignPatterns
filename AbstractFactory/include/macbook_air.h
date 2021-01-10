#ifndef MACBOOK_AIR_H_
#define MACBOOK_AIR_H_

#include "notebook.h"

class MacbookAir : public Notebook {
public:
  virtual std::string GetInfo() const override;
};

#endif