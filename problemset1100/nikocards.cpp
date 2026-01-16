#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        ll tmin=0,tmax=0;
        ll maxans=LLONG_MIN,minans=LLONG_MAX;
        for(int i=0;i<n;i++){
            ll maxians=max(tmax-a[i],b[i]-tmin);
            ll minians=min(tmin-a[i],b[i]-tmax);
            maxans= max(maxans,maxians);
            minans= min(minans,minians);
            tmax=maxians;
            tmin=minians;
        }
        cout<<tmax<<endl;
    }
    return 0;
}