#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> a(n), c(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> c[i];

        long long sum_c = 0;
        for (auto x : c) sum_c += x;

        vector<long long> dp(n, 0);
        long long keep_best = 0;

        for (int i = 0; i < n; ++i) {
            long long best_prev = 0;  // 当没有 j 符合时，保持 0
            for (int j = 0; j < i; ++j) {
                if (a[j] <= a[i]) best_prev = max(best_prev, dp[j]);
            }
            dp[i] = best_prev + c[i];
            keep_best = max(keep_best, dp[i]);
        }

        long long ans = sum_c - keep_best;
        cout << ans << '\n';
    }
    return 0;
}
