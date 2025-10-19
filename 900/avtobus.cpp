#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long num;
        cin>>num;
        if( num<4 || num%2==1) {
            cout<<-1<<endl;
            continue;
        }
        //min case
        long long fw=0;
        if(num%4==0){
            fw=(num/4);
        }
        if(num%4==2){
            fw=((num-6)/4)+1;
        }
        //maxcase
        long long bw=0;
        if(num%6==0){
            bw=(num/6);
        }
        if(num%6==2){
            bw=((num-8)/6)+2;
        }
        if(num%6==4){
            bw=((num-4)/6)+1;
        }

        cout<<bw<<" "<<fw<<endl;
    }
    return 0;
}