#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;

        long long xy  = (x & y);
        long long yz  = (y & z);
        long long zx  = (z & x);
        long long xyz = (x & y & z);
        long long two = (xy | yz | zx) ^ xyz;
        if(two == 0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
