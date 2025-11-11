#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long gcd(long long a, long long b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    const long long primes[] = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53
    };

    while (t--) {
        int n;
        cin >> n;
        vector<unsigned long long> num(n);
        for (int i = 0; i < n; ++i) cin >> num[i];

        long long answer = -1;
        for (long long p : primes) {
            bool exists_not_divisible = false;
            for (int i = 0; i < n; ++i) {
                if (num[i] % p != 0) {
                    exists_not_divisible = true;
                    break;
                }
            }
            if (exists_not_divisible) {
                answer = p;
                break;
            }
        }

        cout << answer << '\n';
    }
    return 0;
}
