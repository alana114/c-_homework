#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 0;
    while (cin >> a >> b)
    {
        cout << a << ' ' << b << ' ';
        if (a > b)
            swap(a, b);
        int mx = 0;
        for (int i = a; i <= b; i++)
        {
            int t = 1, n = i;
            while (n != 1)
            {
                t++;
                if (n % 2)
                    n = n * 3 + 1;
                else
                    n /= 2;
            }
            mx = max(mx, t);
        }
        cout << mx << '\n';
    }
}
