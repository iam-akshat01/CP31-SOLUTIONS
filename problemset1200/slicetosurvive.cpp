#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll simulate(ll n,ll m,ll a,ll b){
    ll cells=n*m;
    ll ans=1;

    while(cells>1){
        ll maxdim=max(m,n);
        if(maxdim==m){
            m=(m/2)+(m%2==1?1:0);
        }else{
            n=(n/2)+(n%2==1?1:0);
        }

        a=(n/2)+(n%2==1?1:0);
        b=(m/2)+(m%2==1?1:0);
        cells=m*n;
        ans++;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        ll n,m,a,b;
        cin>>n>>m>>a>>b;

        
        ll m1=min(b,m-b+1);
        ll ans1=simulate(n,m1,(n+1)/2,(m1+1)/2);

        
        ll n1=min(a,n-a+1);
        ll ans2=simulate(n1,m,(n1+1)/2,(m+1)/2);

        cout<<min(ans1,ans2)<<endl;
    }

    return 0;
}