#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+10;
const int INF = 0x3f3f3f3f;
int mp[maxn][maxn];
int n,m;
bool vis[maxn];
void dfs(int x){
	printf("%d ",x);
	for(int i=0;i<n;i++){
		if(i == x) continue;
		if(!vis[i] && mp[x][i] == 1) {
			vis[i] = 1;
			dfs(i);
		}
	}
}
void bfs(int x){
	queue<int> q;
	q.push(x);
	int cur;
	while(!q.empty()){
		cur = q.front();q.pop();
		//if(!vis[cur]){
			printf("%d ",cur);
			vis[cur] = 1;
			for(int i=0;i<n;i++){
				if(!vis[i] && (mp[cur][i] == 1 || mp[i][cur] == 1)){
					vis[i] = 1;
					q.push(i);
				}
			}
		//}
	}
}
int main(){
	cin>>n>>m;
	int x,y;
	memset(mp,INF,sizeof(mp));
	for(int i=0;i<m;i++){
		cin>>x>>y;
		mp[x][y] = mp[y][x] = 1;
	}
	for(int i=0;i<n;i++){
		if(!vis[i]) {
			printf("{ ");
			vis[i] = 1;
			dfs(i);
			printf("}\n");
		}
	}
	memset(vis,0,sizeof(vis));
	for(int i=0;i<n;i++){
		if(!vis[i]){
			printf("{ ");
			bfs(i);
			printf("}\n");
		}
		
	}
	return 0;
}
