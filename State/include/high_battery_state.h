#ifndef DESING_PATTERNS_STATE_INCLUDE_HIGH_BATTERY_STATE
#define DESING_PATTERNS_STATE_INCLUDE_HIGH_BATTERY_STATE

#include "operating_system.h"

/* As an example high battery state holds 
 * information specific to this state and
 * behave according to this information.
 */
static constexpr int kHighBatteryConsumption = 5;

class HighBatteryState : public State
{
public:
  void OpenApplication(int seconds) override;
  void SetScreenBrightness(int percentage) override;
};

#endif