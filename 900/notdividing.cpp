#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            int prevnum=arr[i];
            int num=arr[i+1];
            if(prevnum==1){
                prevnum++;
                arr[i]=prevnum;
            }
            if(num==1){
                num++;
                arr[i+1]=num;
            }
            if(arr[i+1]%arr[i]==0){
                num++;
                arr[i+1]=num;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}