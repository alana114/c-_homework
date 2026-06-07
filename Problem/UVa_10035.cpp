#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        int sa = 0, sb = 0;
        if (a == "0")
            break;
        string s;
        if (a.size() != b.size())
        {
            int time = a.size() - b.size();
            if (time < 0)
                time = -time;
            for (int i = 0; i < time; i++)
            {
                s += "0";
            }
            if (a.size() < b.size())
                sa = 1, s += a;
            else
                sb = 1, s += b;
        }
        int car = 0, can = 0;
        for (int i = 0; i < max(a.size(), b.size()); i++)
        {
            if (sa)
            {
                if (((s[s.size() - i - 1] - '0') + (b[b.size() - i - 1] - '0') + can) >= 10)
                    car++, can = 1;
                else
                    can = 0;
            }
            else if (sb)
            {
                if (((a[a.size() - i - 1] - '0') + (s[s.size() - i - 1] - '0') + can) >= 10)
                    car++, can = 1;
                else
                    can = 0;
            }
            else
            {
                if (((a[a.size() - i - 1] - '0') + (b[b.size() - i - 1] - '0') + can) >= 10)
                    car++, can = 1;
                else
                    can = 0;
            }
        }
        if (car)
        {
            cout << car << " carry operation";
            if (car >= 2)
                cout << "s." << endl;
            else
                cout << "." << endl;
        }
        else
            cout << "No carry operation." << endl;
    }
}