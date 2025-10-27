#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <queue>
using namespace std;
//BFS非递归，而是队列
int map[31][31];
bool vis[31][31] = {false};
int n;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
bool in_range(int x, int y){
    return x>= 0 && x <n && y>=0 && y<n;
}
void bfs(int x,int y){
    queue<pair<int,int>> a;
    a.push({x,y});
    vis[x][y] = true;
    while(!a.empty()){
        auto [x,y] = a.front();
        a.pop();
        for(int i = 0;i < 4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(in_range(nx,ny) && !vis[nx][ny] && map[nx][ny] == 0){
                vis[nx][ny] = true;
                a.push({nx,ny});
            }
        }
    }
    
}
int main() {
    cin >> n;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin>>map[i][j];
        }
    }

for (int i = 0; i < n; i++) {
    if (map[0][i] == 0 && !vis[0][i]) bfs(0, i);
    if (map[n-1][i] == 0 && !vis[n-1][i]) bfs(n-1, i);
    if (map[i][0] == 0 && !vis[i][0]) bfs(i, 0);
    if (map[i][n-1] == 0 && !vis[i][n-1]) bfs(i, n-1);
}

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(vis[i][j] == false && map[i][j] == 0){
                map[i][j] = 2;
            }
            cout<<map[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
