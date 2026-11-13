#include <iostream>
#include <string>

int main()
{
    std::cout << "Введите имя:" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Введите группу" << std::endl;
    std::string Group;
    std::cin >> Group;

    std::cout << "Привет! " << name << " Группа: " << Group << std::endl;

    return 0;
}