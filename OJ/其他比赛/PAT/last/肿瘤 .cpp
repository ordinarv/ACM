#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
int mp[60+2][1286+2][128+2];
int ans;
struct unt {
	int x,y,z;
};
int dx[]= {1,-1,0,0,0,0},dy[]= {0,0,1,-1,0,0},dz[]= {0,0,0,0,-1,1};
int t,m,n,l;
bool check(unt a) {
	if(a.x>=0 && a.x<n && a.y>=0 && a.y<m && a.z>=0 && a.z<l && mp[a.z][a.x][a.y] == 1) return 1;
	return 0;
}

void bfs(int x,int y,int z) {
	unt cur= {x,y,z},next;
	queue<unt>q;
	q.push(cur);
	int cnt = 1;
	mp[z][x][y] = 0;
	while(!q.empty()) {
		cur = q.front();
		q.pop();		
		for(int i=0; i<6; i++) {
			next.x = cur.x+dx[i];
			next.y = cur.y+dy[i];
			next.z = cur.z+dz[i];
			if(check(next)) {
				mp[next.z][next.x][next.y] = 0;
				q.push(next);
				cnt++;
			}
		}		
	}
	if(cnt>=t) ans+=cnt;
}
int main() {
	scanf("%d%d%d%d",&n,&m,&l,&t);
	for(int i=0; i<l; i++) {
		for(int j=0; j<n; j++) {
			for(int k=0; k<m; k++) {
				scanf("%d",&mp[i][j][k]);
			}
		}
	}
	for(int i=0; i<l; i++) {
		for(int j=0; j<n; j++) {
			for(int k=0; k<m; k++) {
				if(mp[i][j][k] == 1) bfs(j,k,i);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
/*
bool dfs(int x,int y,int sum) {
	//不好搞，1、当时考虑回溯的问题；2、如何判定这一次深搜搜到底了 3以及初始点如何判断
	int xx,yy;
	for(int i=0; i<6; i++) {
		xx = x+dx[i];
		yy = y+dy[i];
		zz = z+dz[i];
		if(check(xx,yy,zz) ) {
			mp[xx][yy][zz] = 0;
			dfs(xx,yy,zz);
		}
	}
}
*/
