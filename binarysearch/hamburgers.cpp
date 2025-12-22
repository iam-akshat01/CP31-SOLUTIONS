#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    string s;
    cin >> s;
    long long ab, as, ac;
    cin >> ab >> as >> ac;
    long long pb, ps, pc;
    cin >> pb >> ps >> pc;
    long long r;
    cin >> r;
    int x = s.size();
    long long b = 0, sa = 0, c = 0;
    for (int i = 0; i < x; i++)
    {
        if (s[i] == 'B')
            b++;
        else if (s[i] == 'S')
            sa++;
        else
            c++;
    }
    ll z=0;

    ll st = 0, e = 1e13;
    ll ans = 0;
    while (e >= st)
    {
        ll mid = st + ((e - st) >> 1);
        ll bread = max((mid * b - ab), z);
        ll sausage = max((mid * sa - as), z);
        ll cheese = max((mid * c - ac), z);

        ll total = pb * bread + ps * sausage + pc * cheese;
        if (total < r)
        {
            ans = mid;
            st = mid + 1;
        }
        else if (total > r)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            break;
        }
    }
    cout << ans << endl;
}