#include "Smartphone.hpp"
#include "SomeBrandUsbACable.hpp"
#include "UsbCAdapter.hpp"

int main()
{
  /* We have a usb cable but our smartphone uses usb type c
   * cable. Therefore we use an adapter behaving like a usb
   * c cable but actually utilizing a usb a.
   */
  SomeBrandUsbACable usbACable;
  UsbCAdapter adapter(&usbACable);
  Smartphone smartphone(&adapter);
  smartphone.transferData();
}