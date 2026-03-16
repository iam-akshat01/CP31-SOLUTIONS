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
        int tot = 0, segs = 0;
        vector<int> arr(n);
        vector<int> freqarr(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int el;
            cin >> el;
            arr[i] = el;
            mp[el]++;
            if (mp[el] == 1)
                tot++;
            freqarr[i] = tot;
        }
        tot = 0;
        int end = n - 1;
        mp.clear();
        while (end >= 0)
        {
            for (int i = end; i >= 0; i--)
            {
                mp[arr[i]]++;
                if (mp[arr[i]] == 1)
                    tot++;
                if (tot == freqarr[end])
                {
                    segs++;
                    tot = 0;
                    mp.clear();
                    end = i - 1;
                }
            }
        }
        cout<<segs<<endl;
    }

    return 0;
}