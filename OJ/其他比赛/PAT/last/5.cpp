#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+5;
const int INF = 0x3f3f3f3f;
int mp[maxn][maxn],d[maxn],n;
bool vis[maxn];
int prim() {
	int ans = 0;
	memset(vis,0,sizeof(vis));
	memset(d,INF,sizeof(d));
	d[1] = 0;
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
		ans+= min;
		for(int k=1;k<=n;k++){
			if(!vis[k] && mp[u][k] < d[k]){
				d[k] = mp[u][k];
			}
		}
	}
	return ans;
}
int main() {
	cin>>n;
	int x,y,w,sta;
	memset(mp,INF,sizeof(mp));
	for(int i=1; i<=n; i++)
		mp[i][i] = 0;
	for(int i=0; i<n*(n-1)/2; i++) {
		cin>>x>>y>>w>>sta;
		if(sta) {
			mp[x][y] = mp[y][x] = 0;
		} else
			mp[x][y] = mp[y][x] = w;
	}
	cout<<prim();

	return 0;
}
