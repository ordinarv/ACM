#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 4e2+10;
int n,m;
char mp[maxn][maxn];
int v[maxn][maxn];
int dx[]= {0,0,1,-1},dy[]= {1,-1,0,0};
int main() {
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>mp[i][j];
			v[i][j] = 2;
		}
	}
	int k,x,y,xx,yy,ans;
	cin>>k;
	while(k--) {
		ans = 0;
		cin>>x>>y;
		if(v[x][y]>0 && mp[x][y] == '#') { // have wz
			v[x][y] = 0;
			ans++;
		}

		for(int i=0; i<4; i++) {
			xx = x+dx[i];
			yy = y+dy[i];
			if(xx>=0 && xx<n && yy>=0 && yy<m && mp[xx][yy] == '#') {
				if(v[xx][yy] == 1) ans++;
				if(v[xx][yy] > 0) v[xx][yy]--;
			}
		}

		cout<<ans<<endl;
	}
	return 0;
}
