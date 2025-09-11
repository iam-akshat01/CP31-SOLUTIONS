#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int pivot = 0;
        sort(a.begin(), a.end());
        while (pivot < n - 1)
        {
            if (a[pivot] != a[pivot + 1])
            {
                break;
            }
            pivot++;
        }
        if (pivot == n - 1)
        {
            cout << -1 << endl;
            continue;
        }
        cout << pivot + 1 << " " << n - pivot-1 << endl;
        for (int i = 0; i < pivot + 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = pivot + 1; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}