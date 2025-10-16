#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
//A+B 高精度（加法）
string add(string a,string b){
    string s;
    long long len1 = a.length();
    long long len2 = b.length();
    if(len1 > len2){
        for(int i = len2-1;i<len1-1;i++){
            b = '0' + b;
        }
    }else if(len1 < len2){
        for(int i = len1-1;i<len2-1;i++){
            a = '0' + a;
        }
    }
    long long num = a.length();
    int temp,cf = 0;
    for(int i=num-1;i>=0;i--){
        temp = (a[i] - '0') + (b[i] - '0') + cf;
        cf = temp / 10;
        temp %= 10;
        s = char(temp+'0')+s;
    }
    if(cf != 0){
        s = char(cf+'0')+s;
    }
    return s;
}
int main() {
    string a,b;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}
