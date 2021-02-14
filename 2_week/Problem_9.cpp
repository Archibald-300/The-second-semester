#include <iostream>

using namespace std;

int main()
{
    cout << "Write needed parametres (the number N and data)\n";
    int N;
    double num, act_num;
    cin >> N;
    cin >> num;
    double max1 = num, max2 = num, min1 = num, min2 = num, change = num;
    for (int i = 0; i < N - 1; i++) {
        cin >> act_num;
        if (min1 > min2) {
            change = min2;
            min2 = min1;
            min1 = change;
        }
        if (max1 > max2) {
            change = max2;
            max2 = max1;
            max1 = change;
        }
        if (act_num < min2)
            min2 = act_num;
        if (act_num > max1)
            max1 = act_num;
    }
    cout << " Maximum elements: " << max1 << ", " << max2 << endl;
    cout << " Minimum elements: " << min1 << ", " << min2 << endl;

}