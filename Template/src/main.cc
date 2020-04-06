#include <iostream>
#include "gcc_runner.h"
#include "clang_runner.h"

void run_program(CodeRunner* code_runner)
{
  code_runner->run();
}

int main()
{
  std::cout << "Starting a program using gcc toolchain" << std::endl;
  GCCRunner gcc_based_runner;
  run_program(&gcc_based_runner);

  std::cout << "Starting a program using gcc toolchain" << std::endl;
  ClangRunner clang_based_runner;
  run_program(&clang_based_runner);
}

