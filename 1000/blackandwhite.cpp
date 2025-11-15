#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int st=0,e=k-1;
        int w=0;
        for(int i=0;i<=e;i++){
            if(s[i]=='W')w++;
        }
        if(w==0){
            cout<<0<<endl;
            continue;
        }
        int minops=w;
        while(e+1<n){
            st++,e++;
            if(s[st-1]=='W' && s[e]!='W') w--;
            if(s[st-1]!='W' && s[e]=='W')w++;
            minops=min(minops,w);
        }
        cout<<minops<<endl;
    }
}