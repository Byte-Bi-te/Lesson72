#include <iostream>

int main() {
    // ���������� ������
    int exponent;

    // ���������� ��������� ������� �� �����������
    std::cout << "������ �������� �������: ";
    std::cin >> exponent;

    // ���������� 2 � ������ exponent �� ��������� ����� ������
    int result = 1 << exponent;

    // ��������� ����������
    std::cout << "2 � ������ " << exponent << " �������: " << result << std::endl;

    return 0;
}