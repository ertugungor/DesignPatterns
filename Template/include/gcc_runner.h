#ifndef DESIGN_PATTERNS_TEMPLATE_GCC_
#define DESIGN_PATTERNS_TEMPLATE_GCC_

#include "code_runner.h"

class GCCRunner : public CodeRunner
{
public:
  void compile_and_link() override;
};

#endif