#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "0")
            break;
        int left = 0, right = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
                left += s[i] - '0';
            else
                right += s[i] - '0';
        }
        int ans = abs(right - left);
        cout << s << " is ";
        if (ans % 11 != 0)
            cout << "not ";
        cout << "a multiple of 11." << endl;
    }
}
