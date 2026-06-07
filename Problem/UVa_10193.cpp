#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, time = 0;
    cin >> n;
    while (n--)
    {
        time++;
        string a, b;
        cin >> a >> b;
        bitset<33> ai(a);
        bitset<33> bi(b);
        int ia = ai.to_ullong();
        int ib = bi.to_ullong();
        if (__gcd(ia, ib) > 1)
            cout << "Pair #" << time << ": All you need is love!" << endl;
        else
            cout << "Pair #" << time << ": Love is not all you need!" << endl;
        // cout<<ia<<' '<<ib<<endl;
    }
}
