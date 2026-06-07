#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, vocab = "abcdefghijklmnopqrstuvwxyz";
    while (getline(cin, a))
    {
        getline(cin, b);
        if (a == " " && b == " ")
        {
            cout << "endl";
            continue;
        }
        int arr[150] = {}, brr[150] = {};
        for (int i = 0; i < a.size(); i++)
        {
            arr[a[i]]++;
        }
        for (int i = 0; i < b.size(); i++)
        {
            brr[b[i]]++;
        }
        for (int i = 40; i < 150; i++)
        {
            if (arr[i] != 0 && brr[i] != 0)
            {
                for (int j = 0; j < min(brr[i], arr[i]); j++)
                {
                    cout << vocab[i - 'a'];
                }
            }
        }
        cout << endl;
    }
}
