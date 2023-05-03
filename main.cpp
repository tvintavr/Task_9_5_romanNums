#include <iostream>
#include <cmath>
#include <windows.h>
#include <limits>
#include <numeric>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    /* Проверка ввода данных (справочно)
    while(true)
    {
        float value; // попробуйте разные типы данных
        std::cin >> value;

        if (std::cin.fail() || std::cin.peek() != '\n')
        {
            std::cerr << "Ошибка ввода данных\n";

            // Данные две строки необходимы для очистки буфера ввода, без них, при последующем вводе данных, произойдёт зацикливание:
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Если нужно прервать программу:
            // return 1; // выход из функции main, соответственно и из программы
            // exit(1); // а так можно выйти из программы в любом месте
            // цифры - это номера ошибок передаваемые программой в ОС,
            // 0 - всё хорошо, не 0 - какой-то код, который разработчик устанавливает сам...
        }
        else
            std::cout << value << '\n';
    }

    return 0;
     */
    int num;
    int digit;
    while (true) {
        std::cout<<"Enter number (1..3999): ";
        std::cin>>num;
        if (num < 1 || num > 3999 || std::cin.fail() || std::cin.peek() != '\n') {
            std::cout << "Error input\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            std::cout<<"Romanian: ";
            while (num>0) {
                if (num / 1000 > 0) {
                    std::cout<<"M";
                    num-=1000;
                } else if (num / 900 > 0) {
                    std::cout << "CM";
                    num -= 900;
                } else if (num / 500 > 0) {
                    std::cout << "D";
                    num -= 500;
                } else if (num / 400 > 0) {
                    std::cout << "CD";
                    num -= 400;
                } else if (num / 100 > 0) {
                    std::cout << "C";
                    num -= 100;
                } else if (num / 90 > 0) {
                    std::cout << "XC";
                    num -= 90;
                } else if (num / 50 > 0) {
                    std::cout << "L";
                    num -= 50;
                } else if (num / 40 > 0) {
                    std::cout << "XL";
                    num -= 40;
                } else if (num / 10 > 0) {
                    std::cout << "X";
                    num -= 10;
                } else if (num / 9 > 0) {
                    std::cout << "IX";
                    num -= 9;
                } else if (num / 5 > 0) {
                    std::cout << "V";
                    num -= 5;
                } else if (num / 4 > 0) {
                    std::cout << "IV";
                    num -= 4;
                } else  {
                    std::cout << "I";
                    num -= 1;
                }
            }
            std::cout<<"\n";
        }
    }

}