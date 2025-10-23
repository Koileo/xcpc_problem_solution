#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    int signnum[m],num[m];
    for(int i = 0;i < m;i++){
        cin>>signnum[i]>>num[i];
    }
    for(int i = 0;i < m;i++){
        for(int j = 0;j < m-1-i;j++){
            if(num[j] < num[j+1]){
                swap(num[j],num[j+1]);
                swap(signnum[j],signnum[j+1]);
            }else if(num[j] == num[j+1] && signnum[j] > signnum[j+1]){
                swap(signnum[j],signnum[j+1]);
            }
        }
    }
    for(int i = 0;i < m;i++){
        if(num[i] == num[i+1] && signnum[i] > signnum[i+1]){
                swap(signnum[i],signnum[i+1]);
        }
    }
    int ren = n * 1.5;
    while(num[ren - 1] == num[ren]){
        ren++;
    }
    cout<<num[ren - 1]<<' '<<ren<<endl;
    for(int i = 0;i < ren;i++){
        cout<<signnum[i]<<' '<<num[i]<<endl;
    }
    return 0;
}
