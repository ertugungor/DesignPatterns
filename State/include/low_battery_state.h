#ifndef DESING_PATTERNS_STATE_INCLUDE_LOW_BATTERY_STATE
#define DESING_PATTERNS_STATE_INCLUDE_LOW_BATTERY_STATE

#include "operating_system.h"

static constexpr int kLowBatteryConsumption = 3;

class LowBatteryState : public State
{
public:
  void OpenApplication(int seconds) override;
  void SetScreenBrightness(int percentage) override;
};

#endif