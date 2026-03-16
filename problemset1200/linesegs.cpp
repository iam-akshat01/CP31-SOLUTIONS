#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ll sum = 0;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr.begin(), arr.end());
        ll dist = (x2 - x1) * (x2 - x1);
        dist += ((y2 - y1) * (y2 - y1));
        ll sumsq = sum * sum;
        bool check = 1;
        if (dist > sumsq)
        {
            check = 0;
        }
        if (n == 2)
        {
            if (((arr[1] - arr[0]) * (arr[1] - arr[0])) > dist)
            {
                check = 0;
            }
        }
        else if (n > 2)
        {
            sum -= arr[n - 1];

            if (((arr[n - 1] - sum) * (arr[n - 1] - sum)) > dist && sum<arr[n-1])
            {
                check = 0;
            }
        }
        else if (n == 1)
        {
            if ((arr[0] * arr[0]) != dist)
            {
                check = 0;
            }
        }
        if (check == 0)
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
    return 0;
}