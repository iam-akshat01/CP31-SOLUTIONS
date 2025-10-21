#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int o=0,z=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)z++;
            if(a[i]==1)o++;
            sum+=a[i];
        }
        long long ans=0;
        if(o==0){
            cout<<0<<endl;
            continue;
        }
        ans=pow(2,z)*o;
        cout<<ans<<endl;
    }
}