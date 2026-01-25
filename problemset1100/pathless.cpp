#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int sum=0;
        map<int,vector<int>>mpp;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            mpp[el].push_back(i);
            sum+=el;
        }
        if(sum==s || sum+2<=s){
            cout<<-1<<endl;
            continue;
        }
        else{
            int x=mpp[0].size();
            for(int i=0;i<x;i++){
                cout<<0<<" ";
            }
            int y=mpp[2].size();
            for(int i=0;i<y;i++){
                cout<<2<<" ";
            }
            int z=mpp[1].size();
            for(int i=0;i<z;i++){
                cout<<1<<" ";
            }
            cout<<endl;
            continue;
        }

    }
    return 0;
}