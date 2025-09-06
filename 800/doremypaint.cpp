#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int sum=arr[0]+arr[n-1];
        bool check=0;
        for(int i=1;i<n-1;i++){
            if(arr[i]+arr[n-i]!=sum || (i!=n-i-1 && arr[i]+arr[n-i-1]!=sum)){
                check=1;
            }
            if(check==1) break;
        }
        if(check==1){
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}