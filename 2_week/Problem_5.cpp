#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Write the number\n";
    int num;
    cin >> num;
    for (int i = 0; i * i <= num; i++) {
        for (int j = i; j * j <= num; j++) {
            for (int k = j; k * k <= num; k++) {
                for (int l = k; l * l <= num; l++) {
                    if (i * i + j * j + k * k + l * l == num) {
                        cout << i << ", " << j << ", " << k << ", " << l;
                        l = num;
                        k = num;
                        j = num;
                        i = num;
                    }
                }
            }
        }
    }
}
