#include <iostream>
#include <string>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    std::string name;
    int birthYear;
    int num;
    std::cout << "Как вас зовут?" << std::endl;
    std::cin >> name;

    std::cout << "В каком году вы родились?" << std::endl;
    std::cin >> birthYear;

    std::cout << "Ваше любимое число?" << std::endl;
    std::cin >> num;

    std::cout << "Привет, " << name << "!" << std::endl;
    std::cout << "Вам примерно " << 2026 - birthYear << " лет." << "Ваше любимое число:" << num << std::endl;

    return 0;
}

