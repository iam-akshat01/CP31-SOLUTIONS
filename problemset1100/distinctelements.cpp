#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> b(n);
        for(int i=0;i<n;i++){
            ll el;
            cin>>el;
            b[i]=el;
        }
        vector<ll>a(n,0);
        a[0]=1;
        int cnt=1;
        for(int i=1;i<n;i++){
            ll diff=b[i]-b[i-1];
            if(i-diff>=0){
                a[i]=a[i-diff];
            }
            else a[i]=++cnt;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}