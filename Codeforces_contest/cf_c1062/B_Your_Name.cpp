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
        char a[28],b[28];
        int flag1[26] = {0}, flag2[26] = {0};
        for(int i = 0;i < num;i++){
            cin >> a[i];
            int temp = a[i] - 'a';
            flag1[temp] += 1;
        }
        for(int j = 0;j < num;j++){
            cin >> b[j];
            int temp = b[j] - 'a';
            flag2[temp] += 1;
        }
        bool f = false;
        for(int i = 0;i < 25;i++){
            if(flag1[i] != flag2[i]){
                cout<<"NO"<<endl;
                f = true;
                break;
            }
        }
        if( f == false){
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
