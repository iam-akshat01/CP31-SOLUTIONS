#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long>arr(n);
        long long total=b-1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<a){
                total+=arr[i];
            }
            else total+=a-1;
        }
        cout<<total+1<<endl;
    }
    return 0;
}