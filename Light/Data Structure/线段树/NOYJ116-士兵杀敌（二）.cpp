#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn = 1e6+5;
struct node {
	int left,right;
	int val;
} node[maxn*4];
int father[maxn];
void BuildTree(int i,int left,int right) {
	node[i].left = left;
	node[i].right = right;
	node[i].val = 0;
	if(left == right) {
		father[left] = i;
		return;
	}
	BuildTree(i<<1,left,(left+right)/2);
	BuildTree((i<<1)+1,(left+right)/2+1,right);
}
void update(int ri) {
	if(ri == 1) return ;
	int fi = ri/2;
	int a = node[fi<<1].val;
	int b = node[(fi<<1)+1].val;
	node[fi].val = a+b;
	update(ri/2);
}
int sum;
void query(int i,int l,int r) {
	if(l == node[i].left && r == node[i].right) {
		sum += node[i].val;
		return ;
	}
	i = i<<1;
	if(l <= node[i].right) {
		if( r <= node[i].right) query(i,l,r);
		else query(i,l,node[i].right);
	}
	i++;
	if(r >= node[i].left) {
		if(l >=node[i].left) query(i,l,r);
		else query(i,node[i].left,r);
	}
}
int main() {
	ios::sync_with_stdio(false);
	int n,m,g;
	BuildTree(1,1,n);
	//scanf("%d%d",&n,&m);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		//scanf("%d",&g);
		cin>>g;
		node[father[i]].val = g;
		update(father[i]);
	}
	while(m--) {
		//char op[10];
		int a,b;
		string op;
		//scanf("%s",op);
		//printf("in=%s\n",op);
		cin>>op>>a>>b;
		//scanf("%d%d",&a,&b);
		if(op[0] == 'Q') {
			sum = 0;
			query(1,a,b);
			cout<<sum<<endl;
			//printf("%lld\n",sum);
		} else {
			node[father[a]].val += b;
			update(father[a]);
		}
	}
	return 0;
}
