#include <iostream>
#include<vector>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>> rows(n);

        int maxLen = 0;
        for(int i=0;i<n;i++){
            int k;
            cin >> k;
            rows[i].resize(k);
            for(int j=0;j<k;j++) cin >> rows[i][j];
            maxLen = max(maxLen, k);
        }

        vector<int> bottom(maxLen, INT_MAX);

        for(int col=0; col<maxLen; col++){
            for(int row=0; row<n; row++){
                if(col < rows[row].size())
                    bottom[col] = min(bottom[col], rows[row][col]);
            }
        }

        for(int i=0;i<maxLen;i++){
            if(i) cout << " ";
            cout << bottom[i];
        }
        cout << "\n";
    }

    return 0;
}
