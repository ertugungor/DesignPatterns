#include "low_battery_state.h"
#include <iostream>

void LowBatteryState::OpenApplication(int seconds)
{  
  std::cout << "Application is running in low battery mode" << std::endl;
  int new_battery;
  while(seconds > 0)
  {
    if (operating_system_->GetBatteryLevel() >= kLowBatteryConsumption)
    {
      new_battery = operating_system_->GetBatteryLevel() - kLowBatteryConsumption;
      std::cout << "New battery level: " << new_battery << std::endl; 
      operating_system_->SetBatteryLevel(new_battery);
      --seconds;
    }
    else
    {
      std::cout << "Not enough battery, shutting down the computer" << std::endl;
      operating_system_->ShutDown();
      return;
    } 
  }
  std::cout << "Application has finished gracefully" << std::endl;
}
  
void LowBatteryState::SetScreenBrightness(int percentage)
{
  if(percentage > kLowBatteryMaxBrightness)
  {
    std::cout << "You cannot set brightness more than 25% when low battery" << std::endl;
    return;
  }
  operating_system_->SetScreenBrightness(percentage);
}