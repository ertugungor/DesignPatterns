#ifndef MACBOOK_PRO_H_
#define MACBOOK_PRO_H_

#include "notebook.h"

class MacbookPro : public Notebook {
public:
  virtual std::string GetInfo() const override;
};

#endif