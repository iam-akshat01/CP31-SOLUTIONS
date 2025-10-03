#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        map<int,long long>preSum;
        for(int i=1;i<=n;i++){
            long long num;
            cin>>num;
            if(i==1)preSum[i]=num;
            else{
                preSum[i]=preSum[i-1]+num;
            }
        }
        long long final=preSum[n];
        for(int i=0;i<q;i++){
            int l,r,k;
            cin>>l>>r>>k;
            long long s;
            if(l==1){
                s=preSum[r];
            }
            else s=preSum[r]-preSum[l-1];
            long long target=1ll*(r-l+1)*k;
            if((final-(s-target))%2==1) {
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
    }
    return 0;
}