#include <bits/stdc++.h>
using namespace std;

long long run(long long x, const string &s) {
    int n = s.size(), i = 0;
    long long t = 0;
    while (x > 0) {
        if (s[i] == 'A') x -= 1;
        else x /= 2;
        t++;
        i = (i + 1) % n;
    }
    return t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        vector<long long> a(q);
        for (auto &x : a) cin >> x;

        bool allA = true, allB = true;
        for (char c : s) {
            if (c != 'A') allA = false;
            if (c != 'B') allB = false;
        }

        for (long long x : a) {
            long long ans;
            if (allA) ans = x;
            else if (allB) {
                ans = 0;
                while (x > 0) {
                    x /= 2;
                    ans++;
                }
            } else ans = run(x, s);
            cout << ans << "\n";
        }
    }
    return 0;
}
