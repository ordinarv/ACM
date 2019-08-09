#include<bits/stdc++.h>
using namespace std;

const int maxn=2e4+5;
const int maxm = 1e5+5;
struct unt {
	int a,b,w;
} re[maxm];
int f[maxn],e[maxn],n,m;
int find(int x) {
	return x==f[x]?x:find(f[x]);
}
void join(int x,int y) {
	int fx = find(x),fy = find(y);
	if(fx != fy)
		f[fx] = fy;
}
bool cmp(unt a,unt b) {
	return a.w > b.w;
}
void init() {
	for(int i=1; i<=n; i++) {
		f[i] = i;
	}
}
int main() {
	scanf("%d%d",&n,&m);
	for(int i=0; i<m; i++) {
		scanf("%d%d%d",&re[i].a,&re[i].b,&re[i].w);
	}
	sort(re,re+m,cmp);
	init();
	for(int i=0; i<m; i++) {
		int fx = find(re[i].a),fy = find(re[i].b);
		if(fx == fy) {
			printf("%d\n",re[i].w);
			return 0;			
		}

		if(e[re[i].a] == 0) e[re[i].a] = re[i].b; //mark enemy
		else join(e[re[i].a],re[i].b);  //将敌人的敌人合并
		//同理
		if(e[re[i].b] == 0) e[re[i].b]= re[i].a;
		else join(e[re[i].b],re[i].a);
		
	}
	printf("0\n");
	return 0;
}
