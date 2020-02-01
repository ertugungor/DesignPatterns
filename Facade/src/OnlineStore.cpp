#include "OnlineStore.hpp"
#include "BankService.hpp"
#include "ComputerStore.hpp"
#include "ShipmentService.hpp"
#include <iostream>

/* This class acts as Facade */
void OnlineStore::makeComputerOrder()
{
  BankService bankService;
  if (bankService.checkBalance())
  {
    bankService.makePayment();
  }
  else
  {
    std::cout << "Not enough balance for this purchase" << std::endl;
  }

  /* This is the key point for Facade pattern
   * Client does not need to know the complexity 
   * of correct ordering of how to create a PC */

  ComputerStore computerStore;
  computerStore.prepareChassis();
  computerStore.installMotherboard();
  computerStore.installRAM();
  computerStore.installCPU();
  computerStore.installGPU();

  ShipmentService shipmentService;
  shipmentService.deliverPackage();
  
}