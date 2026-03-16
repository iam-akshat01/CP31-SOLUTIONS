#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        ll d=(1ll*n*(n+1))/2;
        if(sum%d!=0) {
            cout<<"No"<<endl;
            continue;
        }
        ll x=sum/d;
        ll fn=arr[0];
        ll diff= n*x - fn;
        if(diff%(n-1)!=0) {
            cout<<"No"<<endl;
            continue;
        }
        ll a=diff/(n-1);
        ll b=x-a;
        if(a*b<0){
            cout<<"No"<<endl;
            continue;
        }
        bool check=true;
        for(int i=0;i<n;i++){
            if((a*(i+1))+(b*(n-i)) != arr[i]){
                check=false;
                break;
            }
        }
        if(!check){
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}