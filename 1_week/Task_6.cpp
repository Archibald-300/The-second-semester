#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Write preferable number\n";
    int Number_of_symbols;
    int Number_of_strings;
    std::cin >> Number_of_symbols;
    Number_of_strings = floor((Number_of_symbols - 1) / 2);
    for (int i = 0; i <= Number_of_strings; i++) {
        for (int j = 1; j <= i; j++)
            std::cout << " ";
        for (int j = i + 1; j <= Number_of_symbols - i; j++)
            std::cout << "*";
        std::cout << std::endl;
    }    
}