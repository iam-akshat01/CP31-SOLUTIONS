#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        bool check=0;
        for(int i=1;i<n;i++){
            if((s[i]=='<' && s[i-1]=='>') || (s[i]=='*' && s[i-1]=='>') || (s[i]=='<' && s[i-1]=='*')||(s[i]=='*' && s[i-1]=='*')){
                check=true;
                break;
            }
        }
        if(check){
            cout<<-1<<endl;
            continue;
        }
        // else find the maximum length of >>>**>>> or <<<**<<<
        int lcount=0,mlcount=0,rcount=0,mrcount=0;
        for(int i=0;i<n;i++){
            if(s[i]!='>'){
                lcount++;
                mlcount=max(mlcount,lcount);
            }
            else lcount=0;
        }

        for(int i=0;i<n;i++){
            if(s[i]!='<'){
                rcount++;
                mrcount=max(mrcount,rcount);
            }
            else rcount=0;
        }
        cout<<max(mlcount,mrcount)<<endl;
    }
}