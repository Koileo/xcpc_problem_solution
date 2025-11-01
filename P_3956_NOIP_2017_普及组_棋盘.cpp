#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <queue>
using namespace std;
//优化BFS
#define inf 0x3f3f3f3f
template <typename Tp>
void read(Tp &x){
	char c=getchar();x=0;int f=1;
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}x*=f;
}
struct node{
	int x,y,c,w; 
	bool operator <(node b)const{
		return w>b.w;
	}
};
priority_queue<node>q;
int dx[]={0,1,0,-1,1,1,-1,-1,0,2,0,-2};
int dy[]={1,0,-1,0,1,-1,1,-1,2,0,-2,0};
int dw[]={0,0,0,0,2,2,2,2,2,2,2,2};
int a[105][105],dis[105][105];
int n,m;

void bfs(){
	memset(dis,0x3f,sizeof(dis));dis[1][1]=0;
	q.push((node){1,1,a[1][1],dis[1][1]});
	node cur,nxt;
	while(!q.empty()){
		cur=q.top();q.pop();
		if(dis[cur.x][cur.y]<cur.w)continue;
		for(int i=0;i<12;i++){
			nxt.x=cur.x+dx[i];
			nxt.y=cur.y+dy[i];
			nxt.w=cur.w+dw[i];
            if(nxt.x<=0||nxt.x>m||nxt.y<=0||nxt.y>m)continue;
			nxt.c=a[nxt.x][nxt.y];
			if(!nxt.c)continue;
			if(cur.c!=nxt.c)nxt.w++;
			if(dis[nxt.x][nxt.y]>nxt.w){
				dis[nxt.x][nxt.y]=nxt.w;
				q.push(nxt);
			}
		}
	}
}
int main(){
	int x,y,c;
	read(m);read(n);
	for(int i=1;i<=n;i++){
		read(x);read(y);read(c);
		a[x][y]=c+1;
	}
	bfs();
	if(!a[m][m]){
		int ans=min(dis[m][m-1],dis[m-1][m])+2;
		if(ans>=inf)puts("-1");
		else printf("%d\n",ans);
	}
	else{
		if(dis[m][m]==inf)puts("-1");
		else printf("%d\n",dis[m][m]);
	}
	return 0;
}
