#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        long long ans = -1;
        long long v1 = a*1 + b;
        if(v1 % 2 == 0) ans = max(ans, v1);

        long long v2 = a*b + 1;
        if(v2 % 2 == 0) ans = max(ans, v2);

        if(b % 2 == 0) {
            long long v3 = a*2 + b/2;
            if(v3 % 2 == 0) ans = max(ans, v3);

            long long v4 = a*(b/2) + 2;
            if(v4 % 2 == 0) ans = max(ans, v4);
        }

        cout << ans << endl;
    }
    return 0;
}
