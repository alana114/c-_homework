#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int day, gov, ans = 0;
        cin >> day >> gov;
        vector<int> arr(day + 10, 0);
        while (gov--)
        {
            int la;
            cin >> la;
            for (int i = 0; i < arr.size(); i++)
            {
                if (i * (la) >= arr.size())
                    break;
                arr[i * (la)]++;
            }
        }
        for (int i = 1; i <= day; i++)
        {
            if (i % 7 == 6 || i % 7 == 0)
                continue;
            if (arr[i] != 0)
                ans++;
        }
        cout << ans << endl;
    }
}