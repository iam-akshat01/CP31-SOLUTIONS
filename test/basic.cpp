#include <iostream>
#include <cmath>
#include <algorithm>

// Use long long to avoid overflow with large n
using namespace std;

void solve() {
    long long n, rK, cK, rD, cD;
    cin >> n >> rK >> cK >> rD >> cD;

    bool can_escape = false;

    // Check corner (0, 0)
    if (rK + cK < max(rD, cD)) {
        can_escape = true;
    }

    // Check corner (0, n)
    if (rK + (n - cK) < max(rD, n - cD)) {
        can_escape = true;
    }

    // Check corner (n, 0)
    if ((n - rK) + cK < max(n - rD, cD)) {
        can_escape = true;
    }

    // Check corner (n, n)
    if ((n - rK) + (n - cK) < max(n - rD, n - cD)) {
        can_escape = true;
    }

    if (can_escape) {
        cout << -1 << endl;
    } else {
        // If trapped, survival time is the Manhattan distance
        long long survival_time = abs(rK - rD) + abs(cK - cD);
        cout << survival_time << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}