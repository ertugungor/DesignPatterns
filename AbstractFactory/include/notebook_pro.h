#ifndef NOTEBOOK_PRO_H_
#define NOTEBOOK_PRO_H_

#include "notebook.h"

class NotebookPro : public Notebook {
public:
  virtual std::string GetInfo() const override;
};

#endif