#include <iostream>

int main()
{
    int i = 10;
    // ���������� ���������� �����, ���� �������� i
    // �� ������ 0
    while (i >= 0) {
        std::cout << i << std::endl;  // ������� i
        --i;  // ��������� i �� 1
    }
    return 0;
}
