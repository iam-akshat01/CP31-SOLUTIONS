#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = 1e15;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;

    vector<ll> arr(n);
    for (ll &v : arr) cin >> v;

    vector<ll> dp(x + 1, INF);
    dp[0] = 0;

    for (ll coin : arr) {
        for (ll t = coin; t <= x; t++) {
            dp[t] = min(dp[t], dp[t - coin] + 1);
        }
    }

    cout << (dp[x] >= INF ? -1 : dp[x]) << "\n";
}
