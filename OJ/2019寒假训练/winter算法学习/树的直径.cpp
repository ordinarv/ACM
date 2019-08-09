#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<cstring>
using namespace std;
const int N=1e5+10;

int u,v,d,cnt,head[N],vis[N];
struct edge {
	int d,id,Next;
	edge() {}
	edge(int d,int id):d(d),id(id) {}
} e[N];
struct node {
	int id,d;
	node() {}
	node(int id,int d):id(id),d(d) {}
};

void init() {
	memset(head,-1,sizeof(head));
	cnt=0;
}

void add(int x,int y,int d) {
	e[cnt].d=d;
	e[cnt].id=y;
	e[cnt].Next=head[x];
	head[x]=cnt++;
}

int bfs(int x,int &d) {
	memset(vis,0,sizeof(vis));
	queue<node>q;
	q.push(node(x,0));
	vis[x]=1;
	int ans=x;
	while(q.size()) {
		node tmp=q.front();
		int x=tmp.id;
		q.pop();
		for(int i=head[x]; i!=-1; i=e[i].Next) {
			int y = e[i].id;
			if(vis[y]) continue;
			vis[y] = 1;
			if(tmp.d+e[i].d>d) {
				d=tmp.d+e[i].d;
				ans=y;
			}
			q.push(node(y,tmp.d+e[i].d));
		}
	}
	return ans;
}

int main() {
	init();
	while(~scanf("%d%d%d",&u,&v,&d)) {
		add(u,v,d);
		add(v,u,d);
	}
	int d=0;
	int u=bfs(1,d);
	int v=bfs(u,d);
	printf("%d\n",d);
	return 0;
}
