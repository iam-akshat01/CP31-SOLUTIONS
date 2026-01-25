#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        map<ll,ll> mp_a, mp_b;

        for(int i = 0; i < n; i++){
            ll el;
            cin >> el;
            el = ((el % k) + k) % k;
            mp_a[el]++;
        }

        for(int i = 0; i < n; i++){
            ll el;
            cin >> el;
            el = ((el % k) + k) % k;
            mp_b[el]++;
        }

        bool check = true;

        for(auto &p : mp_a){
            ll r = p.first;
            ll cr = (k - r) % k;

            ll a1 = mp_a[r];
            ll a2 = mp_a.count(cr) ? mp_a[cr] : 0;
            ll b1 = mp_b.count(r) ? mp_b[r] : 0;
            ll b2 = mp_b.count(cr) ? mp_b[cr] : 0;

            if(a1 + a2 != b1 + b2){
                check = false;
                break;
            }
        }

        cout << (check ? "YES\n" : "NO\n");
    }
}
