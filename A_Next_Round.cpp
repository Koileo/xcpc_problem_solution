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
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int result = 0;
    int temp = 0;
    int tempindex = k;
    for(int i = n-1;i >= 0;i--){
        if(a[i] > 0 && tempindex > 0){
            result++;
            temp = a[i];
            tempindex--;
        }else{
            if(temp == a[i] && a[i] > 0){
                result++;
            }else{
                break;
            }
        }
    }
    cout<<result;
    return 0;
}
