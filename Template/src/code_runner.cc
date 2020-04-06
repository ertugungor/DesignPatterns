#include "code_runner.h"
#include <iostream>

void CodeRunner::run()
{
  preprocess();
  compile_and_link();
  run_program();
}

void CodeRunner::preprocess()
{
  std::cout << "Preprocessing step.." << std::endl;
}

void CodeRunner::run_program()
{
  std::cout << "Running program.." << std::endl;
}
