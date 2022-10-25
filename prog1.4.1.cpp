#include <iostream>

int main() {
    int sum = 0, val = 1;
    // продолжать выполнение цикла, пока значение val
    // не превысит 10
    while (val <= 10) {
        sum += val; // присвоить sum сумму val и sum
        ++val; // добавить 1 к val
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}
