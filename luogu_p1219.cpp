#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
//DFS模版！！！！！！
int n;
int clo[15];
int ans = 0;
bool is_putdown(int row,int c){
    for(int i = 1;i < row;i++){
        if(clo[i] == c || abs(clo[i] - c) == abs(i - row)){
            return false;
        }
    }
    return true;
}
void dfs(int row){
    if(row > n){
        ans++;
        if(ans <= 3){
            for(int i = 1;i <= n;i++){
                cout<<clo[i]<<' ';
            }
            cout<<endl;
        }
        return;
    }
    for(int c = 1;c <= n;c++){
        if(is_putdown(row,c)){
            clo[row] = c;
            dfs(row + 1);
        }
    }
}

int main() {
    cin >> n;
    dfs(1);
    cout << ans << endl;
    return 0;
}
