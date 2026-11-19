#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int Grade_1;
    int Grade_2;
    int Grade_3;

    std::cout << "Первая оценка: " << std::endl;
    std::cin >> Grade_1;

    std::cout << "Вторая оценка: " << std::endl;
    std::cin >> Grade_2;

    std::cout <<"Треться оценка: " << std::endl;
    std::cin >> Grade_3;

    std::cout << "Оценки: " << Grade_1 << " " << Grade_2 << " " << Grade_3 << std::endl;

    int sum = static_cast<double>(Grade_1) + Grade_2 + Grade_3;
    std::cout << "Целочисленное средние: " << sum / 3 << std::endl;

    double num = static_cast<double>(Grade_1) + Grade_2 + Grade_3;
    std::cout << "Дробное средние: " << num / 3 << std::endl;

    return 0;
}