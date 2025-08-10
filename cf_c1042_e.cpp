#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        bool possible = true;
        int x = 0;
        for (int i = n - 1; i >= 0; --i) {
            int current = a[i] ^ x;
            if (current == b[i]) {
                x = 0;
            } else {
                if (i == 0) {
                    possible = false;
                    break;
                }
                x = current ^ b[i];
            }
        }
        cout << (possible && x == 0 ? "YES" : "NO") << endl;
    }
}

int main() {
    solve();
    return 0;
}