#include "high_battery_state.h"
#include "low_battery_state.h"
#include <iostream>

void HighBatteryState::OpenApplication(int seconds)
{
  std::cout << "Application is running in high battery mode" << std::endl;
  int new_battery;
  while(seconds > 0)
  {
    /* To perform state dependent action, states may require 
     * information from context such as battery level of computer
     */ 
    if (operating_system_->GetBatteryLevel() >= kLowBatteryThreshold + kHighBatteryConsumption)
    {
      new_battery = operating_system_->GetBatteryLevel() - kHighBatteryConsumption;
      std::cout << "New battery level: " << new_battery << std::endl; 
      operating_system_->SetBatteryLevel(new_battery);
      --seconds;
    }
    else
    {
      std::cout << "Low battery, shutting down application.." << std::endl;
      State *low_battery_state = new LowBatteryState();
      low_battery_state->SetOperatingSystem(operating_system_);
      /* State Transition performed */
      operating_system_->SetCurrentState(low_battery_state);
      return;
    } 
  }
  std::cout << "Application has finished gracefully" << std::endl;
}
  
void HighBatteryState::SetScreenBrightness(int percentage)
{
  operating_system_->SetScreenBrightness(percentage);
}
