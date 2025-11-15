#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long maxi=a[0],mini=a[0];
        int changes=0;
        int s=0,e=0;
        while(e<n){
            maxi=max(a[e],maxi);
            mini=min(mini,a[e]);
            if((maxi-mini)<=2*x){
                e++;
            }
            else{
                s=e;
                changes+=1;
                maxi=a[e];
                mini=a[e];
            }
            if(e==n) changes++;
        }
        cout<<changes-1<<endl;
    }
    return 0;
}