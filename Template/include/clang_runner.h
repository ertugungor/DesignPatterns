#ifndef DESIGN_PATTERNS_TEMPLATE_INCLUDE_CLANG_
#define DESIGN_PATTERNS_TEMPLATE_INCLUDE_CLANG_

#include "code_runner.h"

class ClangRunner : public CodeRunner
{
public:
  void compile_and_link() override;
};

#endif