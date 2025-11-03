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
        bool flag = false;
        int num[n+1],cha[n+1],maxnum[n+1];
        num[0] = 0;
        maxnum[0] = 0;
        for(int i = 1;i <= n;i++){
            cin >> num[i];
            cha[i] = num[i] - num[i-1];
            maxnum [i] = num[i];
            if(maxnum[i] < maxnum[i-1]) maxnum[i] = maxnum[i-1];
        }
        for(int i = 2;i <= n;i++){
            if(i % 2 == 0 && cha[i] > 0){
                flag = true;
            }else if(i % 2 == 1 && cha[i] < 0){
                flag = true;
            }else{
                flag = false;
                break;
            }
        }
        int result = 0;
        for(int i = 1;i <= n;i++){
            if(i % 2 == 0)num[i] = maxnum[i];
            cha[i] = num[i] - num[i-1];
        }
        if(flag){
            cout<<0;
        }else{
            for(int i = 2;i <= n;i++){
                cha[i] = num[i] - num[i-1];
                if(i % 2 == 0){
                    if(cha[i] == 0){
                        result++;
                        num[i-1]--;
                        cha[i] ++;
                    }else if(cha[i] < 0){
                        result += cha[i] + 1;
                        num[i-1] -= cha[i] + 1;
                        num[i] = maxnum[i];
                        cha[i] = num[i] - num[i-1];
                        if(cha[i] < 0){
                            result += cha[i] + 1;
                            cha[i] = 1;
                        }
                    }
                }if(i % 2 == 1){
                    if(cha[i] == 0){
                        result++;
                        num[i] --;
                        cha[i] --;
                        cha[i+1] ++;
                    }else if(cha[i] > 0){
                        result += cha[i] + 1;
                        num[i] -= cha[i] + 1;
                        cha[i + 1] = cha[i + 1] - cha[i] - 1;
                    }
                }
            }
            cout<<result;
        }
        cout<<endl;
    }
    return 0;
}
