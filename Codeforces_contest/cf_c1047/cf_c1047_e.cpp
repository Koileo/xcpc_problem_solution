#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long k;
        cin >> n >> k;
        long long a[n];
        long long sum = 0;
        set<long long> s;
        long long max_a = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            s.insert(a[i]);
            max_a = max(max_a, a[i]);
        }

        long long mex = 0;
        while(s.count(mex)) mex++;

        if(k == 0) {
            for(auto v: a) sum += v;
            cout << sum << "\n";
            continue;
        }

        if(mex > max_a) {
            cout << n * mex << "\n";
        } else {
            long long x = (mex + max_a + 1)/2;
            s.insert(x);
            long long total = 0;
            for(auto v: s) total += v;
            cout << total << "\n";
        }
    }
    return 0;
}
