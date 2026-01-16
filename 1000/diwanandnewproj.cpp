#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++)
        {
            int el;
            cin >> el;
            pq.push({el, i});
        }
        vector<int> ans(n + 1);
        int fill = 1;
        ans[0] = n + 1;
        ll tot = 0;
        while (!pq.empty())
        {
            auto st = pq.top();
            int cost = st.first;
            int idx = st.second;
            pq.pop();
            ans[idx+1] = n + 1 + fill;
            tot += 1ll*fill * 2 * cost;
            if (!pq.empty())
            {
                auto s = pq.top();
                int cst = s.first;
                int ix = s.second;
                pq.pop();
                ans[ix+1] = n + 1 - fill;
                tot += 1ll*fill * 2 * cst;
            }
            fill++;
        }
        cout<<tot<<endl;
        for(int i=0;i<n+1;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}