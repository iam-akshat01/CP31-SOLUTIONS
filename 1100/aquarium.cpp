#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool can(ll h, const vector<ll>& arr, ll x)
{
    ll water = 0;
    for (ll ai : arr)
    {
        if (ai < h)
        {
            water += (h - ai);
            if (water > x) return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll x;
        cin >> n >> x;

        vector<ll> arr(n);
        ll mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }

        ll lo = 1, hi = mx + x, ans = 1;
        while (lo <= hi)
        {
            ll mid = lo + (hi - lo) / 2;
            if (can(mid, arr, x))
            {
                ans = mid;
                lo = mid + 1;
            }
            else
                hi = mid - 1;
        }

        cout << ans << "\n";
    }
}
