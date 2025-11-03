#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

bool check(string a){
    int n = a.length();
    for(int i = 0; i < n/2; i++){
        if(a[i] != a[n-1-i]) return false;
    }
    if(n % 2 == 1 && a[n/2] == '1') return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n == 0){
            cout << "YES" << endl;
            continue;
        }
        string a;
        long long tmp = n;
        while(tmp > 0){
            if(tmp & 1) a.push_back('1');
            else a.push_back('0');
            tmp >>= 1;
        }
        if(check(a)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
