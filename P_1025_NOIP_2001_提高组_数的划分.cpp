#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
bool flag[200] = {false};
int main() {
    int num,k;
    cin >> num >> k;
    int temp = num;
    for(int i = 1;i <=k;i++){
        
        if(temp - num >=0){
            temp -= num;
        }
    }

    return 0;
}
