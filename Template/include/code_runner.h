#ifndef CODE_RUNNER_
#define CODE_RUNNER_

class CodeRunner
{
public:
  /* this is the template method that is not
   * overriden(not virtaul) by subclasses, it
   *  does it's job by running other methods. 
   */
  void run();
protected:
  /* Different compilers should give 
   * their implementations
   */
  virtual void compile_and_link() = 0;
  /* common operations for all type of 
   * CodeRunners. They won't be overriden
   * by subclasses(not virtual)
   */
  void preprocess();
  void run_program();
};

#endif