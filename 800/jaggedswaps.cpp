#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>values(n);
        for(int i=0;i<n;i++){
            cin>>values[i];
        }
        bool check=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<n-1;j++){
                if(values[j]>values[j-1] && values[j]>values[j+1]){
                    check=1;
                    swap(values[j],values[j+1]);
                }
            }
            if(check==0) break;
            check=0;
        }
        bool sc=0;
        for(int i=1;i<=n;i++){
            if(values[i-1]!=i) sc=1;
        }
        if(sc==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}