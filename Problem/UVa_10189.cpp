#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, time = 0, dir[8][2] = {{1, 0}, {1, 1}, {1, -1}, {0, 1}, {-1, 1}, {-1, -1}, {-1, 0}, {0, -1}};
    while (cin >> x >> y)
    {
        if (x != 0 && time != 0)
            cout << endl;
        else if (x == 0)
            break;
        time++;
        char arr[150][150] = {};
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                char c;
                cin >> c;
                if (c == '*')
                    arr[i][j] = c;
                else
                    arr[i][j] = '0';
            }
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                for (int k = 0; k < 8; k++)
                {
                    if (i + dir[k][0] >= 0 && i + dir[k][0] < x && j + dir[k][1] >= 0 && j + dir[k][1] < y && arr[i + dir[k][0]][j + dir[k][1]] == '*' && arr[i][j] != '*')
                    {
                        arr[i][j] -= '0';
                        arr[i][j]++;
                        arr[i][j] += '0';
                    }
                }
            }
        }
        cout << "Field #" << time << ":" << endl;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}