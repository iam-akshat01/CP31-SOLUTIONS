#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int window=0;
        int div=1;
        if(n%2==1){
            cout<<1<<endl;
            continue;
        }
        while(n%div==0){
            window++;
            div++;
        }
        cout<<window<<endl;
    }
}
