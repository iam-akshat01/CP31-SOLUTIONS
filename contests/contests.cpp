#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int start=1,end=n;
        cout<<1<<" "<<1<<" "<<n<<endl;
        long long orig;
        cin>>orig;
        cout<<2<<" "<<1<<" "<<n<<endl;
        long long act;
        cin>>act;
        int numsc=act-orig;
        bool found=0;
        while(end>=start){
            
            int mid=start+((end-start)>>1);
            cout<<1<<" "<<start<<" "<<mid<<endl;
            long long partori;
            cin>>partori;
            cout<<2<<" "<<start<<" "<<mid<<endl;
            long long partact;
            cin>>partact;
            if(partact-partori!=0 && partact-partori<numsc){
                int c=partact-partori;
                found=1;
                cout<<"!"<<" "<<(mid-c+1)<<" "<<(mid+numsc-c)<<endl;
                break;
            }
            else if(partact-partori==0){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        if(found==1) continue;
    }
    return 0;
}