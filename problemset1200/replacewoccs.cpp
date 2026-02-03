#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        map<int,vector<int>>check;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            check[arr[i]].push_back(i);
        }
        int sum=0;
        bool ans=1;
        for(auto it:check){
            sum+=(it.first);
            if(sum>n){
                ans=0;
                break;
            }
        }
        bool ans1=1;
        for(auto it: check){
            if(int(it.second.size())%it.first!=0){
                ans1=0;
                break;
            }
        }
        if(ans1==0 || ans==0){
            cout<<-1<<endl;
            continue;
        }
        vector<int>answer(n);
        int cnt=1;
        for(auto it:check){
            int sz=it.second.size();
            int prev=0;
            for(int i=0;i<sz;i++){
                if((i/it.first)!=prev){
                    prev=i/it.first;
                    cnt++;
                    answer[it.second[i]]=cnt;
                }
                else answer[it.second[i]]=cnt;
            }
            cnt++;
        }
        for(int i=0;i<n;i++){
            cout<<answer[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}