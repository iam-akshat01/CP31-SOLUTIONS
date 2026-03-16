#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<ll> absPref(n), suff(n);

        absPref[0] = a[0];
        for(int i = 1; i < n; i++)
            absPref[i] = absPref[i-1] + llabs(a[i]);

        for(int i = n-1; i >= 0; i--)
            suff[i] = a[i] + (i+1 < n ? suff[i+1] : 0);

        ll ans = LLONG_MIN;

        for(int k = 0; k < n; k++){
            ll left  = (k > 0)   ? absPref[k-1] : 0;
            ll right = (k < n-1) ? suff[k+1]    : 0;
            ans = max(ans, left - right);
        }

        cout << ans << "\n";
    }
}
