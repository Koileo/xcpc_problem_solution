#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i = 1; i <= n; i++) {
            if(i % 2 == 1) cout << -1;
            else cout << (i / 2) + 1;
            if(i < n) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
