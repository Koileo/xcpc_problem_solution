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
        int n;
        cin >> n;
        long long b[n+1];
        long long cha[n+1];
        b[0] = 0;
        for(int i = 1;i <= n;i++){
            cin >> b[i];
            cha[i] = b[i] - b[i-1];
        }
        int result[n+1];
        int temp = 0;
        for(int i = 1;i <= n;i++){
            if(cha[i] == i){
                temp++;
                result[i] = temp;
            }else{
                result[i] = result[i-cha[i]];
            }
        }
        for(int i = 1;i <= n;i++){
            cout<<result[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
