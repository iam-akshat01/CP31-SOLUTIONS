#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int>arr(n);
        int xr=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            xr=xr^(arr[i]);
        }
        if(xr==0){
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
            continue;
        }
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
    }
    return 0;
}