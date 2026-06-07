#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s, d;
    while (cin >> s >> d)
    {
        while (d > 0)
        {
            d -= (s++);
        }
        cout << s - 1 << endl;
    }
}