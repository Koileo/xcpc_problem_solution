#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        int num = 0;
        for (int i = 0; i < n; i++) {
            int ra = ((a[i] % k) + k) % k; 
            int rb = ((b[i] % k) + k) % k;
            if (ra == rb || ra == (k - rb) % k) {
                num++;
            }
        }
        if (num == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}