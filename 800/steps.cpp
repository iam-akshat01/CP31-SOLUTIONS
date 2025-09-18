#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d < b)
        {
            cout << -1 << endl;
            continue;
        }
        int steps = 0;
        steps += (d - b);
        a += (d - b);
        if (a < c)
        {
            cout << -1 << endl;
            continue;
        }
        steps += (a - c);
        cout << steps << endl;
    }
    return 0;
}