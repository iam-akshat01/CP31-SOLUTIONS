#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int changes=0;
        for(int i=1;i<n;i++){
            if(arr[i]%2==arr[i-1]%2)
            {
                changes++;
            }
        }
        cout<<changes<<endl;
    }
    return 0;
}
