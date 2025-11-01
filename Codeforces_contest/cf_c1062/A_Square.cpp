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
    int a,b,c,d;
    cin >> n;
    while(n--){
        cin >> a >> b >> c >>d;
        if(a == b && b == c && c == d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
