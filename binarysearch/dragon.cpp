#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canSlayDragon(const vector<long long>& times, long long k, long long h) {
    long long total_damage = 0;
    int n = times.size();
    for (int i = 0; i < n - 1; i++) {
        total_damage += min(k, times[i + 1] - times[i]);
    }
    total_damage += k; // last attack always contributes k damage
    return total_damage >= h;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long h;
        cin >> n >> h;
        vector<long long> times(n);
        for (int i = 0; i < n; i++) {
            cin >> times[i];
        }
        
        long long left = 1, right = h;
        long long answer = h;
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (canSlayDragon(times, mid, h)) {
                answer = mid;
                right = mid - 1; 
            } else {
                left = mid + 1; 
            }
        }
        
        cout << answer << endl;
    }
    return 0;
}
