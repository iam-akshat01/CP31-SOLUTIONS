#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    using namespace std;

    int t;
    cin>>t;

    while (t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll ms= k/n;
        if(k%n!=0) ms++;
        ll ans=0;
        ll s=1, e=ms;
        while(e>=s){
            ll mid= s+(e-s)/2;
            ll numbs= m/(mid+1);
            if(ms-(numbs*mid) <= (m%(mid+1))){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        cout<<ans<<endl;   
    }
    return 0;
}