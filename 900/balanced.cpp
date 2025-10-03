#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int maxw=1;
        int window=1;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]<=k){
                window++;
                maxw=max(maxw,window);
            }
            else window=1;
        }
        cout<<n-maxw<<endl;
    }
    return 0;
}