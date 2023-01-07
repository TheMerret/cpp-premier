#include <iostream>

int main()
{
    int sum = 0;
    int value = 0;
    // читать данные до конца файла, вычислить сумму всех значений
    while (std::cin >> value)
    {
        sum += value; // эквивалентно sum = sum + val
    }
    std::cout << "Sum is: " << sum << std::endl;
}
