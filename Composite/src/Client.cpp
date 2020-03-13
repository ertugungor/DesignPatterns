#include "ItemContainer.hpp"
#include "SingleItem.hpp"

int main()
{
  ItemContainer schoolBox;
  SingleItem book(2);
  SingleItem notebook(1);
  SingleItem powerCable(3);
  SingleItem computer(10);
  ItemContainer computerBox;
  schoolBox.addItem(&book);
  schoolBox.addItem(&notebook);
  computerBox.addItem(&powerCable);
  computerBox.addItem(&computer);

  std::cout << schoolBox.getWeight() << std::endl;
  std::cout << computerBox.getWeight() << std::endl;

}