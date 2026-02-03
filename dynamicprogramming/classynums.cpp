#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll> ans;
void numbs(int pos, int cnt, ll num){
    if(pos==18) {
        ans.push_back(num);
        return ;
    }
    //take
    numbs(pos+1,cnt,num*10);
    if(cnt<3){
        for(int i=1;i<=9;i++){
            numbs(pos+1,cnt+1,num*10+i);
        }
    }
    return;
}
int main(){
    numbs(0,0,0ll);
    sort(ans.begin(),ans.end());
    ans.push_back(1000000000000000000);
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        cout<<upper_bound(ans.begin(),ans.end(),r)-lower_bound(ans.begin(),ans.end(),l)<<endl;
    }
    return 0;
}

