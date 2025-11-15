#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;
    while (t--) {
        int n,k,x;
        cin >> n >>k >> x;

        vector<int> ans(1e9,0);

        int maxi=INT_MIN; int mini=INT_MAX;

        for (int i = 0; i < n; i++) {
            int el;
            cin>>el;
            maxi=max(maxi,ans[i]);
            mini=min(mini,ans[i]);
        }

        

        
        bool found = false;
        for (int i = 0; i < primes.size(); i++) {
            if (hcf % primes[i] != 0) {
                cout << primes[i] << "\n";
                found = true;
                break;
            }
        }

        if (!found) cout << -1 << "\n"; 
    }

    return 0;
}
