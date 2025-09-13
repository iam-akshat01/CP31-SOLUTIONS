#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans(n);
        bool sorted=1;
        int mindiff=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>ans[i];
            if(i>0 && ans[i]>=ans[i-1]){
                mindiff=min(mindiff,ans[i]-ans[i-1]);
            }
            if(i>0 && ans[i]<ans[i-1]){
                sorted=0;
            }
        }
        if(sorted==0){
            cout<<0<<endl;
            continue;
        }
        cout<<(mindiff/2)+1<<endl;
        
    }
}