#include <bits/stdc++.h>
using namespace std;

bool les(pair<char, int> a, pair<char, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    string n;
    getline(cin, n);
    int x;
    stringstream(n) >> x;
    string s;
    map<char, int> mp;
    while (x--)
    {
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                s[i] = toupper(s[i]);
                mp[s[i]]++;
            }
        }
    }
    vector<pair<char, int>> ans(mp.begin(), mp.end());
    sort(ans.begin(), ans.end(), les);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].first << ' ' << ans[i].second << endl;
}