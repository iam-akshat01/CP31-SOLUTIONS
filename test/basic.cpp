#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int e=0,o=0;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            if(el%2==0)e++;
            else o++;
        }
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
        }
        if(n==1){
            if(e==1){
                cout<<0<<endl;
                continue;
            }
            else{
                cout<<1<<endl;
                continue;
            }
        }
        if(e>1){
            cout<<0<<endl;
            continue;
        }
        else if(e==1){
            cout<<1<<endl;
            continue;
        }
        else{
            cout<<2<<endl;
            continue;
        }
    }
}