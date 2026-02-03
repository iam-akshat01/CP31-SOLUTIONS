#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        map<int,int>mp;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            mp[el]++;
            arr[i]=el;
        }
        bool check=0;
        for(auto it:mp){
            if(it.second%x!=0){
                check=1;
                break;
            }
        }
        if(check==1){
            cout<<0<<endl;
            continue;
        }
        map<int,int>interm;
        long long answer=0;
        int s=0,e=0;
        while(e<n){
            int el=arr[e];
            interm[el]++;
            
            while(interm[el]>(mp[el]/x)){
                    int s_el=arr[s];
                    s++;
                    interm[s_el]--;
            }
            
            e++;
            answer+=(e-s);
        }
        cout<<answer<<endl;
    }
    return 0;
}