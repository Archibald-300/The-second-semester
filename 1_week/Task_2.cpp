
#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Write length of cathetus 1 and cathetus 2\n";
    double a;
    double b;
    std::cin >> a >> b;
    std::cout << "Length of hypotenuse: " << sqrt(a * a + b * b);
}