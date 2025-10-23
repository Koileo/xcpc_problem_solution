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
    cin>>m>>n;
    long maxnum = 0;
    int x,y;
    long long a[m+1][n+1];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(abs(a[i][j]) > abs(maxnum)){
                maxnum = a[i][j];
                x = i+1;
                y = j+1;
            }
        }
    }
    cout<<x<<' '<<y<<' '<<maxnum;
    return 0;
}
