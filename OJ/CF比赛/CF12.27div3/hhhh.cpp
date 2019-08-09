#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e3+5;
const int INF = 0x3f3f3f3f;
bool mp[maxn][maxn];
bool vis[maxn];
vector<int>ans;
void solve(int n) {
	int a = 1;
	vis[1] = 1;
	ans.push_back(1);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(mp[a][j] && (!vis[j])) {
				ans.push_back(j);
				vis[j] = 1;
				a = j;
			}
		}
	}
}
int main() {
	int n,x,y;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>x>>y;
		mp[x][y] = mp[y][x] = 1;
	}
	solve(n);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<' ';
	}
}
