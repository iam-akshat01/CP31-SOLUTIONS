#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,h,k;
        cin>>n>>h>>k;
        vector<ll>ans(n);
        ll sum=0;
        vector<ll>psum(n) ,minimums(n);
        for(int i=0;i<n;i++){
            ll el;
            cin>>el;
            ans[i]=el;
            sum+=el;
            psum[i]=sum;
            if(i==0) minimums[i]=0;
            else{
                if(el<ans[minimums[i-1]]){
                    minimums[i]=i;
                }
                else minimums[i]=minimums[i-1];
            }
        }
        ll quo=(h/sum);
        ll rem=(h%sum);

        vector<ll>maxivals(n);
        maxivals[n-1]=n-1;
        for(int i=n-2;i>=0;i--){
            if(ans[i]>ans[maxivals[i+1]]){
                maxivals[i]=i;
            }
            else maxivals[i]=maxivals[i+1];
        }
        
        ll minitime=(quo*(n+k));
        if(rem==0){
            cout<<minitime-k<<endl;
            continue;
        }
        bool check=false;
        for(int i=0;i<n-1;i++){
            ll s=psum[i];
            ll x=s-ans[minimums[i]]+ans[maxivals[i+1]];
            s=max(x,s);
            if(s>=rem){
                minitime+=i+1;
                check=true;
                break;
            }
        }
        if(check==false){
            minitime+=n;
        }
        cout<<minitime<<endl;
    }
    return 0;
}