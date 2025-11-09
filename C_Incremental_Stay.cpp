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
        int n;
        cin >> n;
        int num[2 * n +1];
        for(int i = 0;i < 2 * n;i++){
            cin >> num[i];
        }
        for(int k =1;k <= n;k++){
            int result = 0;
            int tempindex = 0;
            int staynum = 0;
            for(int i = 0;i < 2 * n;i++){
                if(staynum >= k){
                    staynum--;
                    result += num[i]-num[tempindex];
                    tempindex++;
                }else if(i == 2 * n - 1){
                    result += num[i]-num[tempindex];
                    break;
                }else{
                    staynum++;
                    tempindex = i;
                }
            }
            cout<<result<<' ';
        }
        cout<<endl;
    }
    return 0;
}
