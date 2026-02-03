#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,vector<int>>mp;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            mp[el].push_back(i);
            arr.push_back(el);
        }
        vector<int> bad;
        for (auto &it : mp) {
            if (it.second.size() < it.first) {
                bad.push_back(it.first);
            }
        }
        for (int x : bad) {
            mp.erase(x);
        }

        if(mp.size()==0){
            cout<<0<<endl;
            continue;
        }
        vector<int>dp(n+1,0);

        for(int i=n-1;i>=0;i--){
            int nonTake=dp[i+1];
            int take=0;
            int val=arr[i];
            if(mp.find(val)!=mp.end()){
                int ind=upper_bound(mp[val].begin(),mp[val].end(),i-1)-mp[val].begin();
                if(ind+val-1<mp[val].size()){
                    int f_ind=mp[val][ind+val-1];
                    take=val+dp[f_ind+1];
                }
            }
            dp[i]=max(take,nonTake);
        }

        cout<<dp[0]<<endl;
    }
}