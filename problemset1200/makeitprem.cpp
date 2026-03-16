#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<2*n-1<<endl;
        cout<<1<<" "<<1<<" "<<n<<endl;
        for(int i=2;i<=n;i++){
            cout<<i<<" "<<1<<" "<<i-1<<endl;
            cout<<i<<" "<<i<<" "<<n<<endl;
        }
    }
    return 0;
}