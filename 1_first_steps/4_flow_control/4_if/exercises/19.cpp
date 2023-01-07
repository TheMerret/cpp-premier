#include <iostream>

int main() {
  int small;
  int big;
  std::cout << "Enter two numbers:" << std::endl;
  std::cin >> small >> big;
  if (small > big) {
    std::swap(small, big);
  }
  while (small <= big) {
    std::cout << small << std::endl;
    ++small;
  }
  return 0;
}
