#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> precomp(ll n)
{
    vector<ll> divs;
    for (int d = 1; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            divs.push_back(d);
            if (d != n / d)
                divs.push_back(n / d);
        }
    }
    return divs;
}

ll checkdiff(vector<ll>&arr, ll fact){
    ll maxsum=LLONG_MIN, minsum=LLONG_MAX;
    ll n=arr.size();
    if(n==1) return 0;
    for(ll i=0;i<n;i+=fact){
        ll sum= i==0? arr[fact-1]: arr[i+fact-1]-arr[i-1];
        maxsum=max(maxsum, sum);
        minsum=min(minsum,sum);
    }
    return maxsum-minsum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> factors = precomp(n);
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            ll el;
            cin>>el;
            if(i>0)arr[i]=el+arr[i-1];
            else arr[i]=el;
        }
        int x=factors.size();
        ll maxi=LLONG_MIN;
        for(int i=0;i<x;i++){
            ll answer=checkdiff(arr,factors[i]);
            maxi=max(maxi,answer);
        }
        cout<<maxi<<endl;
    }
    return 0;
}