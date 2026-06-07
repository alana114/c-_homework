#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int b, can = 0;
        cin >> b;
        vector<int> arr;
        while (b--)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr.size() - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]), can++;
            }
        }
        cout << "Optimal train swapping takes " << can << " swaps." << endl;
        can = 0;
    }
}
