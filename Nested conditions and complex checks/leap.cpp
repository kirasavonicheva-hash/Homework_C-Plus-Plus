#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int Year;
    std::cout << "Введите год: " << std::endl;
    std::cin >> Year;

    bool isLeap = (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);

    std::cout << "Проверка: " << isLeap << std::endl;

    if (isLeap) {
        std::cout << Year << " - високосный" << std::endl;
    } else {
        std::cout << Year << " - не високосный" << std::endl;
    }

    return 0;
}
