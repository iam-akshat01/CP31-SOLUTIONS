#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int an;
        
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            if(i==0){
                an=el;
            }
            an=(an&el);
        }
        cout<<an<<endl;
    }
}