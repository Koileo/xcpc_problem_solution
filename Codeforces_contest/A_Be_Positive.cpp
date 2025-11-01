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
        cin >> n;
        while(n--){
            int num;
            cin >> num;
            int a[9];
            int postivenum = 0;
            int zeronum = 0;
            int negativenum = 0;
            for(int i = 0;i < num;i++){
                cin >> a[i];
                if(a[i] < 0){
                    negativenum += 1;
                }else if(a[i] == 0){
                    zeronum++;
                }else{
                    postivenum++;
                }
            }
            int result = 0;
            if(negativenum % 2 != 0){
                result ++;
                zeronum ++ ;
                negativenum --;
            }
            result += zeronum + negativenum % 2;
            cout << result << endl;
        }

    return 0;
}
