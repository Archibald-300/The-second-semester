#include <iostream>
#include <cmath>
using namespace std;

// It's been done more common task like counting the summ of numbers for whatever data, not just for 
//three-digit numbers
int main()
{
    cout << "Write a number\n";
    int num, sum = 0;
    cin >> num;
    int add = 0, step = 10;
    while (num > 0) {
        add = num % 10;
        sum += add;
        num = trunc(num / 10);
    }
    cout << sum;
}