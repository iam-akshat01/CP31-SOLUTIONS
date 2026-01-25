#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<ll> ans(n);
        vector<ll> modifs(q);

        
        vector<vector<ll>> mpp(62);

        for (int i = 0; i < n; i++) {
            cin >> ans[i];
            for (int j = 0; j < 62; j++) {
                if (ans[i] & (1LL << j)) {
                    mpp[j].push_back(i);
                    break;
                }
            }
        }

        ll minmodif = LLONG_MAX;
        for (int i = 0; i < q; i++) {
            cin >> modifs[i];
            minmodif = min(minmodif, modifs[i]);
        }

        for (int i = 0; i < q; i++) {
            ll sb = modifs[i];
            ll add = 1LL << (sb - 1);

            
            for (int bit = sb; bit < 62; bit++) {
                for (ll idx : mpp[bit]) {
                    ans[idx] += add;
                    mpp[sb - 1].push_back(idx);
                }
                mpp[bit].clear();
            }

            
            if (sb == minmodif) break;
        }

        for (ll x : ans) cout << x << " ";
        cout << '\n';
    }
    return 0;
}
