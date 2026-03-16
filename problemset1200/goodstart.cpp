#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    long long w,h,a,b,x1,y1,x2,y2;
    cin>>w>>h>>a>>b;
    cin>>x1>>y1>>x2>>y2;
    cout<<((x1!=x2 && (x2-x1)%a==0) || (y1!=y2 && (y2-y1)%b==0) ? "YES":"NO");
    cout<<endl;
    }
}