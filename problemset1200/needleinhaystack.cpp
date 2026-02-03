#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string t, s;
        cin >> t;
        cin >> s;
        vector<int> mt(26, 0), ms(26, 0);
        int x = t.size();
        int n = s.size();
        for (int i = 0; i < x; i++)
        {
            mt[t[i] - 'a']++;
        }
        for (int i = 0; i < n; i++)
        {
            ms[s[i] - 'a']++;
        }
        bool check = 1;
        for (int i = 0; i < 26; i++)
        {
            if (mt[i] > ms[i])
            {
                check = 0;
                break;
            }
            ms[i] -= mt[i];
        }
        if (check == 0)
        {
            cout << "Impossible" << endl;
            continue;
        }
        string preans = "";
        for (int i = 0; i < 26; i++)
        {
            int sz = ms[i];
            for (int j = 0; j < sz; j++)
            {
                preans += 'a' + i;
            }
        }
        int ptr1 = 0, ptr2 = 0;
        string str = "";
        while (ptr1 < x && ptr2 < preans.length())
        {
            if (t[ptr1] <= preans[ptr2])
            {
                str += t[ptr1];
                ptr1++;
            }
            else
            {
                str += preans[ptr2];
                ptr2++;
            }
        }
        while(ptr1<x){
            str+=t[ptr1];
            ptr1++;
        }
        while(ptr2<preans.length()){
            str += preans[ptr2];
            ptr2++;
        }
        cout<<str<<endl;
    }
    return 0;
}