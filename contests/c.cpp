#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s, t;
        cin >> s >> t;

        int y = s.length();
        map<char, priority_queue<int>> mpp;

        for (int i = 0; i < y; i++) {
            mpp[s[i]].push(i);
        }

        int x = t.size();
        int pres = y;
        bool check = 1;

        for (int i = x - 1; i >= 0; i--) {
            if (mpp[t[i]].empty()) {
                check = 0;
                break;
            }
            int ind = mpp[t[i]].top();
            mpp[t[i]].pop();

            if (pres < ind) {
                check = 0;
                break;
            }
            pres = ind;
        }

        if (check)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
