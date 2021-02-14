#include <iostream>
#include <cmath>
using namespace std;

int prime ( int num)
{
    int count = 1, act_num = 2;
    bool is_simple = false;
    while (count < num) {
        act_num += 1;
        is_simple = true;
        for (int i = 2; i * i < act_num + 1; i++) {
            if (act_num % i == 0) {
                is_simple = false;
                i = act_num;
            }
        }
        if (is_simple == true)
            count++;
    }
    return act_num;
}
int main() {
    cout << prime(21);
}