#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, arr = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while (getline(cin, a))
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == ' ')
                cout << ' ';
            else
            {
                int w = arr.find(tolower(a[i]));
                cout << arr[w - 2];
            }
        }
        cout << endl;
    }
}