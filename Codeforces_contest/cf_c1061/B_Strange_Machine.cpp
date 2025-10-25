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
    while(t--){
        long long n,q;
        string cater;
        cin >> n >> q;
        cin >> cater;
        int sta[n+1];
        bool A = false,B = false;
        for(int i = 0;i < n;i++){
            if(cater[i] == 'A'){
                sta[i] = 1;
                A = true;
            }else{
                sta[i] = 2;
                B = true;
            }
        }
        long long num;
        while(q--){
            cin >> num;
            long result = 0;
            while(num != 0){
                if(B == false){
                    result = num;
                    num = 0;
                    break;
                }else{
                    if(sta[result % n] == 1){
                        num -= 1;
                    }else{
                        num = num/2;
                    }
                    result++;
                }
            }
            cout << result << endl;
        }
    }
    return 0;
}
