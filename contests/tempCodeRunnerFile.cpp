#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>ans(k,0);
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            ans[el%k]++;
        }
        int answer=0;
        if(k!=4){
            if(ans[0]>0){
                cout<<0<<endl;
                continue;
            }
            for(int i=k-1;i>=0;i--){
                if(ans[i]>0){
                    answer=k-i;
                    break;
                }
            }
            cout<<answer<<endl;
            continue;
        }
        else{
            if(ans[0]>0 || ans[2]>=2){
                cout<<0<<endl;
                continue;
            }
            if(ans[3]>=1){
                cout<<1<<endl;
                continue;
            }
            if(ans[2]==1 && (ans[1]>=1)){
                cout<<1<<endl;
                continue;
            }
            else{
                cout<<2<<endl;
                continue;
            }
        }
    }
    return 0;
}
