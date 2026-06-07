#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int x, num;
        stringstream(s) >> x;
        getline(cin, s);
        stringstream line(s);
        vector<int> arr;
        while (line >> num)
        {
            arr.push_back(num);
        }
        int ans = 0, n = arr.size() - 1;
        for (int i = 0; i < n; i++)
        {
            ans += arr[i] * (n - i) * pow(x, n - i - 1);
        }
        cout << ans << endl;
    }
    return 0;
}