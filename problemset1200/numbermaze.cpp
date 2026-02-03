#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;
        int big=max(j,k);
        int small=min(j,k);
        string bg = to_string(n);
        sort(bg.begin(), bg.end());
        string sm="";
        for(int i=1;i<big;i++){
            if(i==small){
                sm=bg;
            }
            next_permutation(bg.begin(),bg.end());
        }
        if(sm=="") sm=bg;
        int x=bg.length();
        int cnt=0;
        for(int i=0;i<x;i++){
            if(sm[i]==bg[i]){
                cnt++;
            }
        }
        cout<<cnt<<"A"<<x-cnt<<"B"<<endl;
    }
    return 0;
}