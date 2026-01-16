#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll reloop(vector<vector<ll>>&a, vector<ll>&pre, int idx){
    int n=pre.size();
    while(idx<n){
    ll sum = pre[idx];
    int ind = upper_bound(
    a.begin(), a.end(), sum,
    [](ll value, const vector<ll>& v) {
        return value < v[0];
    }) - a.begin()-1;
    if(ind==idx){
        break;
    }
    idx=ind;
    if(idx==n-1) break;
    }
    return idx;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<vector<ll>>a(n);
        for(ll i=0;i<n;i++){
            ll el;
            cin>>el;
            a[i]={el,i};
        }
        sort(a.begin(),a.end());
        vector<ll>pre(n);
        ll sum=a[0][0];
        pre[0]=sum;
        for(ll i=1;i<n;i++){
            sum+=a[i][0];
            pre[i]=sum;
        }
        vector<ll>answer(n,n-1);
        for(int i=0;i<n;i++){
            if(i!=0 && a[i][0]==a[i-1][0]){
                answer[a[i][1]]=answer[a[i-1][1]];
                continue;
            }
            ll inp=reloop(a,pre,i);
            if(inp==n-1){
                break;
            }
            answer[a[i][1]]=inp;
        }
        for(int i=0;i<n;i++){
            cout<<answer[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}