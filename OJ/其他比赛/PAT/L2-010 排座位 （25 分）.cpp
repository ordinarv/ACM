//根据题意能够很明显知道这是到并查集的题目，根据题目中所说朋友的朋友也是朋友，使用并查集把他们并到一个朋友圈中即可
//由于题目中又说道两个人只能有一种关系，故朋友和敌人不能用一个容器来记录，应该分开记录，防止在记录
//人某个人出现既是一个人的朋友也是这个人的敌人
#include<bits/stdc++.h>
using namespace std;
int g[105][105];
int a[105];
void init() { //并查集初始化
	for(int i=1; i!=105; ++i) a[i]=i;
}
int find(int x) { //查找初始朋友
	return x==a[x]?x:a[x]=find(a[x]);
}
void mer(int x,int y) { //合并朋友圈
	x=find(x);
	y=find(y);
	if(x!=y) {
		a[y]=x;
	}
}
int main() {
	init();
	int n,m,k;
	int flag;
	cin>>n>>m>>k;
	int o,p;
	for(int i=0; i!=m; ++i) {
		scanf("%d %d %d",&o,&p,&flag);
		g[o][p]=g[p][o]=flag;
		if(flag==1) mer(o,p);
	}
	int o1,p1;
	for(int i=0; i!=k; ++i) {
		scanf("%d %d",&o,&p);
		o1=find(o);
		p1=find(p);
		if(g[o][p]!=-1&&o1==p1) printf("No problem\n");
		else if(g[o][p]==0) printf("OK\n");
		else if(o1==p1&&g[o][p]==-1) printf("OK but...\n");
		else if(g[o][p]==-1&&o1!=p1) printf("No way\n");
	}
}

