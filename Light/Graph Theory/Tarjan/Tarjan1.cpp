//求强连通分量
//adjacency list store graph
#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5+5;
int dfn[maxn],low[maxn],stk[maxn],vis[maxn];
int deep,ans=maxn,n,top;
vector<int> g[maxn];
void tarjan(int u) {
	low[u] = dfn[u] = ++deep;
	vis[u] = 1;
	stk[++top] = u;
	int sz = g[u].size();
	for(int i=0; i<sz; i++) {
		int v = g[u][i];
		if(dfn[v]==0) {
			tarjan(v);
			low[u] = min(low[u],low[v]);
		} else {
			if(vis[v]) {//还在栈里 
				low[u] = min(low[u],dfn[v]);
			}
		}
	}
	if(low[u]==dfn[u]) { // is strongly connected components
		int cnt = 1; 
		vis[u] = 0;
		while(stk[top]!=u) { //clear stk
			cnt++;
			vis[stk[top--]] = 0;
		}
		top--;
		if(cnt>1) ans = min(ans,cnt);
	}
}
int main() {
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		g[i].push_back(x);
	}
	for(int i=1; i<=n; i++) {
		if(dfn[i]==0) 
			tarjan(i);		
	}
	printf("%d\n",ans);

	return 0;
}
