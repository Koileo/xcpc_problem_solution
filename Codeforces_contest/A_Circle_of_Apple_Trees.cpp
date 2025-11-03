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
        int t;
        cin >> t;
        int apple[500];
        for(int i = 0;i < t;i++){
            cin>>apple[i];
        }
        bool flag[101] = {false};
        sort(apple,apple+t);
        int result = 1;
        for(int i = 1;i < t;i++){
            if(apple[i] > apple[0] && !flag[apple[i]]){
                result++;
                flag[apple[i]] = true;
            }
        }
        cout<<result<<endl;;
    }

    return 0;
}
