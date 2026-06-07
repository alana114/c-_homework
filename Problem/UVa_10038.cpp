#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    while (cin >> n)
    {
        if (n == 1)
        {
            cin >> n;
            cout << "Jolly" << endl;
        }
        else
        {
            vector<int> arr;
            vector<int> brr;
            for (int i = 0; i < n; i++)
            {
                int a;
                cin >> a;
                arr.push_back(a);
                brr.push_back(i);
            }
            int can = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (abs(arr[i] - arr[i + 1]) >= 1 && abs(arr[i] - arr[i + 1]) <= n - 1)
                {
                    for (int j = 1; j < n; j++)
                    {
                        if (abs(arr[i] - arr[i + 1]) == brr[j])
                            brr[j] = 0;
                    }
                }
            }
            for (int i = 1; i < n; i++)
            {
                if (brr[i] != 0)
                {
                    can = 1;
                    // break;
                }
            }
            if (can == 1)
                cout << "Not jolly" << endl;
            else
                cout << "Jolly" << endl;
        }
    }
}
