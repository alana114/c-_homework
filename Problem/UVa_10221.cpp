#include <bits/stdc++.h>
using namespace std;
#define pi 2.0 * acos(0.0)
int main()
{
    double s, a;
    string h;
    while (cin >> s >> a >> h)
    {
        if (h == "min")
            a /= 60;
        if (a > 180)
            a = 360 - a;
        double r = 6440.0 + s, arc = 2.0 * r * pi * a / 360.0, chord = 2 * r * sin(a * pi / 180.0 / 2.0);
        printf("%.6f %.6f\n", arc, chord);
    }
}
