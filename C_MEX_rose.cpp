#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int num [n+1];
        vector<int> countnum(k+1,0);
        int repeatnum = 0;
        for(int i = 0;i < n;i++){
            cin >> num[i];
            if(num[i] == k){
                repeatnum++;
            }else if(num[i] < k){
                countnum[num[i]]+=1;
            }
        }
        sort(num,num+n);
        int r1 = 0;
        for(int i = 0;i < k;i++){
            if(countnum[i] == 0){
                r1++;
            }
        }
        int result = max(r1,repeatnum);
        cout << result << "\n";
    }
    return 0;
}
