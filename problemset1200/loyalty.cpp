#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>arr(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        ll u_bound=(sum%x);
        sort(arr.begin(),arr.end());
        sum=0;
        vector<ll>order;
        ll answer=0;
        ll bonuses=0, bonussum=0;
        ll s=0,e=n-1;
        while(e>=s){
            if(sum+arr[e]>=((bonuses+1)*x)){
                bonuses++;
                order.push_back(arr[e]);
                sum+=arr[e];
                bonussum+=arr[e];
                e--;
            }
            else{
                sum+=arr[s];
                order.push_back(arr[s]);
                s++;
            }
        }
        cout<<bonussum<<endl;
        for(ll i=0;i<n;i++){
            cout<<order[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}