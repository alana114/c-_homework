#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = n - 1;
    cin.ignore();
    string s;
    getline(cin, s);
    while (n--)
    {
        if (a != n)
            cout << endl;
        int t = 0;
        map<string, int> mp;
        while (getline(cin, s) && s != "")
        {
            mp[s]++;
            t++;
        }
        for (auto v : mp)
        {
            cout << v.first << ' '; //<<t<<' '<<v.second<<endl;
            printf("%.4f\n", 100.0 * v.second / t);
        }
    }
}