#include <iostream>

int main() {
    int sum = 0, val = 1;
    // ���������� ���������� �����, ���� �������� val
    // �� �������� 10
    while (val <= 10) {
        sum += val; // ��������� sum ����� val � sum
        ++val; // �������� 1 � val
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}
