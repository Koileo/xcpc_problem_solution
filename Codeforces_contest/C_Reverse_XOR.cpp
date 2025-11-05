#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
//偶数长度回文，奇数长度回文+中间必须为0
bool ishui(string a){
    int n = a.length();
    for(int i = n-1;i >= 0;i--){
        if(a[i] == '0'){
            a.pop_back();
        }else{
            break;
        }
    }
    n = a.length();
    if(n % 2 ==1){
        if(a[n / 2] != '0'){
            return false;
        }
    }
    for(int i = n-1;i >= n/2;i--){
        if(a[i] != a[n-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long num;
        bool flag = false;
        string a;
        cin >> num;
        long long tmp = num;
        while(tmp > 0){
            if(tmp & 1) a = '1' + a;
            else a = '0' + a;
            tmp >>= 1;
        }
        if (ishui(a)) flag = true;
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
