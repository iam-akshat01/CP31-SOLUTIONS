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

        while(n>=(ans+1)){
            s+=append;
            n-=(ans+1);
        }
        while(n>0){
            s+="R";
            n--;
        }
        cout<<s<<endl;
    }
    return 0;
}