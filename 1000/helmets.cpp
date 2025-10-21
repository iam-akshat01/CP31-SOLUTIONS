#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,p;
        cin>>n>>p;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            mpp[el]+=nums[i];
        }
        long long preach=0;
        long long c=0;
        for(auto it:mpp){
            long long cost=it.first;
            long long people=it.second;
            if(cost>=p && preach<n) {
                c+=(n-preach)*p;
                break;
            }
            if(preach+people>=n && cost<p){
                c+=(n-1-preach)*cost;
                c+=p;
                break;
            }
            c+=cost*people;
            preach+=people;
        }
        cout<<c<<endl;
    }
    return 0;
}