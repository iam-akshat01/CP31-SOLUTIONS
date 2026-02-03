#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007LL

int main(){
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<long long>dp(x+1,0);
    dp[0]=1LL;
    for(int i=1;i<=x;i++){
        for(int j=0;(j<n && arr[j]<=i);j++){
            
            dp[i] = (dp[i] + dp[i - arr[j]]) % MOD;

        }
    }
    cout<< dp[x]<<endl;
}