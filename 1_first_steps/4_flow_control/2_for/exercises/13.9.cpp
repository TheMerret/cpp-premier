#include <iostream>

int main()
{
    int sum = 0;
    // продолжать выполнение цикла, пока значение val
    // не превысит 10
    for (int val=50;val<=100;++val) {
        sum += val; // присвоить sum сумму val и sum
    }
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;
    return 0;
}
