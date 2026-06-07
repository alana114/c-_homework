#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n, n)
    {
        if (n < 10)
        {
            cout << n << endl;
            continue;
        }
        string l;
        while (n >= 10)
        {
            l = to_string(n);
            n = 0;
            for (int i = 0; i < l.size(); i++)
            {
                n += l[i] - '0';
            }
        }
        cout << n << endl;
    }
}