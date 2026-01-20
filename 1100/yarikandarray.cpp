#include <bits/stdc++.h>
using namespace std;

int findsum(vector<int> &a)
{
    int n = a.size();
    int curr = a[0];
    int ans = a[0];

    for (int i = 1; i < n; i++)
    {
        if ((abs(a[i]) % 2) != (abs(a[i - 1]) % 2))
        {
            curr = max(a[i], curr + a[i]);
        }
        else
        {
            curr = a[i];
        }
        ans = max(ans, curr);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> dp(n, -1);
        int ans = findsum(arr);
        cout << ans << endl;
    }
}