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
    int lnum;
    int a[n];
    int maxnum[n];
    for(int i=0;i<n;i++){
        cin>>lnum;
        maxnum[i] = 0;
        for(int j=0;j<lnum;j++){
            cin>>a[j];
            if(a[j] > maxnum[i]){
                maxnum[i]=a[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<maxnum[i]<<endl;
    }
    return 0;
}
