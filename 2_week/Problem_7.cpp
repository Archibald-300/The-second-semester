#include <iostream>

using namespace std;

int main()
{
    cout << "Write your number\n";
    int num;
    cin >> num;
    bool flag = 0;
    for (int i = 0; i * i * i < num; i++) {
        for (int j = 0; j * j * j < num; j++) {
            if (i * i * i + j * j * j == num) {
                cout << i << ", " << j;
                j = num * num * num;
                i = j;
                flag = 1;
            }
        }
    }
    if (flag == 0) 
        cout << "Impossible";
}