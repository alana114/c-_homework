#include <bits/stdc++.h>
using namespace std;

bool LESS(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second < b.second;
    else
        return a.first > b.first;
}

int main()
{
    string s;
    int ant = 0;
    while (getline(cin, s))
    {
        if (ant)
            cout << endl;
        ant++;
        vector<int> arr(150, 0);
        vector<pair<int, int>> ans;
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i]]++;
        }
        for (int i = 0; i < 150; i++)
        {
            if (arr[i] != 0)
            {
                ans.push_back(make_pair(i, arr[i]));
            }
        }
        sort(ans.begin(), ans.end(), LESS);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].first << ' ' << ans[i].second << endl;
        }
    }
}
