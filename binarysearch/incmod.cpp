#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll m,n;
    cin>>n>>m;

    vector<ll>anss(n);
    for(int i=0;i<n;i++){
        cin>>anss[i];
    }

    ll s=0; ll e=m;
    ll a=0;
    while(e>=s){
        vector<ll>ans=anss;
        ll mid= s+((e-s)>>1);
        bool check=true;
        for(ll i=1;i<n;i++){
            if(ans[i]==ans[i-1])continue;
            else if(ans[i]<ans[i-1]){
                if(ans[i-1]-ans[i]<=mid){
                    ans[i]=ans[i-1];
                }
                else{
                    if(i==1){
                        if(m-ans[i-1]<=mid){
                            ans[0]=0;
                            i==1;
                            continue;
                        }
                    }
                    else{
                    check=false;
                    break;
                }}
            }
            else{
                if(m-(ans[i]-ans[i-1])<=mid){
                    ans[i]=ans[i-1];
                }
            }
        }
        if(check==false){
            s=mid+1;
        }
        else{
            a=mid;
            e=mid-1;
        }
    }
    cout<<a<<endl;
}