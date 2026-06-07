#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        int a, b, ans = 0;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        for (int i = a; i <= b; i++)
        {
            if (i % 2 != 0)
                ans += i;
        }
        cout << "Case " << k + 1 << ": " << ans << endl;
    }
}