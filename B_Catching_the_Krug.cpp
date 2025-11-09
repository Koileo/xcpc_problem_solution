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
    int t;
    cin >> t;
    while(t--){
        int n,x1,x2,y1,y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;    
        int dy ,dx;
        if(y1 == y2) dy = 0;
        else if(y1 > y2) dy = n - y2;
        else dy = y2;
        if(x1 == x2) dx = 0;
        else if(x1 > x2) dx = n - x2;
        else dx = x2;
        cout<<max(dx,dy)<<endl;
    }
    return 0;
}
