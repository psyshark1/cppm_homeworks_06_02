#include <iostream>
#include "02.h"

int main(int argc, char** argv)
{
    std::system("chcp 1251");

    std::string* answ = new std::string();
    int* counter_init = new int();
    Counter* counter = nullptr;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> *answ;

    if (*answ == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> *counter_init;
        counter = new Counter(*counter_init);
    }
    else if (*answ == "нет")
    {
        counter = new Counter();
    }
    else
    {
        std::cout << "Некорректный ответ!";
        return 0;
    }

    delete counter_init;
    counter_init = nullptr;

    while (true)
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> *answ;

        if (*answ == "+")
        {
            counter->add();
        }
        else if (*answ == "-")
        {
            counter->subtract();
        }
        else if (*answ == "=")
        {
            std::cout << counter->return_counter() << '\n';
        }
        else if (*answ == "x")
        {
            break;
        }
        else
        {
            std::cout << "Некорректный ввод данных!";
        }
    }
    delete counter;
    std::system("pause");
    return 0;
}