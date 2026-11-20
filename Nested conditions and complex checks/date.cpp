#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int Day;
    int Month;
    int Year;

    std::cout << "Введите день, месяц, год." << std::endl;
    std::cout << "Введите день:" << std::endl;
    std::cin >> Day;
    std::cout << "Введите месяц:" << std::endl;
    std::cin >> Month;
    std::cout << "Введите год:" << std::endl;
    std::cin >> Year;

    if (Month < 1 || Month > 12) {
        std::cout << "Ошибка: месяц от 1 до 12." << std::endl;
        return 0;
    }

    if (Day < 1 || Day > 31) {
        std::cout << "Ошибка: день от 1 до 31." << std::endl;
        return 0;
    }

    int maxDays;
    if (Month == 4 || Month == 6 || Month == 9 || Month == 11) {
        maxDays = 30;
    } else if (Month == 2) {
        if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) {
            maxDays = 29;
        } else {
            maxDays = 28;
        }
    } else {
        maxDays = 31;
    }

    if (Day <= maxDays) {
        std::cout << "Дата " << Day << "." << Month << "." << Year << " корректна." << std::endl;
    } else {
        std::cout << "Ошибка: в месяце " << Month << " не больше " << maxDays << " дней." << std::endl;
    }

    return 0;
}