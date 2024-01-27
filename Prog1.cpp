#include <iostream>
#include <iomanip>

int main() {
    // Оголошення змінної для зберігання символу
    char inputChar;

    // Зчитування символу від користувача
    std::cout << "Введіть символ: ";
    std::cin >> inputChar;

    // Виведення шістнадцяткового коду символу
    std::cout << "Шістнадцятковий код символу '" << inputChar << "': 0x" << std::hex << static_cast<int>(inputChar) << std::endl;

    return 0;
}