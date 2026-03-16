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
            cin>>arr[i];
        }
        ll ops=0;
        if(n%2==1){
            for(int i=1;i<n;i+=2){
                if(arr[i-1]+arr[i+1]>arr[i]){
                ll diff=(arr[i-1]+arr[i+1]-arr[i]);
                ll right=arr[i+1]-min(arr[i+1],diff);
                ll left=left-(diff+right-arr[i+1]);
                arr[i-1]=left;
                arr[i+1]=right;
                ops+=diff;
                }
            }
        }
        else{
            for(int i=1;i<n-2;i+=2){
                if(arr[i-1]+arr[i+1]>arr[i]){
                ll diff=(arr[i-1]+arr[i+1]-arr[i]);
                ll right=arr[i+1]-min(arr[i+1],diff);
                ll left=left-(diff+right-arr[i+1]);
                arr[i-1]=left;
                arr[i+1]=right;
                ops+=diff;
            }
        }
            ops+=max(0LL,arr[n-2]-arr[n-1]);
        }
        cout<<ops<<endl;
    }
    return 0;
}