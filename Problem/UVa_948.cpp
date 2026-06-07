#include <bits/stdc++.h>
using namespace std;
int main()
{
    int index = 2;
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    while (arr.back() < 100000000)
    {
        arr.push_back(arr[index - 2] + arr[index - 1]);
        index++;
    }
    int n;
    cin >> n;
    while (n--)
    {
        int m, time = 0;
        cin >> m;
        cout << m << " = ";
        while (m > arr[time])
        {
            time++;
        }
        string s = "";
        int nm = m;
        while (m != 0 || time != 0)
        {
            if (m - arr[time] >= 0)
                m -= arr[time], s += "1";
            else if (s == "")
            {
            }
            else
                s += "0";
            time--;
        }
        if (nm != 1)
            s.erase(s.size() - 1);
        cout << s << " (fib)" << endl;
    }
}
