#ifndef DESING_PATTERNS_STATE_INCLUDE_STATE
#define DESING_PATTERNS_STATE_INCLUDE_STATE

#include "operating_system.h"
#include <iostream>

class OperatingSystem;

class State
{
public:
  virtual ~State() 
  {
    std::cout << "State dtor" << std::endl;
  }
  
  /* Concrete State classes will implement these 
   * abstract methods to achieve state dependent behaviour
   */
  virtual void OpenApplication(int seconds) = 0;
  virtual void SetScreenBrightness(int percentage) = 0;
  /* State classes also has the Context objects to 
   * be able to retrieve required data to perform
   * behaviours above
   */
  void SetOperatingSystem(OperatingSystem *os)
  {
    operating_system_ = os;
  }
protected:
  OperatingSystem *operating_system_; 
};

#endif