#include <iostream>
using namespace std;

long long find_initial(int k, long long y) {
    long long cur = y;
    for (int i = 0; i < k; i++) {
        if ((cur - 1) % 3 == 0) {
            long long prev = (cur - 1) / 3;
            if (prev > 0 && prev % 2 == 1) {
                cur = prev;
                continue;
            }
        }
        cur = cur * 2;
    }
    return cur;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int k;
        long long x;
        cin >> k >> x;
        cout << find_initial(k, x) << "\n";
    }
    return 0;
}
