#include <bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            if(a>b){
                cout<<"First"<<endl;
                continue;
            }
            else{
                cout<<"Second"<<endl;
                continue;
            }
        }
        else{
            if(a<b){
                cout<<"Second"<<endl;
                continue;
            }
            else{
                cout<<"First"<<endl;
                continue;
            }
        }
    }
    return 0;
}