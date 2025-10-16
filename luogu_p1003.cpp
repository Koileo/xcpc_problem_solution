#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n+1], b[n+1], g[n+1], k[n+1];
    for(int i=1;i<=n;i++){  // NOLINT
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    }
    int  x , y;
    cin >> x >> y;
    for (int i = n ;i > 0 ;i--){
        if ((a[i]+g[i]) >= x && a[i] <= x){
            if ((b[i]+k[i]) >= y && b[i] <= y){
                cout << i;
                return 0;
            }
        }
    }
    cout<<"-1";
    return 0;
}
