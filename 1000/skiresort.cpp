#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>ind;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            if(el<=q){
                ind.push_back(i+1);
            }
        }
        int sz=ind.size();
        int s=0,e=0;
        long long ans=0;
        while(e<sz){
            while(e+1<sz && ind[e+1]==ind[e]+1){
                e++;
            }
            int x=(e-s+1);
            if(x>=k){
                ans+=((1ll*(x+1-k)*(x+2-k))/(1ll*2));
            }
            e++;
            s=e;
        }
        cout<<ans<<endl;
    }
    return 0;
}