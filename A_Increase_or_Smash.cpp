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
        int n;
        cin >> n;
        int num[n];
        bool result[101] = {false};
        
        for(int i = 0;i < n;i++){
            cin >> num[i];
        }
        for(int i = 0;i < n;i++){
            result[num[i]] = true;
        }
        int finalresult = 0;
        for(int i = 0;i < 101;i++){
            if(result[i]){
                if (finalresult != 0) finalresult ++;
                finalresult += 1;
            }
        }
        cout<<finalresult<<endl;
    }

    return 0;
}
