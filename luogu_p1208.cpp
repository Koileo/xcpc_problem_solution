#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int money[m+1],num[m+1];
    for(int i=0;i<m;i++){
        cin>>money[i]>>num[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m-i-1;j++){
            if(money[j]>money[j+1]){
                swap(money[j],money[j+1]);
                swap(num[j],num[j+1]);
            }
        }
    }
    int result = 0;
    for(int i=0;i<m;i++){
        if(num[i]>n){
            result += money[i] * n;
            break;
        }else{
            n -= num[i];
            result += money[i] * num[i];
        }
    }
    cout<<result;
    return 0;
}
