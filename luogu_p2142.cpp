#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#define MAXN 10500
using namespace std;
void jian(string a, string b) {
    bool flag = false;
    if(a.length() < b.length() || (a<b && a.length() == b.length())){
        swap(a,b);
        flag = true;
    }
    int na[MAXN],nb[MAXN],ans[MAXN];
    if (a.length() > b.length()) {
        while (a.length() != b.length()) {
            b = '0' + b;
        }
    } else {
        while (a.length() != b.length()) {
            a = '0' + a;
        }
    }
    for(int i=0;i<a.length();i++){
        na[i] = a[i] - '0';
        nb[i] = b[i] - '0';
    }
    for (int i = a.length() - 1; i >= 0; i--) {
        if (na[i] < nb[i]) {
            na[i - 1] --;
            na[i] += 10;
        }
        ans[i] = na[i] -nb[i];
    }
    int maxnl = 0;
    while(ans[maxnl] == 0){
        maxnl++;
    }
    if(flag == false){
        for(int i = maxnl;i<a.length();i++){
            cout<<ans[i];
        }
    }else{
        cout<<'-';
        for(int i = maxnl;i<a.length();i++){
            cout<<ans[i];
        }
    }
}

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    if(a == b){
        cout<<0;
    }else{
        jian(a,b);
    }
    return 0;
}
