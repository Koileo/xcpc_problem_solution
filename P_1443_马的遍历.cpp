#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <queue>
using namespace std;
int n,m,mx,my;
int vis[400][400];
int dx[8] = {2,1,-2,-1,2,1,-2,-1};
int dy[8] = {1,2,-1,-2,-1,-2,1,2};
int map[400][400] = {0};
bool in_range ( int x ,int y ){
    return x >= 0 && x < n && y >= 0 && y < m;
}

void bfs(int x,int y){
    queue<pair<int,int>> a;
    a.push({x,y});
    vis[x][y] = true;
    while(!a.empty()){
        auto [x,y] = a.front();
        a.pop();
        for(int i = 0;i < 8;i ++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(in_range(nx,ny) && !vis[nx][ny]){
                map[nx][ny] = 1 + map[x][y];
                vis[nx][ny] = true;
                a.push({nx,ny});
            }
        }
    }
}

int main() {
    cin >> n >> m >> mx >> my;
    bfs ( mx-1 , my-1 );
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(map[i][j] == 0){
                if(i == mx-1 && j == my-1){
                    map[i][j] = 0;
                }else{
                    map[i][j] = -1;
                }
            }
            cout<<map[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
