#ifndef DESING_PATTERNS_STATE_INCLUDE_OPERATING_SYSTEM_
#define DESING_PATTERNS_STATE_INCLUDE_OPERATING_SYSTEM_

#include "state.h"
#include <iostream>

static constexpr int kLowBatteryThreshold = 20;
static constexpr int kLowBatteryMaxBrightness = 25;

class OperatingSystem
{
public:
  OperatingSystem (State *initial_state, int battery_level) 
  : current_state_(initial_state), battery_level_(battery_level) {}
  void OpenApplication(int seconds)
  {
    current_state_->OpenApplication(seconds);
  }
  void SetScreenBrightness(int percentage)
  {
    current_state_->SetScreenBrightness(percentage);
  }
  int GetBatteryLevel()
  {
    return battery_level_;
  }
  void SetBatteryLevel(int battery_level)
  {
    battery_level_ = battery_level;
  }
  void SetCurrentState(State *state)
  {
    delete current_state_;
    current_state_ = state;
  }
  void ShutDown()
  {
    std::cout << "Shutting down the computer" << std::endl;
  }
private:
  State *current_state_;
  int battery_level_;
};

#endif