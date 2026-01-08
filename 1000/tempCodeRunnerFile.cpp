#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int ans = round(float(r)/(b+1));
        string s;
        string append;
        for(int i=1;i<=ans;i++){
            append+="R";
        }
        append+="B";
        while(b>0 && r>0){
            s+=append;
            r-=ans;
            b-=1;
        }
        while(r>0){
            s+='R';
            r--;
        }
        while(b>0){
            s+='B';
            b--;
        }
        cout<<s<<endl;
    }
    return 0;
}