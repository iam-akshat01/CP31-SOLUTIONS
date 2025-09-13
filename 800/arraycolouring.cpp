#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int nodd=0;
        int n;
        cin>>n;
        vector<int> cp(n);
        for(int i=0;i<n;i++){
            cin>>cp[i];
            if((cp[i]&1)==1) nodd+=1;
        }
        if((nodd&1)==1) {
            cout<<"No"<<endl;
        }
        else cout<<"Yes"<<endl;
    }
    return 0;
}