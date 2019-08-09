#include<bits/stdc++.h>
using namespace std;
const int N=1005;
queue<int>fd[10],fq[10];
int n,m,p,cnt[N],sp[10];
char a[N][N];
bool no[N][N];
int main() {
	ios::sync_with_stdio(false);
	scanf("%d%d%d",&n,&m,&p);
	for(int i=1; i<=p; ++i)scanf("%d",&sp[i]),sp[i]=min(sp[i],n*m+1);
	for(int i=0; i<n; ++i)scanf("%s",a[i]);
	for(int i=0; i<n; ++i)
		for(int j=0; j<m; ++j) {
			if(isdigit(a[i][j]))fd[a[i][j]-'0'].push(i*m+j),++cnt[a[i][j]-'0'],no[i][j]=1;
			if(a[i][j]=='#')no[i][j]=1;
		}
	bool flg=1;
	while(flg) {
		for(int o=1; o<=p; ++o) {
			for(int i=1; i<=sp[o]; ++i) {
				while(!fd[o].empty()) {
					int val=fd[o].front(),x=val/m,y=val%m;
					fd[o].pop();
					if(!no[x+1][y]&&x+1<n)no[x+1][y]=1,++cnt[o],fq[o].push((x+1)*m+y);
					if(!no[x-1][y]&&x-1>=0)no[x-1][y]=1,++cnt[o],fq[o].push((x-1)*m+y);
					if(!no[x][y+1]&&y+1<m)no[x][y+1]=1,++cnt[o],fq[o].push(x*m+y+1);
					if(!no[x][y-1]&&y-1>=0)no[x][y-1]=1,++cnt[o],fq[o].push(x*m+y-1);
				}
				while(!fq[o].empty())fd[o].push(fq[o].front()),fq[o].pop();
				if(fd[o].empty())break;
			}
		}
		flg=0;
		for(int o=1; o<=p; ++o)if(fd[o].size()) {
				flg=1;
			}
	}
	for(int o=1; o<=p; ++o)cout<<cnt[o]<<" \n"[o==p];
	return 0;
}
