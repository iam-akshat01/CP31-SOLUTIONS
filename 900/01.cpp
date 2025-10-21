#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x=s.size();
        int z=0,o=0;
        for(int i=0;i<x;i++){
            if(s[i]=='0')z++;
            else o++;
        }
        int df=min(z,o);
        if(df%2==0){
            cout<<"NET"<<endl;
            continue;
        }
        cout<<"DA"<<endl;
    }
    return 0;
}