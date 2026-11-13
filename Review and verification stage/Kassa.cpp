#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int Payment;

    std::cout << "Сеанс:" << "2,5 час." << std::endl;
    std::cout << "К оплате:" << "1.500" << std::endl;

    std::cout << "Внесите оплату:" << std::endl;
    std::cin >> Payment;

    std::cout << "Сдача: " << Payment - 1500 << " Рублей. " << "Спасибо!" << std::endl;

    return 0;
}
