#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
    vector<int> parent, size;
public:
    DisjointSet(int n) {
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int findUPar(int node) {
        if (node == parent[node]) return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionBySize(int u, int v) {
        u = findUPar(u);
        v = findUPar(v);
        if (u == v) return;
        if (size[u] < size[v]) swap(u, v);
        parent[v] = u;
        size[u] += size[v];
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<vector<int>> arr(n);
        for(int i = 0; i < n; i++){
            int l, r;
            cin >> l >> r;
            arr[i] = {r - l, l, r, i};
        }

        sort(arr.begin(), arr.end());

        int mx = 0;
        for(auto &v : arr) mx = max(mx, v[2]);
        DisjointSet ds(mx + 1);

        vector<int> fans;

        for(int i = n-1; i >= 0; i--){
            int l = arr[i][1];
            int r = arr[i][2];

            if(ds.findUPar(l) != ds.findUPar(r)){
                for(int j = l; j < r; j++){
                    ds.unionBySize(j, j + 1);
                }
                fans.push_back(arr[i][3] + 1);
            }
        }

        sort(fans.begin(), fans.end());
        cout << fans.size() << "\n";
        for(int x : fans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
