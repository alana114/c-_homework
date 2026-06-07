#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int can = 0;
        int m = n;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                can = 1;
                cout << n << " is not prime." << endl;
                break;
            }
        }
        if (can)
            continue;
        string s;
        s = to_string(n);
        reverse(s.begin(), s.end());
        n = stoi(s);
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                can = 1;
                cout << m << " is prime." << endl;
                break;
            }
        }
        if (n == m)
        {
            cout << m << " is prime." << endl;
            can = 1;
        }
        if (can)
            continue;
        cout << m << " is emirp." << endl;
    }
}
