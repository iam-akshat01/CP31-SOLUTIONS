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
        map<int,int>occs;
        for(int i=0;i<2*n;i++){
            int el;
            cin>>el;
            occs[el]++;
        }
        map<int,int>numofoccs;
        for(auto it:occs){
            numofoccs[it.second]++;
        }
        int elsa=0,elsb=0;
        int ans=0;
        int oddfreq=0;
        for(auto it:numofoccs){
            if(it.first%2!=0){
                int freq=it.second;
                if(elsa>=elsb){
                    elsa+=(freq*min(int(freq/2),freq-int(freq/2)));
                    elsb+=(freq*max(int(freq/2),freq-int(freq/2)));
                }
                else{
                    elsb+=(freq*min(int(freq/2),freq-int(freq/2)));
                    elsa+=(freq*max(int(freq/2),freq-int(freq/2)));
                }
                ans+=freq;
                oddfreq+=freq;
            }
        }

        //bool check=0;
        

        for(auto it:numofoccs){
            if(it.first%2==0){
                int freq=it.second;
                ans+=(freq*2);
                if(it.first%4!=0){
                    elsa+=(freq*(it.first/2));
                    elsb+=(freq*(it.first/2));
                }
                else{
                    if(freq%2==0){
                        elsa+=(freq*(it.first/2));
                        elsb+=(freq*(it.first/2));
                    }
                    else{
                        
                        if(elsa>=elsb){
                            elsb+=((freq*(it.first))/2)+1;
                            elsa+=((freq*(it.first))/2)-1;
                        }
                        else{
                            elsa+=((freq*(it.first))/2)+1;
                            elsb+=((freq*(it.first))/2)-1;
                        }
                    }
                }
            }
        }
        cout<<(elsa==elsb?ans:ans-2)<<endl;
    }
}



