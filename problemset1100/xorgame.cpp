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
        vector<int> a(n), b(n);
        int evena = 0, odda = 0, evenb = 0, oddb = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                if (i % 2 == 0)
                    evena++;
                else
                    odda++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
            {
                if (i % 2 == 0)
                    evenb++;
                else
                    oddb++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                continue;
            else
            {
                if (i % 2 == 0)
                {
                    if((evena+odda)%2==0){
                        swap(a[i],b[i]);
                        if(a[i]==1) {evena++;evenb--;}
                        else {evena--;evenb++;}
                    }
                }
                else
                {
                    if((evenb+oddb)%2==0){
                        swap(a[i],b[i]);
                        if(b[i]==1) {oddb++;odda--;}
                        else {oddb--;odda++;}
                    }
                }
            }
        }
        int ajisai=(evena+odda)%2;
        int mai=(evenb+oddb)%2;
        if(ajisai>mai){
            cout<<"ajisai"<<endl;
        }
        else if(ajisai<mai){
            cout<<"mai"<<endl;
        }
        else cout<<"tie"<<endl;
    }
}