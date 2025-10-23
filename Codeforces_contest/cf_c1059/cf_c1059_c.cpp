#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

long long get_msb(long long n) {
    if (n == 0) return 0;
    long long msb = 1;
    while (msb * 2 <= n) {
        msb *= 2;
    }
    return msb;
}

void solve() {
    long long a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 0 << endl << endl;
        return;
    }

    long long msb_a = get_msb(a);
    long long msb_b = get_msb(b);

    if (msb_a < msb_b) {
        cout << -1 << std::endl;
    } else if (msb_a == msb_b) {
        cout << 1 << std::endl;
        cout << (a ^ b) << endl;
    } else {
        long long x1 = (a ^ b ^ msb_a);
        long long x2 = msb_a;
        if ((a ^ b) <= a) {
            cout << 1 << endl;
            cout << (a ^ b) << endl;
        } else {
            long long inter_val = b ^ msb_a;
            x1 = a ^ inter_val;
            x2 = msb_a;
            cout << 2 << endl;
            cout << x1 << " " << x2 << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
