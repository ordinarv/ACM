#include<bits/stdc++.h>
using namespace std;

const int maxn = 2e5+4;
struct node{
	int left,right,val;
}node[4000400];
int father[maxn];

int a[maxn];

void BuildTree(int i,int left,int right){
	node[i].left = left;
	node[i].right = right;
	node[i].val = 0;
	if(left == right){
		father[left] = i;
		return;
	}
	BuildTree(i<<1,left,(left+right)/2);
	BuildTree((i<<1)+1,(left+right)/2+1,right);
}
void update(int ri){
	if(ri == 1) return ;
	int fi = ri/2;
	int a = node[fi<<1].val;
	int b = node[(fi<<1)+1].val;
	node[fi].val = a>b?a:b;
	update(ri/2);
}
int res;
void query(int i,int l,int r){
	if(node[i].left == l && node[i].right == r){
		res = max(node[i].val,res);
		return ;
	}
	i = i<<1;
	if(l <= node[i].right){
		if(r <= node[i].right) query(i,l,r);
		else query(i,l,node[i].right);
	}
	i++;
	if(r >= node[i].left){
		if(l >= node[i].left) query(i,l,r);
		else query(i,node[i].left,r);
	}
}
int main(){
	int n,m,g;
	while(~scanf("%d%d",&n,&m)){
		BuildTree(1,1,n);
		for(int i=1;i<=n;i++){
			scanf("%d",&g);
			node[father[i]].val = g;
			update(father[i]);
		}
		while(m--){
			char op;
			int l,r;
			getchar();
			scanf("%c%d%d",&op,&l,&r);
			//printf("in=%c%d%d=\n",op,l,r);
			if(op == 'Q') res = 0,query(1,l,r),printf("%d\n",res);
			else node[father[l]].val = r,update(father[l]);
		}
	}
	return 0;
}
