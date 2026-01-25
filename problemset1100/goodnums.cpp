#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

ll countels(ll l, ll r, ll d) {
    return r / d - (l - 1) / d;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll tot=0;
        tot+=countels(l,r,2);
        tot+=countels(l,r,3);
        tot+=countels(l,r,5);
        tot+=countels(l,r,7);
        tot-=countels(l,r,6);
        tot-=countels(l,r,15);
        tot-=countels(l,r,35);
        tot-=countels(l,r,14);
        tot-=countels(l,r,21);
        tot-=countels(l,r,10);
        tot-=countels(l,r,210);
        tot+=countels(l,r,30);
        tot+=countels(l,r,105);
        tot+=countels(l,r,70);
        tot+=countels(l,r,42);
        
        cout<<r-l+1-tot<<endl;
    }
    return 0;
}