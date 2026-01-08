#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2)
        {
            cout << 1 << " " << 0 << endl;
            continue;
        }
        if (n == 3)
        {
            cout << 1 << " " << 0 << " " << 2 << endl;
            continue;
        }
        //vector<int> ans(n, 1);
    
        int answer = 0;
        for (int i = 31; i >= 0; i--)
        {
            if ((((n - 1) >> i) & 1) == 1)
            {
                answer = i;
                break;
            }
        }
        for(int i=(1<<answer);i>0;i--){
            cout<<i-1<<" ";
        }
        for(int i=(1<<answer);i<n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}