#include "BankService.hpp"
#include <iostream>

bool BankService::checkBalance()
{
  /* for simplicity return true always
   * in a real scenario, check users' account
   * if it is enough for given amount */

  return true;
}

void BankService::makePayment()
{
  std::cout << "Making payment.." << std::endl;
}
