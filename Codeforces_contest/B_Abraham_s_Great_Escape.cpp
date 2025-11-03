#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int n ,k;
char map[101][101];
int useing[101][101];
int main() {
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(n * n - k == 1){
            cout << "NO"<<endl;
            continue;
        }
        int stay = n * n - k;
        int need = k;
        for(int i = 0; i < n; i++){
            if(need < n){
                for(int j = n-1;j >= 0;j--){
                    if(need > 0){
                        map[i][j] = 'R';
                        useing[i][j] = 1;
                        need --;
                    }else{
                        if(i + 1 <= n-1){
                            map[i][j] = 'D';
                            useing[i][j] = 1;
                            map[i + 1][j] = 'U';
                            useing[i + 1][j] = 1;
                        }else if(j - 1 >= 0){
                            map[i][j] = 'L';
                            useing[i][j] = 1;
                            map[i][j - 1] = 'R';
                            useing[i][j - 1] = 1;
                        }
                    }
                }
            }else{
                for(int j = 0; j < n; j++){
                    map[i][j] = 'R';
                    useing[i][j] = 1;
                }
                need -= n;
            }
        }
        cout << "YES" << endl;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cout<<map[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
