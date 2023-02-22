#include <iostream>
#include <windows.h>
#include <vector>
#include <algorithm>



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russia");

    std::vector <int> arr{ 4, 7, 9, 14, 12 };

    std::cout << "Входные данные: ";
    std::for_each(
        arr.begin(), arr.end(),
        [](int i)
        {
            std::cout << i << " ";
        }
    );

    std::cout << "\nВыходные данные: ";
    std::for_each(
        arr.begin(), arr.end(),
        [](int i)
        {
            if (i % 2 == 1) { i *= 3; }
    std::cout << i << " ";
        }
    );

    return 0;
}
