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
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    int result = 0;
    while(t--){
        char a[4];
        bool flag = false;
        for(int i = 0;i < 3;i++){
            cin >> a[i];
            if(a[i] == '+'){
                flag = true;
            }
        }
        if(flag){
            result++;
        }else{
            result--;
        }
    }
    cout<<result;
    return 0;
}
