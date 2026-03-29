#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            ll el;
            cin>>el;
            arr[i]=el;
        }
        vector<ll>ans;
        ans.push_back(0);
        for(int i=1;i<n-1;i++){
            ll el= ((arr[i+1]-arr[i])-(arr[i]-arr[i-1]))/2;
            ans.push_back(el);
        }
        ans.push_back(0);
        ll val=0;
        for(int i=1;i<n-1;i++){
            val+=(i*ans[i]);
        }
        ll lv= arr[0]-val;
        lv/=(n-1);
        ans[n-1]=lv;
        val=0;
        for(int i=1;i<n-1;i++){
            val+=i*ans[n-i-1];
        }
        ll fv=arr[n-1]-val;
        fv/=(n-1);
        ans[0]=fv;

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}