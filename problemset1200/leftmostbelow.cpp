#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>arr(n);
        bool check=1;
        bool check2=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i>0 && arr[i-1]<arr[i]){
                check=0;
            }
            if(i>1 && arr[i-1]<arr[i] && arr[i-1]<arr[i-2] && arr[i]>=(2*arr[i-1])){
                check2=0;
            }
        }
        if(check==1){
            cout<<"Yes"<<endl;
            continue;
        }
        if(check2==0){
            cout<<"No"<<endl;
            continue;
        }
        bool check3=0;
        ll fnum=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]+1>2ll*fnum) {
                check3=1;
                break;
            }
        }
        if(check3==1){
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}