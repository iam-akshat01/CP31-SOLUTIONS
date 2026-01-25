#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll ops = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            ll a, b, c, d;
            cin >> a >> b >> c >> d;
            if (a > c) {
                ops += (a - c);
            }
            if (b > d) {
                ops += (min(a, c) + (b - d));
            }
        }
        cout << ops << '\n';
    }
    return 0;
}
