#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> freq(n + 1, 0);
        for (int x : a) ++freq[x];
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; ++i) pref[i] = pref[i - 1] + freq[i];

        int ans = 1;
        for (int d = 1; d <= n; ++d) {
            int need = pref[d - 1];

            int up = min(n, 4 * d);
            if (up > d) {
                int totalInRange = pref[up] - pref[d];
                int multiples = 0;
                for (int m = d; m <= up; m += d) {
                    multiples += freq[m];
                }
                multiples -= freq[d];
                need += (totalInRange - multiples);
            }

            if (need <= k) ans = d;
        }

        cout << ans << '\n';
    }
    return 0;
}
