#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int can = 0;
        if (a < b)
            swap(a, b);
        vector<int> arr;
        arr.push_back(a);
        while (1)
        {
            if (a < b)
                break;
            else if (b == 1 || a % b != 0)
            {
                can = 1;
                break;
            }
            else
                a = a / b, arr.push_back(a);
        }
        if (can)
            cout << "Boring!" << endl;
        else
        {
            for (int i = 0; i < arr.size(); i++)
            {
                if (i == arr.size() - 1)
                    cout << arr[i] << endl;
                else
                    cout << arr[i] << ' ';
            }
        }
    }
}
