#include <iostream>

int main()
{
    int sum = 0;
    // ���������� ���������� �����, ���� �������� val
    // �� �������� 10
    for (int val=50;val<=100;++val) {
        sum += val; // ��������� sum ����� val � sum
    }
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;
    return 0;
}
