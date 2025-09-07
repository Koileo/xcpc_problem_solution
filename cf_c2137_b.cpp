#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int p[n];
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++) {
            cout << n + 1 - p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}