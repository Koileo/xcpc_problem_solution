#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    double s,c,l;int n;
    double money[10],lu[10];
    cin >> s >> c >> l >> money[0] >> n;
    lu[0] = 0.00;
    double result = money[0];
    for(int i = 1;i <= n;i++){
        cin >> lu[i] >> money[i];
    }
    for(int i = 0 ;i < n;i++){
        for(int j = 0; j < n-i-1; j++){
            if(money[j] > money[j+1]){
                swap(money[j],money[j+1]);
                swap(lu[j],lu[j+1]);
            }
        }
    }
    double temp  = 0.0;
    int ind = 0;
    for(int i = 0; i < n;i++){
        double nowc = lu[i] / l;
        result = result * nowc;
        temp = s-lu[i];
        if(temp <= c * l){
            result += temp * money[i];
        }
    }
    cout<<result;
    return 0;
}
