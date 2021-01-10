#ifndef NOTEBOOK_FLASH_H_
#define NOTEBOOK_FLASH_H_

#include "notebook.h"

class NotebookFlash : public Notebook {
public:
  virtual std::string GetInfo() const override;
};

#endif