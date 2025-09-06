#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
        int n;
        cin>>n;
        vector<int> grumo(n);
        for(int i=0;i<n;i++){
            cin>>grump[i];
        }
        sort(grump.begin(), grump.end());
        int j=n-2;
        long long mini=0;
        while(j>=0){
            mini+=grump[j];
            j=j-2;
            if(j-2==-1) mini+=grump[j+1];
        }
        cout<<mini<<endl;
    }
}