#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> string(n);
        for(int i=0;i<n;i++){
            cin>>string[i];
        }
        if(n==1){
            if (string[0]=='.'){
                cout<<1<<endl;
            }
            else cout<<0<<endl;
            continue;
        }
        if(n==2){
            if(string[0]==string[1] && string[0]=='.'){
                cout<<2<<endl;
            }
            else if(string[0]!=string[1]){
                cout<<1<<endl;
            }
        }
    int i=2;
    bool flag=0;
    int count=0;
    if(string[0]=='.') count++;
    if(string[1]=='.') count++;
    while(i<n){
        if(string[i]=='.') count++;
        if(string[i]==string[i-1] && string[i-1]==string[i-2] && string[i]=='.'){
            flag=1;
        }
        i++;
    }
    if(flag==1){
        cout<<2<<endl;
        continue;
    }
    else{
        cout<<count<<endl;
        continue;
    }
    continue;
    }
}