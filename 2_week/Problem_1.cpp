#include <iostream>

using namespace std;

int main()
{
    cout << "Write length of sides of the triangle\n" ;
    int a;
    int b;
    int c; 
    int max, add1, add2;
    cin >> a >> b >> c;
    if (a > b && a > c) {
        max = a;
        add1 = c;
        add2 = b;
    }
    else if (b > c && b > a)
    {
        max = b;
        add1 = c;
        add2 = a;
    }
    else
    {
        max = c;
        add1 = a;
        add2 = b;
    }
    if (max < add1 + add2) {
        double cos = 0.0;
        cos =(double) -(max * max - add1 * add1 - add2 * add2);
        if (cos == 0.0){
            cout << "Right";
        }
        else if (cos < 0) {
            cout << "Obtuse";
        }
        else {
            cout << "Acute";
        }
    }
    else
    {
        cout << "Impossible";
    }
}