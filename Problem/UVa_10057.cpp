#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> arr;
        int m;
        while (n--)
        {
            cin >> m;
            arr.push_back(m);
        }
        sort(arr.begin(), arr.end());
        int mi = INT_MAX, all = 0, tim = 1, v = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr.size(); j++)
            {
                if (j == i)
                    continue;
                all += abs(arr[j] - arr[i]);
            }
            if (mi == all)
                tim++;
            else if (mi > all)
                mi = all, tim = 1, v = arr[i];
            all = 0;
        }
        int can = 0;
        cout << v << ' ' << tim << ' ';
        if (arr.size() % 2 == 0)
            cout << arr[arr.size() / 2] - arr[arr.size() / 2 - 1] + 1 << endl;
        else
            cout << 1 << endl;
    }
}
