#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m;
    cin>>n>>m;
    vector<string>str(n);
    vector<ll>totaloccs(26,0);
    vector<vector<ll>>presoccs(n,vector<ll>(26,0));
    vector<ll>sumoccs(26,0);
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        str[i]=x;
        int len = x.size();
        for(int j=0;j<len;j++){
            presoccs[i][x[j]-'A']++;
            totaloccs[x[j]-'A']+=m;
            sumoccs[x[j]-'A']++;
        }
    }
    //now, we will assume every word is misplaced
    vector<ll>ans;
    
    for(int i=0;i<n;i++){
        bool canbeMade=true;
        ll minival=INT_MAX;
        vector<ll>psumoccs=sumoccs;
        vector<ll>ptotaloccs=totaloccs;
        vector<ll>poccs=presoccs[i];

        for(int j=0;j<26;j++){
            psumoccs[j]-=poccs[j];
            ptotaloccs[j]-=((m+1)*poccs[j]);
            if(ptotaloccs[j]<0) {
                canbeMade=false;
                break;
            }
            if(!ptotaloccs[j] && !psumoccs[j]) continue;
            ll labelsmade= (ptotaloccs[j]/psumoccs[j]);
            minival=min(minival,labelsmade);
        }
        if(!canbeMade) {
            ans.push_back(-1);
        }
        else ans.push_back(minival);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}