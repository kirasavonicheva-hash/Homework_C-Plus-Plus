#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a;
    double b;
    double c;

    std::cout << "Введите три длины сторон треугольника." << std::endl;
    std::cout << "1.Длина: " << std::endl;
    std::cin >> a;
    std::cout << "2.Длина: " << std::endl;
    std::cin >> b;
    std::cout << "3.Длина: " << std::endl;
    std::cin >> c;

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        std::cout << "Треугольник существует." << std::endl;
    }else {
        std::cout << "Треугольник не существует." << std::endl;
    }
    return 0;
}