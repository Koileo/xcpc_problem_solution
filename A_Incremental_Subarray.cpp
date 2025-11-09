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
        int n , m;
        cin >> n >> m;
        int num[m+1];
        int maxnum = 0;
        bool nor = true;
        num[0] = 0;
        for(int i = 1;i <= m;i++){
            cin >> num[i];
            if(maxnum <= num[i]) maxnum = num[i];
            if(num[i] <= num[i-1]) nor = false;
        }
        if(!nor){
            cout<<1<<endl;
        }else{
            if(maxnum == 1){
                cout<<n<<endl;
            }else{
                cout<<n-(maxnum-1)<<endl;
            }
        }
    }

    return 0;
}
