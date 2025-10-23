#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    int num;
    while (t--){
        int a,b;
        cin >> a >> b;
        if(a == b){
            cout << 0;
        }else{
            if((a ^ b) < a){
                num++;
            }else{
                
            }
        }

    }


    return 0;
}
