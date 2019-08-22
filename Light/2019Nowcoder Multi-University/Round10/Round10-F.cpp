#include<bits/stdc++.h>
using namespace std;
const int maxn = 3e5+5;
const int inf = 1e5;

int n,m;
vector<int> v[maxn];
int num[maxn],seg[maxn];
void build(int k1,int l,int r){
	if(l==r) {seg[k1] = num[l]+num[l+m]+num[l+2*m];return ;}
	
	int m = (l+r)>>1;
	build(k1<<1,l,m);
	build(k1<<1|1,m+1,r);
	seg[k1] = max(seg[k1<<1],seg[k1<<1|1]); 
}
void update(int k1,int l,int r,int p,int v){
	if(l==r) {seg[k1] += v;return ;}
	int m = (l+r)>>1;
	if(p<=m) update(k1<<1,l,m,p,v);
	else update(k1<<1|1,m+1,r,p,v);
	seg[k1] = max(seg[k1<<1],seg[k1<<1|1]);
}

void work(){
	int ans = 0,len;
	for(int i=0;i<=inf;i++){
		int tmp = v[i].size()+v[i+m].size()+v[i+2*m].size();
		len = v[i].size();
		for(int j=0;j<len;j++){
			int p = v[i][j];
			update(1,0,inf,p,-1);
			if(p-m>=0)update(1,0,inf,p-m,-1);
			if(p-2*m>=0)update(1,0,inf,p-2*m,-1);
		}
		len = v[i+m].size();
		for(int j=0;j<len;j++){
			int p = v[i+m][j];
			update(1,0,inf,p,-1);
			if(p-m>=0)update(1,0,inf,p-m,-1);
			if(p-2*m>=0)update(1,0,inf,p-2*m,-1);
		}
		len = v[i+2*m].size();
		for(int j=0;j<len;j++){
			int p = v[i+2*m][j];
			update(1,0,inf,p,-1);
			if(p-m>=0)update(1,0,inf,p-m,-1);
			if(p-2*m>=0)update(1,0,inf,p-2*m,-1);
		}
		//if(ans<tmp+seg[1]) cout<<tmp<<'+'<<seg[1]<<endl;
		ans = max(ans,tmp+seg[1]);
		
		len = v[i].size();
		for(int j=0;j<len;j++){
			int p = v[i][j];
			update(1,0,inf,p,1);
			if(p-m>=0)update(1,0,inf,p-m,1);
			if(p-2*m>=0)update(1,0,inf,p-2*m,1);
		}
		len = v[i+m].size();
		for(int j=0;j<len;j++){
			int p = v[i+m][j];
			update(1,0,inf,p,1);
			if(p-m>=0)update(1,0,inf,p-m,1);
			if(p-2*m>=0)update(1,0,inf,p-2*m,1);
		}
		len = v[i+2*m].size();
		for(int j=0;j<len;j++){
			int p = v[i+2*m][j];
			update(1,0,inf,p,1);
			if(p-m>=0)update(1,0,inf,p-m,1);
			if(p-2*m>=0)update(1,0,inf,p-2*m,1);
		}
	}
	printf("%d\n",ans);
}
int main(){
	int x,y;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&x,&y);
		v[x].push_back(y);
		num[y]++;
	}
	build(1,0,inf);
	work();
	return 0;
}
