#include <bits/stdc++.h>
using namespace std;
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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<long long> sorted = a;
        sort(sorted.begin(), sorted.end());
        vector<long long> prefix(n);
        prefix[0] = sorted[0];
        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + sorted[i];
        for (int i = 0; i < n; i++)
        {
            long long x = a[i];
            int pos = upper_bound(sorted.begin(), sorted.end(), x) - sorted.begin() - 1;
            long long prefix_sum = prefix[pos];
            int ub_index = upper_bound(sorted.begin(), sorted.end(), prefix_sum) - sorted.begin() - 1;
            a[i] = ub_index;
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}