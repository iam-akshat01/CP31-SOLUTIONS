#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        map<long long,long long>mpp;
        long long maxi=1;
        for(int i=0;i<n;i++){
            long long el;
            cin>>el;
            mpp[el]++;
            maxi=max(maxi,mpp[el]);
        }
        if(maxi==n){
            cout<<0<<endl;
            continue;
        }
        long long ops=0;
        while((maxi<<1)<=n){
            ops+=(1+(maxi));
            maxi=(maxi<<1);
        }
        if(maxi<n){
        ops+=(1+(n-maxi));
        }
        cout<<ops<<endl;
        
    }
    return 0;
}
