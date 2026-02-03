#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans(n);
        int numzros=0;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>ans[i];
            if(ans[i]==0) numzros++;
            sum+=ans[i];
        }
        sort(ans.begin(),ans.end());
        int answer=1;
        for(int i=n-numzros;i>1;i--){
            if(sum-i>=(n-1)){
                answer=i;
                break;
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}