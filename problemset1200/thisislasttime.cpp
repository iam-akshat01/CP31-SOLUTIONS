#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<vector<ll>>arr(n,vector<ll>(3));
        for(int i=0;i<n;i++){
            ll l,r,maxp;
            cin>>l>>r>>maxp;
            arr[i]={l,r,maxp};
        }
        ll maxscore=k;
        sort(arr.begin(),arr.end());
        int idx=0;
        ll points=k;
        while(idx<n){
            int ind1 = upper_bound(
                    arr.begin(),
                    arr.end(),
                    points,
                    [](ll value, const vector<ll>& v){
                        return value < v[0];
                    }
                ) - arr.begin();

            ll maxpoints=LLONG_MIN;
            for(int i=idx;i<ind1;i++){
                if(points>=arr[i][0] && points<=arr[i][1]){
                    maxpoints=max(maxpoints, arr[i][2]);
                }
            }
            if(maxpoints<=points){
                break;
            }
            else{
                points=maxpoints;
                idx=ind1;
            }
        }
        cout<<points<<endl;
    }
    return 0;
}