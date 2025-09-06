#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int chances = 0; // start at 0
        bool found = false;

        // check original string
        if (x.find(s) != string::npos) {
            cout << 0 << endl;
            continue;
        }

        while (chances < 5) { // allow up to 5 doublings
            chances++;
            x += x; // double the string
            if (x.find(s) != string::npos) {
                cout << chances << endl;
                found = true;
                break;
            }
        }

        if (!found) cout << -1 << endl;
    }
    return 0;
}
