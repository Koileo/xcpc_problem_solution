#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        vector<long long> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; ++i) cin >> a[i] >> b[i];

        long long ans = 0;
        int prevSide = 0;
        long long prevTime = 0; 

        for (int i = 0; i < n; ++i) {
            long long len = a[i] - prevTime; 
            int needParity = prevSide ^ b[i]; 

            if ((len % 2) == needParity) {
                ans += len;
            } else {
                ans += (len - 1);
            }

            prevTime = a[i];
            prevSide = b[i];
        }

        long long tail = m - prevTime;
        ans += tail;

        cout << ans << '\n';
    }
    return 0;
}
