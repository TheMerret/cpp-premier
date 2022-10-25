#include <iostream>

int main() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    // sum must be 0
    std::cout << "Sum numbers between -100 and 100 inclusive: "
              << sum << std::endl;
}
