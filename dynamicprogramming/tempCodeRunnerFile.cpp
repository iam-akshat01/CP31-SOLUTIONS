#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
    vector<int> rank, parent, size;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        vector<vector<int>>arr(n);
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            arr[i]={r-l,l,r,i};
        }
        sort(arr.begin(),arr.end());
        DisjointSet ds(2*n);
        set<int>ans; vector<int>fans;
        for(int i=0;i<n;i++){
            int l=arr[i][1];
            int r=arr[i][2];
            if(ds.findUPar(l)!=ds.findUPar(r)){
                ds.unionBySize(l,r);
                fans.push_back(i);
                for(int j=l+1;j<=r;j++){
                    ans.insert(j);
                }
            }
        }
        cout<<int(ans.size())<<endl;
        for(int i=0;i<fans.size();i++){
            cout<<fans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}