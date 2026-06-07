#include <bits/stdc++.h>
using namespace std;
#define int long long

bool sss(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        if (a.first % 2 && b.first % 2)
            return a.first > b.first;
        else if (a.first % 2 == 0 && b.first % 2 == 0)
            return b.first > a.first;
        else
            return abs(a.first % 2) > abs(b.first % 2);
    }
    else
        return a.second < b.second;
}

signed main()
{
    int n, m;
    while (cin >> n >> m)
    {
        cout << n << ' ' << m << endl;
        if (n == 0 && m == 0)
            break;
        vector<pair<int, int>> arr(n, {0, 0});
        for (auto &v : arr)
            cin >> v.first, v.second = v.first % m;
        sort(arr.begin(), arr.end(), sss);
        for (auto &v : arr)
            cout << v.first << endl;
    }
    return 0;
}
