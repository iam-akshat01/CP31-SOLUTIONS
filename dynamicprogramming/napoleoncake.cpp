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
        vector<vector<int>>answer;
        for(int i=1;i<=n;i++){
            int el;
            cin>>el;
            if(el==0) continue;
            int s=max(i-el,0)+1;
            int e=i;
            answer.push_back({s,e});
        }
        

        if (answer.empty()) {
            for (int i = 0; i < n; i++) cout << 0 << " ";
            cout << '\n';
            continue;
        }

        sort(answer.begin(),answer.end());
        int x=answer.size();
        int ppos=1;
        int ints=0,inte=0;
        vector<vector<int>> intervals;

        int cur_s = answer[0][0];
        int cur_e = answer[0][1];

        for (int i = 1; i < x; i++) {
            if (answer[i][0] <= cur_e) {
                cur_e = max(cur_e, answer[i][1]);
            } else {
                intervals.push_back({cur_s, cur_e});
                cur_s = answer[i][0];
                cur_e = answer[i][1];
            }
        }
        intervals.push_back({cur_s, cur_e});

        vector<int>fns(n,0);
        for(int i=0;i<intervals.size();i++){
            int s_i=intervals[i][0];
            int e_i=intervals[i][1];
            for(int i=s_i;i<=e_i;i++){
                fns[i-1]=1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<fns[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}