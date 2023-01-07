#include <iostream>

#include "../Sales_item.h"

int main() {
  Sales_item currentItem;
  Sales_item valueItem;
  if (std::cin >> currentItem) {
    int cnt = 1;
    while (std::cin >> valueItem) {
      if (valueItem.isbn() == currentItem.isbn()) {
        cnt++;
      } else {
        std::cout << currentItem << " occurs " << cnt << " times " << std::endl;
        currentItem = valueItem;
        cnt = 1;
      }
    }
    std::cout << currentItem << " occurs " << cnt << " times " << std::endl;
  } else {
    std::cout << "no data" << std::endl;
    return -1;
  }
  return 0;
}