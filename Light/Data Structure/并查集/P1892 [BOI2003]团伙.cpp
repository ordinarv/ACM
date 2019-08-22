#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e3+5;

int n,m;
int f[maxn],e[maxn];
int find(int x) {
	return x==f[x]?x:find(f[x]);
}
void join(int x,int y) {
	int fx = find(x),fy = find(y);
	if(fx!=fy) f[fx] = fy;
}
void init() {
	for(int i=1; i<=n; i++)
		f[i] = i;
}
int main() {
	char q;
	int a,b;
	//cin>>n>>m;
	scanf("%d%d",&n,&m);
	init();
	for(int i=0; i<m; i++) {
		scanf("%c",&q);
		scanf("%c%d%d",&q,&a,&b);
		//cin>>q>>a>>b;
		if(q == 'F') {
			join(a,b);
		} else {
			if(e[a] == 0) e[a] = b;
			else join(e[a],b);
			if(e[b] == 0) e[b] = a;
			else join(e[b],a);
		}
	}
	int ans =0;
	for(int i=1; i<=n; i++)
		if(f[i] == i) ans++;
	printf("%d\n",ans);
	return 0;
}
