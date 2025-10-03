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
        vector<int> ans(n);
        map<int,int> freq;
        for(int i=0;i<n;i++){
            cin>>ans[i];
            freq[ans[i]]++;
        }
        int sz=freq.size();
        multiset<int>st;
        for(auto it:freq){
            st.insert(it.second);
        }
        auto it=st.begin();
        int maxi=INT_MIN;
        while(it!=st.end()){
            int x=st.size();
            int f=*it;
            maxi=max(maxi,x*f);
            auto del=it;
            it++;
            st.erase(del);
        }
        cout<<maxi<<endl;
    }
    return 0;
}
