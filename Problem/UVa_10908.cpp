#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, d;
        cin >> a >> b >> d;
        char arr[a][b];
        for (int i = 0; i < a; i++)
            for (int j = 0; j < b; j++)
                cin >> arr[i][j];
        cout << a << ' ' << b << ' ' << d << endl;
        while (d--)
        {
            int x, y, fx, fy, ex, ey, t = 1, ans = 1;
            cin >> x >> y;
            char carr = arr[x][y];
            bool can = false;
            while (1)
            {
                if (x - t >= 0 && y - t >= 0 && x + t < a && y + t < b)
                    fx = x - t, fy = y - t, ex = x + t, ey = y + t, t++;
                else
                    break;
                for (int i = fx; i <= ex; i++)
                    for (int j = fy; j <= ey; j++)
                        if (arr[i][j] != carr)
                            can = true;
                if (can)
                    break;
                ans += 2;
            }
            cout << ans << endl;
        }
    }
    return 0;
}