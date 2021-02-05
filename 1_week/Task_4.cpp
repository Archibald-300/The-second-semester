#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Write preferable number\n";
    int Number_of_symbols;
    std::cin >> Number_of_symbols;
    for (int i = 1; i <= Number_of_symbols; i++) {
        for (int j = 1; j <= i; j++)
            std::cout << "*";
        std::cout << std::endl;
    }
}
