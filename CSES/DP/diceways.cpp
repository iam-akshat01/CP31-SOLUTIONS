#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

int main(){
    ll n;
    cin>>n;
    if(n>=1 && n<=6) {
        cout<<(1<<(n-1))<<endl;
        return 0;
    }
    vector<ll>dp(n+1,0);
    dp[1]=1; dp[2]=2; dp[3]=4; dp[4]=8; dp[5]=16; dp[6]=32;
    for(int i=7;i<=n;i++){
        for(int j=1;j<=6;j++){
            dp[i]+=dp[i-j];
            dp[i]=dp[i]%mod;
        }
    }
    cout<<dp[n]<<endl;
}