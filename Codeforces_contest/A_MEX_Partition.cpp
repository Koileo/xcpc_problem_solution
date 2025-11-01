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
        int a[101];
        int qual[101] = {0};
        for(int i = 0;i < num;i++){
            cin >> a[i];
            qual[a[i]]++;
        }
        sort(a,a+num);
        for(int i = 0;i < 100;i++){
            if(qual[i] == 0){
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
