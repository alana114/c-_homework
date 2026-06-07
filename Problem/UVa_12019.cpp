#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, barr[13] = {0, 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    string arr[7] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    cin >> n;
    while (n--)
    {
        int m, d, yd = 0;
        cin >> m >> d;
        for (int i = 2; i < 13; i++)
        {
            if (m >= i)
                yd += barr[i];
        }
        yd += d;
        cout << arr[yd % 7] << endl;
    }
}