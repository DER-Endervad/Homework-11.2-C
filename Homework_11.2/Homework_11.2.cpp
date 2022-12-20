#include <iostream>
#include <Windows.h>
#include "Leaver.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string input = " ";
    std::cout << "Введите имя: ";
    std::cin >> input;
    Leaver l; 
    std::cout << l.leave(input) << std::endl;
}
