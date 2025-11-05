#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
//被卡了呜呜呜
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        int a[num+1];
        long long kindnum[1001] = {0};
        a[0] = 0;
        for(int i = 1 ;i <= num;i++){
            cin >> a[i];
            kindnum[a[i]]++;
        }
        int maxnum = 0;
        for(int x = 1;x <= num;x++){
            int result = 0;
            bool flag[101] = {false};
            for(int i = 1;i <= num;i++){
                if(kindnum[a[i]] >= x && !flag[a[i]]){
                    result+=x;
                    flag[a[i]] = true;
                }
            }
            if(result > maxnum){
                maxnum = result;
            }
        }
        cout<<maxnum<<endl;
    }

    return 0;
}
