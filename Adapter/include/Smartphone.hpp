#ifndef SMARTPHONE
#define SMARTPHONE
#include "UsbCCable.hpp"

class Smartphone
{
public:
  Smartphone(UsbCCable* usbCCable) : cable(usbCCable) {}
  void transferData()
  {
    cable->connect();
  }
private:
  UsbCCable* cable;
};

#endif