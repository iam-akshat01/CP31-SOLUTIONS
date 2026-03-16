#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m, 0));
        int maxel = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                maxel = max(maxel, arr[i][j]);
            }
        }
        bool check = 1;
        int mulrc = 0;
        vector<vector<int>> rcnt(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == maxel)
                {
                    rcnt[i].push_back(j);
                }
            }
            if (rcnt[i].size() > 1)
            {
                mulrc++;
            }
        }
        if (mulrc > 1)
        {
            cout << maxel << endl;
            continue;
        }

        if (mulrc == 0)
        {
            bool a = 1;
            map<int, int> occs;
            totcnt=0;
            for (int i = 0; i < n; i++)
            {
                if(rcnt[i].size()>0){
                occs[rcnt[i][0]]++;
                totcnt++;
                }
            }
            if (occs.size() > 2)
            {
                a = 0;
            }
            if (occs.size() == 2)
            {
                for (auto it : occs)
                {
                    if (it.second != 1 && it.second!=totcnt-1){
                        a=0;
                    }
                }
            }
            if(a==0){
                cout<<maxel<<endl;
                continue;
            }
            cout<<maxel-1<<endl;
            continue;
        }
        int zcount=0;
        map<int,int>occs;

        for (int i = 0; i < n ; i++)
        {
            if (rcnt[i].size() == 0)
            {
                zcount++;
                continue;
            }
            if (rcnt[i].size() >1)
            {
                continue;
            }
            else{
                occs[rcnt[i][0]]++;
            }
            
        }
        if(occs.size()>1){
            check=0;
        }
        if (check == 0)
        {
            cout << maxel << endl;
            continue;
        }
        cout << maxel - 1 << endl;
    }
    return 0;
}