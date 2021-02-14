#include <iostream>

using namespace std;

int main()
{
    cout << "Write your number\n";
    int num;
    cin >> num;
    int flag = 2;
    bool switcher = false;
    while (num > 1){
        if (num % flag == 0) {
            num = num / flag;
            if (switcher == true)
                cout << "*";
            cout << flag;
            switcher = true;
        }
        else {
            flag += 1;
        }

    }
}