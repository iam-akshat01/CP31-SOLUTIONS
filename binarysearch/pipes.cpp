#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    ll s = 1, e = k - 1;
    ll ans = -1;
    while (s <= e)
    {
        ll m = s + ((e - s) >> 1); // number of splitters
        
        ll last = k - m;
        ll tot = 1 + (k - 1 + last) * m / 2;

        if (tot == n)
        {
            ans = m;
            break;
        }
        else if (tot > n)
        {
            ans = m;
            e = m - 1;
        }
        else
            s = m + 1;
    }
    cout << ans << endl;
}