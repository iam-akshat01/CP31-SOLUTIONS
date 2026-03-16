#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        vector<int> bits(31,0);

        for(int i=0;i<n;i++){
            cin >> arr[i];

            for(int j=0;j<=30;j++)
                bits[j] += (arr[i]>>j)&1;
        }

        long long ans = 0;

        for(int i=0;i<n;i++){
            long long sum = 0;

            for(int j=0;j<=30;j++){

                if((arr[i]>>j)&1)
                    sum += (long long)(n - bits[j]) << j;
                else
                    sum += (long long)(bits[j]) << j;
            }

            ans = max(ans, sum);
        }

        cout << ans << "\n";
    }
}