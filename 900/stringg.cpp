#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int diffcharsp=2;
        int diffcharsm=2;
        int cnt=2;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1] && arr[i]=='<'){
                cnt++;
                diffcharsp=max(cnt,diffcharsp);
            }
            else if(arr[i]==arr[i-1] && arr[i]=='>'){
                cnt++;
                diffcharsm=max(cnt,diffcharsm);
            }
            else cnt=2;
        }
        cout<<max(diffcharsm,diffcharsp)<<endl;
    }
    return 0;
}