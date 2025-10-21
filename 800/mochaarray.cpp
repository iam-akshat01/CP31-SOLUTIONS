#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int hcf=gcd(a[i],a[j]);
                if(hcf<=2){
                    c=1;
                    break;
                }
                
            }
            if(c==1) break;
        }
        if(c==1){
            cout<<"Yes"<<endl;
            continue;
        }
        cout<<"No"<<endl;
    }
    return 0;
}