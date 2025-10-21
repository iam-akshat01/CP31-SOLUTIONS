#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int start = 2 * b - c;
        if (start % a == 0 && start / a > 0)
        {
            cout << "Yes" << endl;
            continue;
        }
        int end = 2 * b - a;
        if (end % c == 0 && end / c > 0)
        {
            cout << "Yes" << endl;
            continue;
        }
        if ((a % 2 == 0 && c % 2 == 0) || (a % 2 == 1 && c % 2 == 1))
        {
            int mid = (a + c) >> 1;
            if (mid % b == 0 && mid / b > 0)
            {
                cout << "Yes" << endl;
                continue;
            }
        }
        cout << "No" << endl;
    }
    return 0;
}