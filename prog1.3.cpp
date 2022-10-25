#include <iostream>
/*
* Пример функции main():
* Читает два числа и отображает их сумму
*/
int main()
{
    // Предлагает пользователю ввести два числа
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0; // переменные для хранения ввода
    std::cin >> v1 >> v2; // чтение ввода
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}
