#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        if(i==0) ans[i]=el;
        else ans[i]=el+ans[i-1];
    }
    int minans=INT_MAX;
    int idx=0;
    for(int i=0;i<=n-k;i++){
        int cost=ans[i+k-1]-(i==0?0:ans[i-1]);
        minans=min(minans,cost);
        if(minans==cost) idx=i+1;
    }
    cout<<idx<<endl;
}