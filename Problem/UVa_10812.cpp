#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
            cout << "impossible" << endl;
        else
        {
            if ((a + b) / 2 + abs((a - b) / 2) == a)
                cout << (a + b) / 2 << ' ' << abs((a - b) / 2) << endl;
            else
                cout << "impossible" << endl;
        }
    }
}