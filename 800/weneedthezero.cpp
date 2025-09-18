#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int val=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            val=val^arr[i];
        }
        if(n%2==0){
            if(val==0){
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            continue;
        }
        else {
            cout<<val<<endl;
        }
    }
    return 0;
}