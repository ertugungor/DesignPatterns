#ifndef SOME_BRAND_USB_A
#define SOME_BRAND_USB_A

#include "UsbACable.hpp"

class SomeBrandUsbACable : public UsbACable
{
public:
  virtual void connect();
};

#endif