#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1){
            cout<<x<<endl;
            continue;
        }
        int ot=0;
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<n-1;i++){
            if((i|x)==x){
                ans.push_back(i);
                ot=(ot|i);
            }
            else{
                break;
            }
        }
        int sz=ans.size();
        if(sz==n-1){
            if((ot==x && ((n-1)|ot)==ot) || (n-1|ot)==x){
                ans.push_back(n-1);
            }
            else ans.push_back(x);
        }
        else{
            for(int i=0;i<n-sz;i++){
                ans.push_back(x);
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}