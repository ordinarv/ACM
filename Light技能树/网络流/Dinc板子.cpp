#include<bits/stdc++.h>
#define mk make_pair
using namespace std;

typedef long long ll;
const double PI = acos(-1.0);
const double eps = 1.0e-8;
const int INF = 0x3f3f3f3f;
const int maxn = 1e4+5;
const int maxm = 1e6+5;
int n,m,s,e;
struct node {
	int v, c, pre;
} edge[maxn<<6];

int head[maxn<<1], dis[maxn<<1], curedge[maxn<<1], cnt;
void init() {
	memset(head, -1,sizeof(head));
	cnt = 0;
}
void addedge(int u, int v, int c) { // 记得双向边
	edge[cnt] = {v, c, head[u]};
	head[u] = cnt++;
}
bool bfs() {
	queue<int> que;
	que.push(s);
	memset(dis, 0,sizeof(dis));
	dis[s] = 1;
	while (!que.empty()) {
		int f = que.front();
		que.pop();
		for (int i = head[f]; i != -1; i = edge[i].pre) {
			if (dis[edge[i].v] || edge[i].c == 0) continue;
			dis[edge[i].v] = dis[f] + 1;
			que.push(edge[i].v);
		}
	}
	return dis[e] > 0;
}

int dfs(int now, int flow) {
	if (now == e || flow == 0) return flow;
	for (int &i = curedge[now]; i != -1; i = edge[i].pre) { // 当前弧优化
		if (dis[edge[i].v] != dis[now] + 1 || edge[i].c == 0) continue;
		int d = dfs(edge[i].v, min(flow, edge[i].c));
		if (d > 0) {
			edge[i].c -= d;
			edge[i^1].c += d;
			return d;
		}
	}
	dis[now] = -1; // // 炸点优化
	return 0;
}
int Dinic() {
	int sum = 0, d;
	while (bfs()) {
		for (int i = 0; i <= e; ++i) curedge[i] = head[i];
		while (d = dfs(s, INF)) sum += d;
	}
	return sum;
}

int main() {
	init();
	int k;
	scanf("%d%d%d", &n,&m,&k);
	s = 0;
	e = n+m+1+1;
	addedge(s,1,k);
	addedge(1,s,0);

	for(int i=1; i<=m; i++) { // ending
		addedge(i+n+1,e,1);
		addedge(e,i+n+1,0);
	}
	int u,q;
	for (int i = 1; i <= n; i ++) {
		addedge(s,i+1,1);
		addedge(i+1,s,0);
		addedge(1,i+1,1);
		addedge(i+1,1,0);

		scanf("%d",&q);
		for(int j=1; j<=q; j++) {
			scanf("%d", &u);
			addedge(i+1,u+n+1, 1);
			addedge(u+n+1,i+1, 0);
		}
	}
	printf("%d\n",Dinic());
	return 0;
}
