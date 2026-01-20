#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==2 && k==3){
            cout<<"NO"<<endl;
            continue;
        }
        if(n==2){
            if(k==0){
                cout<<"YES"<<endl;
                cout<<"RL"<<endl<<"RL"<<endl;
                continue;
            }
            if(k==2){
                cout<<"YES"<<endl;
                cout<<"RR"<<endl<<"RL"<<endl;
                continue;
            }
            if(k==1){
                cout<<"YES"<<endl;
                cout<<"RL"<<endl<<"UR"<<endl;
                continue;
            }
            if(k==4){
                cout<<"YES"<<endl;
                cout<<"RR"<<endl<<"RR"<<endl;
                continue;
            }
        }
        vector<vector<char>>ans(n,vector<char>(n,'x'));
        int cnt=0;
        bool check=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[i][j]='L';
                cnt++;
                if(cnt==k) {check=1; break;}
            }
            if(check==1) break;
        }
        if(k%n==0){
            int sz=(k/n);
            for(int i=sz;i<n;i++){
                for(int j=0;j<n;j++){
                    if(j==n-1){
                        ans[i][j]='L';
                    }
                    else{
                        ans[i][j]='R';
                    }
                }
            }
        }
        else{
            int sz=k/n;
            int rem=k%n;
            if(sz==n-1 && rem==n-1){
                cout<<"NO"<<endl;
                continue;
            }
            for(int i=rem;i<n-1;i++){
                ans[sz][i]='R';
            }
            ans[sz][n-1]='D';
            for(int i=sz+1;i<n;i++){
                for(int j=0;j<n;j++){
                    if(j==n-1){
                        ans[i][j]='L';
                    }
                    else{
                        ans[i][j]='R';
                    }
                }
            }
            if(sz==n-1){
                ans[sz][sz]='L';
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}