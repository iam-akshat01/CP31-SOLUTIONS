#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    b.push_back(a[0]);
    int prev = a[0];
    for(int i=1;i<n;i++){
        int pres=a[i];
        if(pres>=prev){
            b.push_back(pres);
        }
        else if(pres>1){
            b.push_back(pres-1);
            b.push_back(pres);
        }
        else{
            b.push_back(pres);
            b.push_back(pres);
        }
        prev=pres;
    }
    int x=b.size();
    cout<<x<<endl;
    for(int i=0;i<x;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}