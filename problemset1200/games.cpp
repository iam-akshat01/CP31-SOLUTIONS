#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        map<int,int>mpa,mpb;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            mpa[el]++;
        }
        for(int i=0;i<m;i++){
            int el;
            cin>>el;
            mpb[el]++;
        }
        int eqoccs=0;
        for(auto it:mpa){
            if(mpb.find(it.first)!=mpb.end()){
                eqoccs+=min(it.second, mpb[it.first]);
            }
        }
        
        int ans=0;
        int c=min(m-eqoccs, n-eqoccs);
        if(c==n-eqoccs){
            ans=2*(c)+1;
        }
        else{
            ans=2*(c)+2;
        }

        cout<<ans<<endl;
    }
    return 0;
}


