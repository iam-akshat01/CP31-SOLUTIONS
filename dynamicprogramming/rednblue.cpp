#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0,maxa=0;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            a+=el;
            maxa=max(maxa,a);
        }
        int m;
        cin>>m;
        int b=0,maxb=0;
        for(int i=0;i<m;i++){
            int el;
            cin>>el;
            b+=el;
            maxb=max(maxb,b);
        }
        cout<<(maxa+maxb)<<endl;
    }
    return 0;
}