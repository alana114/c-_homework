#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    while (cin >> a >> b, a, b)
    {
        if (a == b)
            cout << '0' << endl;
        else
        {
            int ans = 0;
            for (long long i = 1; i <= b; i++)
            {
                if (i * i <= b && i * i >= a)
                    ans++;
            }
            cout << ans << endl;
        }
    }
}