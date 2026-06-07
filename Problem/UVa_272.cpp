#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, arr = "'`";
    int time = 0;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '"')
                time++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '"' && time)
            {
                if (time % 2 == 0 || time % 2 == 1)
                    cout << arr[time % 2] << arr[time % 2], time++;
            }
            else
                cout << s[i];
        }
        time--;
        cout << endl;
    }
}
