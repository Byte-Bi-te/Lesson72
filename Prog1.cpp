#include <iostream>
#include <iomanip>

int main() {
    // ���������� ����� ��� ��������� �������
    char inputChar;

    // ���������� ������� �� �����������
    std::cout << "������ ������: ";
    std::cin >> inputChar;

    // ��������� ���������������� ���� �������
    std::cout << "س������������� ��� ������� '" << inputChar << "': 0x" << std::hex << static_cast<int>(inputChar) << std::endl;

    return 0;
}