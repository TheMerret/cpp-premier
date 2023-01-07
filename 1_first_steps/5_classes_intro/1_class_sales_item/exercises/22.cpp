#include <iostream>

#include "../Sales_item.h"

int main() {
    Sales_item total;
    if (std::cin >> total) {
        Sales_item current;
        while (std::cin >> current)
        {
            if (current.isbn() == total.isbn()) {
                total += current;
            } else {
                std::cout << total << std::endl;
                total = current;
            }
        }
        std::cout << total << std::endl;
    } else {
        std::cout << "no data" << std::endl;
        return -1;
    }
    return 0;
}