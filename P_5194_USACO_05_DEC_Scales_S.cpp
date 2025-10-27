#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
//DFS LT做法
int n,c;
long long maxres = 0;
long long fm[10000];
int flag[100000] = {0};
bool is_illegal(int num,int sum){
    if(sum + num <= c){
        return true;
    }else{
        return false;
    }
}

void dfs(long long result){
    if(maxres <= result){
        maxres = result;
    }
    for(int i =  n - 1 ;i >= 0; i--){
        if(is_illegal(fm[i],result) && flag[i] == 0){
            result += fm[i];
            flag[i] = 1;
            dfs(result);
            flag[i] = 0;
            result -= fm[i];
        }else{
            continue;
        }
    }
}

int main() {
    cin >> n >> c;
    for(int i = 0;i < n;i++){
        cin>>fm[i];
    }
    dfs(0);
    cout << maxres;
    return 0;
}
