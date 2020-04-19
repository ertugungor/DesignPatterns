#include "operating_system.h"
#include "state.h"
#include "low_battery_state.h"
#include "high_battery_state.h"

int main()
{ 
  int current_battery_level = 40;
  State *initial_state; 
  if (current_battery_level >= kLowBatteryThreshold)
  {
    initial_state = new HighBatteryState();
  }
  else
  {
    initial_state = new LowBatteryState();
  }
  OperatingSystem os_x(initial_state, 40);
  initial_state->SetOperatingSystem(&os_x);
  
  os_x.OpenApplication(5);
  os_x.SetScreenBrightness(55);
}