#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+5;
const int INF = 0x3f3f3f3f;
int n,m;
int mp[maxn][maxn],d[maxn];
bool vis[maxn];
bool prim() {
	memset(vis,0,sizeof(vis));
	memset(d,INF,sizeof(d));
	d[1] = 0;
	for(int i=1; i<=n; i++) {
		int u =-1,min = INF;
		for(int j=1; j<=n; j++) {
			if(!vis[j] && min>d[j]) {
				u = j;
				min = d[j];
			}
		}
		if(u == -1) return 1;
		vis[u] = 1;
		for(int k=1;k<=n;k++){
			if(!vis[k] && mp[u][k] < d[k]){
				d[k] = mp[u][k];
			}
		}
	}
	return 0;
}
void dij(int start) {
	memset(vis,0,sizeof(vis));
	memset(d,INF,sizeof(d));
	d[start] = 0;
	for(int i=1; i<=n; i++) {
		int u,min = INF;
		for(int j=1; j<=n; j++) {
			if(!vis[j] && min>d[j]) {
				u = j;
				min = d[j];
			}
		}
		//cout<<u<<endl;
		vis[u] = 1;
		for(int k=1;k<=n;k++){
			if(!vis[k] && d[u] + mp[u][k] < d[k]){
				d[k] = d[u] + mp[u][k];
			}
		}
	}
}
int main() {
	int x,y,w;
	cin>>n>>m;
	memset(mp,INF,sizeof(mp));
	for(int i=1; i<=n; i++)
		mp[i][i] = 0;
	for(int i=0;i<m;i++){
		cin>>x>>y>>w;
		mp[x][y] = mp[y][x] = w;
	}	
	if(prim()) cout<<0<<endl;
	else {
		int resi= 0,maxx=0,ans = INF;
		for(int i=1;i<=n;i++){
			dij(i);
			maxx = 0;
			for(int j=1;j<=n;j++){
				//cout<<d[j]<<' ';
				maxx = max(maxx,d[j]);
			}
			//cout<<endl;
			if(maxx < ans ) {
				ans = maxx;
				resi = i;
			}
		}
		cout<<resi<<' '<<ans<<endl;
	}
	return 0;
}
/*
4 6 
1 2 1
1 2 1
1 2 1
1 2 1
1 2 1
1 2 1
*/
