#include <iostream>

int main() {
    // Оголошення змінних
    int exponent;

    // Зчитування показника степеня від користувача
    std::cout << "Введіть показник степеня: ";
    std::cin >> exponent;

    // Обчислення 2 в ступені exponent за допомогою зсуву ліворуч
    int result = 1 << exponent;

    // Виведення результату
    std::cout << "2 в ступені " << exponent << " дорівнює: " << result << std::endl;

    return 0;
}