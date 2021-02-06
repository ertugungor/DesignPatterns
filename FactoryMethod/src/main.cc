#include "smartphone_creator.h"
#include "samsung_creator.h"
#include "apple_creator.h"

// Note that object creation details are not visible to client code 
void Operate(const SmartphoneCreator& creator) {
  creator.Transport();
}

int main() {
  SamsungCreator samsung_creator;
  Operate(samsung_creator);
  AppleCreator apple_creator;
  Operate(apple_creator);
}
