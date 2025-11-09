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
        int a[num+1];
        for(int i = 0;i < num;i++){
            cin >> a[i];
        }
        sort(a,a+num);
        int result = 0;
        for(int i = num-1;i > 0;i-=2){
            int temp = a[i] - a[i-1];
            if(result < temp) result = temp;
        }
        cout<<result<<endl;
    }

    return 0;
}
