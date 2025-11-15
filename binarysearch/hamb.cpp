#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long b,s,c;
    cin>>b>>s>>c;
    long long pb,ps,pc;
    cin>>pb>>ps>>pc;
    long long t;
    cin>>t;
    long long cb,cs,cc;
    int x=s.size();
    for(int i=0;i<x;i++){
        if(s[i]=='B') cb++;
        else if(s[i]=='S') cs++;
        else cc++;
    }
    long long chb=(b/cb);
    long long chs=(s/cs);
    long long chc=(c/cc);
    
}