#include <iostream>

#include "Sales_item.h"
int main() {
  Sales_item item1;
  Sales_item item2;
  std::cin >> item1 >> item2;
  // сначала проверить, представляют ли объекты item1 и item2
  // одну и ту же книгу
  if (item1.isbn() == item2.isbn()) {
    std::cout << item1 + item2 << std::endl;
    return 0;  // свидетельство успеха
  }
  std::cerr << "Data must refer to same ISBN" << std::endl;
  return -1;  // СЃРІРёРґРµС‚РµР»СЊСЃС‚РІРѕ РѕС‚РєР°Р·Р°
}