#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases
    while(t--) {
        int n;
        cin >> n;  // size of the array
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_blank = 0;
        int current_blank = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] == 0) {
                current_blank++;
                max_blank = max(max_blank, current_blank);
            } else {
                current_blank = 0;
            }
        }

        cout << max_blank << endl;
    }
    return 0;
}
