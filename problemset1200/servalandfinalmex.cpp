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
        vector<int>arr(n);
        vector<int>containszero; 
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            arr[i]=el;
            if(el==0) containszero.push_back(i); 
        }
        if(!containszero.size()) {
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
            continue;
        }
        if(arr[0]!=0){
            cout<<2<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            continue;
        }
        else if(arr[n-1]!=0){
            cout<<2<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<2<<endl;
            continue;
        }
        else{
                cout<<3<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<2<<" "<<n-1<<endl;
                cout<<1<<" "<<2<<endl;
        }
    }
    return 0;
}