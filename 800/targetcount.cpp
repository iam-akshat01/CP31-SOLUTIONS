#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<vector<char>> target(10, vector<char>(10, '.'));
        int pts = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cin >> target[i][j];
                if(target[i][j] == 'X'){
                    if(i == 0 || i == 9) pts += 1;
                    else if(i == 1 || i == 8) pts += 2;
                    else if(i == 2 || i == 7) pts += 3;
                    else if(i == 3 || i == 6) pts += 4;
                    else if(i == 4 || i == 5) pts += 5;
                }
            }
        }
        cout << pts << endl;
    }
    return 0;
}
