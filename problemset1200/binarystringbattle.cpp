#include <bits/stdc++.h>
using namespace std ;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int num=0;
        for(int i=0;i<n;i++){
            if(str[i]=='1') num++;
        }
        if(num<=k) {
            cout<<"ALICE"<<endl;
            continue;
        }
        if(n>=2*k){
            cout<<"BOB"<<endl;
            continue;
        }
        cout<<"ALICE"<<endl;
    }
    return 0;
}