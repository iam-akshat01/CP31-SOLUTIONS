#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x0,n;
        cin>>x0>>n;
        if(x0%2==0){
            if(n%4==0) x0=x0;
            else if(n%4==1) x0=x0-n;
            else if(n%4==2) x0=x0+1;
            else x0=x0+(n+1);
        }
        else{
            if(n%4==0) x0=x0;
            else if(n%4==1) x0=x0+n;
            else if(n%4==2) x0=x0-1;
            else x0=x0-(n+1);
        }
        cout<<x0<<endl;
    }
    return 0;
}