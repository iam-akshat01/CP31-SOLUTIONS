#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<set<int>> a(m);
        vector<vector<int>>check(n);
        for(int i=0;i<n;i++){
            int sz;
            cin>>sz;
            for(int j=0;j<sz;j++){
                int el;
                cin>>el;
                a[el-1].insert(i);
                check[i].push_back(el);
            }
        }
        vector<int>impSets;
        int checkz=0;
        for(int i=0;i<m;i++){
            if(a[i].empty()){
                checkz=1;
                break;
            }
            if(a[i].size()==1){
                int set=*a[i].begin();
                impSets.push_back(set);
            }
        }
        if(checkz){
            cout<<"NO"<<endl;
            continue;
        }
        set<int>important(impSets.begin(),impSets.end());
        int sizee=important.size();
        if(n-sizee>=2){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
        
    }
    return 0;
}