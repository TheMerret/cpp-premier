#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter two numbers (a < b):" << std::endl;
    std::cin >> a >> b;
    for (int i=a;i<=b;++i) {
        std::cout << i << std::endl;
    }
    return 0;
}
