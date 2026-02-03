#include <bits/stdc++.h>
using namespace std;

int maxpieces(int n, int a,int b, int c, vector<int>&dp){
    if(n<0) return -1e9;
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int takea=1+maxpieces(n-a,a,b,c,dp);
    int takeb=1+maxpieces(n-b,a,b,c,dp);
    int takec=1+maxpieces(n-c,a,b,c,dp);
    return dp[n]=max(takea,max(takeb,takec));
}
void solve(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int>dp(n+1,-1);
    maxpieces(n,a,b,c,dp);
    cout<<dp[n]<<endl;
}
int main(){
    solve();
}