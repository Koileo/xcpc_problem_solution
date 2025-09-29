#include<iostream>
using namespace std;

long long f[40][40];
long long s[40][40];
const int sx[] ={1,2,2,1,-1,-2,-2,-1};
const int sy[] ={2,1,-1,-2,-2,-1,1,2};
int main(){
    int bx,by,mx,my;
    cin>>bx>>by>>mx>>my;
    bx+=1;
    by+=1;
    mx+=1;
    my+=1;
    f[1][0]=1;
    s[mx][my]=1;
    for(int i=0;i<8;i++){
        s[mx+sx[i]][my+sy[i]]=1;
    }
    for(int i=1;i<=bx;i++){
        for(int j=1;j<=by;j++){
            if (s[i][j]==1){
                continue;
            }
            f[i][j] = f[i-1][j]+f[i][j-1];
        }
    }
    cout<<f[bx][by]<<endl;
    return 0;
}