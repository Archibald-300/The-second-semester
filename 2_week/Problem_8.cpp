#include <iostream>

using namespace std;

int main()
{
    cout << "Write parametres of the equality\n";
    int a, b, m;
    cin >> a >> b >> m;
    bool flag = 0;
    for (int x = 0; x < m; x++) {
        if ((a * x) % m == b) {
            if (flag == 0)
                cout << x;
            else
                cout << ", " << x;
        flag = 1;
        }
    }
    if (flag == 0)
        cout << -1;
}