#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string inp;
        cin >> inp;

        vector<int> check;
        for (int i = 0; i < n; i++) {
            if (inp[i] == '1') {
                check.push_back(i);
            }
        }

        // CASE 1: no '1' at all
        if (check.empty()) {
            cout << "YES\n";
            for (int i = n; i >= 1; i--) {
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }

        // CASE 2: all '1's
        if ((int)check.size() == n) {
            cout << "YES\n";
            for (int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }

        int x = check.size();
        bool ok = true;

        if (check[0] == 1 || check[x - 1] == n - 2) {
            ok = false;
        }

        for (int i = 1; i < x; i++) {
            if (check[i] - check[i - 1] == 2) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << "NO\n";
            continue;
        }

        vector<int> answay(n, 0);

        // fill '1' positions
        for (int idx : check) {
            answay[idx] = idx + 1;
        }

        // prefix
        int first = check[0];
        int cur = first;
        for (int i = 0; i < first; i++) {
            answay[i] = cur--;
        }

        // middle segments
        for (int i = 1; i < x; i++) {
            int l = check[i - 1];
            int r = check[i];
            int val = r;
            for (int pos = l + 1; pos < r; pos++) {
                answay[pos] = val--;
            }
        }

        // suffix
        cur = n;
        for (int i = check.back() + 1; i < n; i++) {
            answay[i] = cur--;
        }

        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            cout << answay[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
