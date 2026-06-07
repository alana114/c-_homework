#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, time = 0;
    while (cin >> n)
    {
        time++;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        string s;
        cin >> s;
        int can = 0;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] * 2 != arr[i + 1])
                can = 1;
        }
        cout << "Case #" << time << ": It is ";
        if (can)
            cout << "not ";
        cout << "a B2-Sequence." << endl
             << endl;
    }
}