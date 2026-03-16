#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        ll even=0,odd=0,oddc=0,maxi=LLONG_MIN;
        for(int i=0;i<n;i++){
            ll el;
            cin>>el;
            oddc+=(el%2);
            if(el%2==0) even+=el;
            else odd+=el;
            maxi=max(maxi,el);
        }
        if(oddc==0 ||oddc==n){
            cout<<maxi<<endl;
            continue;
        }
        ll sum= even+ (odd-(oddc-1));
        cout<<sum<<endl;
    }
    return 0;
}