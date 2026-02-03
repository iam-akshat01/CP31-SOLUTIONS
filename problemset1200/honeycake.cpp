#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ipow(ll base, ll exp)
{
    ll res = 1;
    while (exp--)
        res *= base;
    return res;
}

map<ll, ll> primefactors(ll n)
{
    map<ll, ll> ans;
    while (n % 2ll == 0)
    {
        n /= 2ll;
        ans[2]++;
        if (n == 1)
            return ans;
    }
    for (ll i = 3; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            ans[i]++;
            if (n == 1)
                return ans;
        }
    }
    if (n > 2)
    {
        ans[n] = 1;
    }
    return ans;
}

int main()
{

    ll w, h, d;
    cin >> w >> h >> d;
    ll n;
    cin >> n;
    map<ll, ll> mw = primefactors(w);
    map<ll, ll> mh = primefactors(h);
    map<ll, ll> md = primefactors(d);
    map<ll, ll> mn = primefactors(n);
    ll cw = 1, ch = 1, cd = 1;
    bool check = 1;
    for (auto it : mn)
    {
        ll pf = it.first;
        ll freq = it.second;
        // check the cuts
        if (mw.find(pf) != mw.end())
        {
            ll take = min(freq, mw[pf]);
            cw *= ipow(pf, take);
            freq -= take;
            if (freq == 0)
                continue;
        }

        if (mh.find(pf) != mh.end())
        {
            ll take = min(freq, mh[pf]);
            ch *= ipow(pf, take);
            freq -= take;
            if (freq == 0)
                continue;
        }

        if (md.find(pf) != md.end())
        {
            ll take = min(freq, md[pf]);
            cd *= ipow(pf, take);
            freq -= take;
            if (freq == 0)
                continue;
        }

        if (freq > 0ll)
        {
            check = 0;
            break;
        }
    }
    if (check == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << cw - 1 << " " << ch - 1 << " " << cd - 1;
    cout << endl;
}