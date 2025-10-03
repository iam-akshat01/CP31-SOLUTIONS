#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        multimap<int, set<int>> setmap;
        int ways = 0;

        for (int i = 0; i < n; ++i) {
            int sz;
            cin >> sz;
            if (sz == m) ways++;
            set<int> currentSet;
            for (int j = 0; j < sz; ++j) {
                int element;
                cin >> element;
                currentSet.insert(element);
            }
            setmap.insert({sz, currentSet});
        }

        if (ways >= 3) {
            cout << "YES\n";
            continue;
        }

        set<int> fullUnion;
        for (auto &entry : setmap) {
            fullUnion.insert(entry.second.begin(), entry.second.end());
        }
        if ((int)fullUnion.size() == m) ways++;

        for (auto excludeIt = setmap.begin(); excludeIt != setmap.end(); ++excludeIt) {
            set<int> partialUnion;
            for (auto includeIt = setmap.begin(); includeIt != setmap.end(); ++includeIt) {
                if (includeIt == excludeIt) continue;
                partialUnion.insert(includeIt->second.begin(), includeIt->second.end());
            }
            if ((int)partialUnion.size() == m) ways++;
            if (ways >= 3) break;
        }

        cout << (ways >= 3 ? "YES\n" : "NO\n");
    }

    return 0;
}
