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
        int onenum = 0;
        for(int i = 0;i < 3;i++){
            int temp;
            cin >> temp;
            if(temp == 1) onenum++;
        }
        if(onenum >= 2){
            result++;
        }
    }
    cout<<result;
    return 0;
}
