#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
//n-1,n-2,.....,1,n,1,2,....n
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num[2*n+1];
        int ind = 0;
        for(int i = n-1;i > 0;i--){
            num[ind] = i;
            ind++;
        }
        num[ind] = n;
        ind++;
        for(int i = 1;i <= n;i++){
            num[ind] = i;
            ind++;
        }
        for(int i = 0;i < 2 * n;i++){
            cout<<num[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
