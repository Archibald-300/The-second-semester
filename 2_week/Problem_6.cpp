#include <iostream>

using namespace std;

int main()
{
    cout << "Write your sequence\n";
    int num = 1, max = 0, count = 0;
    cin >> num;
    while (num != 0) {
        if (max == num)
            count += 1;
        if (max < num){
            max = num;
            count = 1;
        }
        cin >> num;
    }
    cout << " Maximum number: " << max << endl;
    cout << " Repeats " << count;
}