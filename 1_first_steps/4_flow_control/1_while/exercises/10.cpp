#include <iostream>

int main()
{
    int i = 10;
    // продолжать выполнение цикла, пока значение i
    // не меньше 0
    while (i >= 0) {
        std::cout << i << std::endl;  // выводим i
        --i;  // уменьшаем i на 1
    }
    return 0;
}
