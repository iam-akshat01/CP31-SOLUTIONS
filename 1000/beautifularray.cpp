#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        if(s<(k*b) || (s>(k*b+(n*(k-1))))){
            cout<<-1<<endl;
            continue;
        }
        else if(s>=(k*b)  && s<=((k*b)+(k-1))){
            cout<<s<<" ";
            for(int i=n-1;i>0;i--){
                cout<<0<<' ';
            }
            cout<<endl;
        }
        else{
            int cnt=0;
            long long t=s;
            cout<<(k*b)+(k-1)<<" ";
            cnt++;
            t-=((k*b)+(k-1));
            while(t-(k-1)>0){
                cout<<k-1<<" ";
                cnt++;
                t-=(k-1);
            }
            if(t>0){
            cout<<(t)<<" ";
            cnt++;
            }
            while(cnt<n){
                cout<<0<<" ";
                cnt++;
            }
            cout<<endl;
        }
    }
    return 0;
    
}