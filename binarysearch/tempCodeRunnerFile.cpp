#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll m,n;
    cin>>n>>m;

    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }

    ll s=0; ll e=m;

    while(e>=s){
        ll mid= s+((e-s)>>1);
        bool check=true;
        for(int i=1;i<n;i++){
            if(ans[i]==ans[i-1])continue;
            else if(ans[i]<ans[i-1]){
                if(ans[i-1]-ans[i]<=mid){
                    ans[i]=ans[i-1];
                }
                else{
                    check=false;
                    break;
                }
            }
            else{
                if(m-(a[i]-a[i-1])<=mid){
                    ans[i]=ans[i-1];
                }
            }
        }
        if(check==false){
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
    }
    cout<<ans<<endl;
}