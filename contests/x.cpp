#include <bits/stdc++.h>
using namespace std;

long long get_cost(char target_char, const string& s) {
    vector<long long> pos;
    for (int i = 0; i < (int)s.size(); ++i)
        if (s[i] == target_char) pos.push_back(i);

    int k = pos.size();
    if (k <= 1) return 0;

    vector<long long> c(k);
    for (int i = 0; i < k; ++i) c[i] = pos[i] - i;

    int mid = k / 2;
    nth_element(c.begin(), c.begin() + mid, c.end());
    long long median = c[mid];

    long long cost = 0;
    for (auto val : c) cost += abs(val - median);
    return cost;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long cost_a = get_cost('a', s);
    long long cost_b = get_cost('b', s);
    cout << min(cost_a, cost_b) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
