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
    while(t--){
        int num;
        cin >> num;
        int result = 0;
        int winnum = 0;
        int losenum = 0;
        int leavenum = 0;
        if(num % 2 == 0){
            result += num/2;
            winnum = num/2;
            losenum = num/2;
        }else{
            result += num/2;
            winnum = num/2 + 1;
            losenum = num/2;
        }
        while(winnum != 1){
            if(winnum % 2 == 0){
                result += winnum/2;
                losenum += winnum/2;
                winnum /= 2;
            }else{
                result += winnum/2;
                losenum += winnum/2;
                winnum = winnum/2 + 1;
            }
        }
        while(losenum != 1){
            if(losenum % 2 == 0){
                result += losenum/2;
                losenum /= 2;
            }else{
                result += losenum/2;
                losenum = losenum/2 + 1;
            }
        }
        result+=1;
        cout<<result<<endl;
    }

    return 0;
}
