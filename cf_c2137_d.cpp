#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    vector<int> count(n + 1, 0);
    vector<vector<int>> indices(n + 1);
    
    for (int i = 0; i < n; i++) {
        int k = b[i];
        if (k <= n) {
            count[k]++;
            indices[k].push_back(i);
        }
    }
    
    bool valid = true;
    for (int k = 1; k <= n; k++) {
        if (count[k] % k != 0) {
            valid = false;
            break;
        }
    }
    
    if (!valid) {
        cout << -1 << endl;
        return;
    }
    
    vector<int> a(n);
    int next_val = 1;
    for (int k = 1; k <= n; k++) {
        int groups = indices[k].size() / k;
        for (int g = 0; g < groups; g++) {
            for (int j = 0; j < k; j++) {
                int idx = indices[k][g * k + j];
                a[idx] = next_val;
            }
            next_val++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}