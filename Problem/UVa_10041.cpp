#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int h, aa;
        cin >> h;
        int arr[h];
        for (int i = 0; i < h; i++)
        {
            cin >> arr[i];
        }
        int mn = 0;
        sort(arr, arr + h);
        if (h % 2 == 1)
        {
            aa = arr[h / 2];
        }
        else
        {
            aa = (arr[h / 2 - 1] + arr[h / 2]) / 2;
        }
        for (int i = 0; i < h; i++)
        {
            mn += abs(aa - arr[i]);
        }
        cout << mn << endl;
    }
}