#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str ;
        cin>>str;
        vector<int>seen(26,0);
        int total=0;
        for(int i=0;i<n;i++){
            if(seen[str[i]-'a']==0){
                total+=(n-i);
                seen[str[i]-'a']=1;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}