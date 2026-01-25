#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            arr[i]=el;
        }
        int maxlen=1,len=1;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                len=1;
            }
            else{
                len++;
                maxlen=max(maxlen,len);
            }
        }
        int maxdlen=1,dlen=1;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                dlen=1;
            }
            else{
                dlen++;
                maxdlen=max(maxdlen,dlen);
            }
        }
        //vector<int>answer;
        string ans="";
        if(maxlen<5 && maxdlen<5){
            for(int i=0;i<n;i++){
                ans+='L';
                //answer.push_back(arr[i]);
            }
        }
        else{
            int s=0,e=n-1;
            int turns=0;
            while(s<=e){
                if(turns%2==0){
                    if(arr[s]<arr[e]){
                        ans+='L';
                        //answer.push_back(arr[s]);
                        s++;
                        turns++;
                    }
                    else{
                        ans+='R';
                        //answer.push_back(arr[e]);
                        e--;
                        turns++;
                    }
                }
                else{
                    if(arr[s]<arr[e]){
                        ans+='R';
                        //answer.push_back(arr[e]);
                        e--;
                        turns++;
                    }
                    else{
                        ans+='L';
                        //answer.push_back(arr[s]);
                        s++;
                        turns++;
                    }
                }
            }
        }
        
        //cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
