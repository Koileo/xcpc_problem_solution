#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int LIM = 200001;
//*******************质因子计数第一次做，比gcd的上位选择**************
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}
bool isPrime(long long n) {
    if(n < 2) return false;
    if(n % 2 == 0) return n == 2;
    for(long long i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}
vector<int> breakdown(int n){
    vector<int> result;
    for(int i =2;i * i <= n;i++){
        if(n % i == 0){
            while(n % i == 0) n/=i;
            result.push_back(i);
        }
    }
    if(n != 1){
        result.push_back(n);
    }
    return result;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n];
        int thnum = 0,twonum = 0,fivnum = 0,sevennum = 0;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            if(a[i] % 2 == 0){
                twonum++;
            }else if(a[i] % 3 == 0){
                thnum++;
            }else if(a[i] % 5 == 0){
                fivnum++;
            }else if(a[i] % 7 == 0){
                sevennum++;
            }
        }
        for(int i = 0;i < n;i++){
            cin >> b[i];
        }
        bool ok0 = false, ok1 = false;

        static vector<int> A(LIM + 1, 0), B(LIM + 1, 0);
        static vector<int> seenA, seenB;
        seenA.clear(); seenB.clear();
        //seeA seeB表示有哪些被访问过,便于清零
        vector<int> pf;
        for (int i = 0; i < n; ++i) {
            int x = a[i];
            pf = breakdown(x);
            for (int p : pf) {
                if (A[p] == 0) seenA.push_back(p);
                if (++A[p] >= 2) ok0 = true;
            }
        }
        if (ok0) {
            cout << 0 << '\n';
            for (int p : seenA) A[p] = 0;
            for (int p : seenB) B[p] = 0;
            continue;
        }
        for (int i = 0; i < n; ++i) {
            int y = a[i] + 1;
            pf = breakdown(y);
            for (int p : pf) {
                if (B[p] == 0) seenB.push_back(p);
                ++B[p];
            }
        }

        for (int p : seenA) {
            if (B[p] > 0) { 
                ok1 = true; 
                break; 
            }
        }

        if(ok0) cout << 0 << '\n';
        else if(ok1) cout << 1 << '\n';
        else cout << 2 << '\n';

        for (int p : seenA) A[p] = 0;
        for (int p : seenB) B[p] = 0;

    }
    return 0;
}
