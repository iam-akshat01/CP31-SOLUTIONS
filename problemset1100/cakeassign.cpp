#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll k,x;
        cin>>k>>x;
        vector<int>processes;
        ll initval=1ll<<k;
        ll total=initval<<1;
        if(x==initval){
            cout<<0<<endl;
            cout<<endl;
            continue;
        }
        while(x!=initval){
            if(x>total-x){
                x=x-(total-x);
                processes.push_back(2);
            }
            else{
                x=x<<1ll;
                processes.push_back(1);
            }
        }
        reverse(processes.begin(),processes.end());
        cout<<processes.size()<<endl;
        for(int i=0;i<processes.size();i++){
            cout<<processes[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}