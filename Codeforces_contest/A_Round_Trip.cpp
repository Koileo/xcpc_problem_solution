#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int r,x,d,n;
        cin >> r >> x >> d >>n;
        string a;
        cin >> a;
        int result = 0;
        int temp = r;
        for(int i = 0 ; i<a.length();i++){
            if(a[i] == '2'){
                if(temp < x){
                    result ++;
                    temp -= d;
                }if(temp > x){
                    continue;
                }
            }else{
                result++;
                temp -= d;
            }
        }
        if(result >= n){
            cout<<n<<endl;
        }else{
            cout<<result<<endl;
        }
    }
    return 0;
}
