#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "0")
            break;
        int ans = 0, time = 0;
        for (int i = 0; i < s.size(); i++)
        {
            ans += s[i] - '0';
        }
        int a = ans;
        while (1)
        {
            time++;
            if (ans < 10)
                break;
            string l = to_string(ans);
            ans = 0;
            for (int i = 0; i < l.size(); i++)
            {
                ans += l[i] - '0';
            }
        }
        cout << s << " is ";
        if (ans == 9)
            cout << "a multiple of 9 and has 9-degree " << time << "." << endl;
        else
            cout << "not a multiple of 9." << endl;
    }
}
