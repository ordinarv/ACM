#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<queue>
#define pa pair<int,int>
#define mp make_pair
#define fi first
#define se second
using namespace std;
char s[1010][1010];
int vis[1010][1010];
int a[1100];
int n,m,k,col[100],tot;
queue<pa> Q[110];
queue<int> S[110];
int mx[4]= {0,0,1,-1};
int my[4]= {1,-1,0,0};
void bfs(int p) {
//	printf("bfs %d\n",p);
	if(Q[p].empty()) return;
	int st=S[p].front();
	while(!S[p].empty()&&S[p].front()<st+a[p]) {
		pa P=Q[p].front();
		Q[p].pop();
		int t=S[p].front();
		S[p].pop();
		col[p]++;
		for(int i=0; i<4; i++) {
			int x=P.fi+mx[i],y=P.se+my[i];
			if(vis[x][y]||x>n||x<1||y>m||y<1) continue;
			vis[x][y]=1;
			tot++;
			Q[p].push(mp(x,y));
			S[p].push(t+1);
		}
	}
}
int main() {
	cin>>n>>m>>k;
	for(int i=1; i<=k; i++) cin>>a[i];
	for(int i=1; i<=n; i++) scanf("%s",s[i]+1);
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++) {
			if(s[i][j]!='.') tot++,vis[i][j]=1;
			if(s[i][j]>='0'&&s[i][j]<='9')
				Q[s[i][j]-'0'].push(mp(i,j)),S[s[i][j]-'0'].push(0);
		}
	int tim=0;
	while(tot<n*m) {
		tim++;
		if(tim==1000000) break;
		for(int i=1; i<=k; i++) bfs(i);
	}
	for(int i=1; i<=k; i++) while(!S[i].empty()) S[i].pop(),col[i]++;
	for(int i=1; i<=k; i++) cout<<col[i]<<" ";
}
