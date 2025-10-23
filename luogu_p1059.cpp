#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n+1];
    int flag[100000] = {0};
    int zeronum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(flag[a[i]] == 1){
            a[i] = 0;
            zeronum++;
        }
        flag[a[i]] = 1;
    }
    sort(a,a+n);
    cout<<n-zeronum<<endl;
    for(int i = 0;i < n;i++){
        if(a[i] == 0){
            continue;
        }
        cout<<a[i]<<' ';
    }
    return 0;
}
