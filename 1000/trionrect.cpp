 #include <bits/stdc++.h>
 using namespace std;
 #define ll long long
 int main(){
    int t;
    cin>>t;
    while(t--){
        ll w,h;
        cin>>w>>h;
        ll ans=0;
        for(int i=0;i<4;i++){
            int k;
            cin>>k;
            int maxi=INT_MIN, mini=INT_MAX;
            for(int j=0;j<k;j++){
                int el;
                cin>>el;
                maxi=max(maxi,el);
                mini=min(mini,el);
            }
            if(i==0 || i==1){
                ans=max(ans,(maxi-mini)*h);
            }
            else ans=max(ans,(maxi-mini)*w);
        }
        cout<<ans<<endl;
    }
    return 0;
 }
