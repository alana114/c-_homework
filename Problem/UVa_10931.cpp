#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n, n)
    {
        int ans = 0, can = 0;
        bitset<33> a(n);
        cout << "The parity of ";
        for (int i = 33; i >= 0; i--)
        {
            if (a[i] == 1 && can == 0)
                can = 1; //,cout<<i<<endl;
            if (a[i] == 1)
                ans++;
            if (can)
                cout << a[i];
        }
        cout << " is " << ans << " (mod 2)." << endl;
    }
}
