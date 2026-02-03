#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    r = min(r, n - r);
    int res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - r + i) / i;
    }
    return res;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int sh1 = 0, sh2 = 0, qms = 0;
    int n = s1.size();

    for (char c : s1)
        sh1 += (c == '+') ? 1 : -1;

    for (char c : s2) {
        if (c == '?') qms++;
        else sh2 += (c == '+') ? 1 : -1;
    }

    int d = sh1 - sh2;

    if (abs(d) > qms || (qms + d) % 2 != 0) {
        cout << fixed << setprecision(12) << 0.0 << "\n";
        return 0;
    }

    int x = (qms + d) / 2;   
    double prob = 1.0 * nCr(qms, x) / (1 << qms);

    cout << fixed << setprecision(12) << prob << "\n";
}
