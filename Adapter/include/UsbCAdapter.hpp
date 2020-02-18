#ifndef USB_C_ADAPTER
#define USB_C_ADAPTER

#include "UsbCCable.hpp"
#include "SomeBrandUsbACable.hpp"

/* Adapter class should implement the interface of type
 * it adapts objects to.
 */
class UsbCAdapter : public UsbCCable
{
public:
  UsbCAdapter(UsbACable* usbACable) : usbACable(usbACable)
  {
    std::cout << "A USB A cable is plugged in to adapter.." << std::endl;
  }
  virtual void connect();
private:
  UsbACable* usbACable;
};

#endif