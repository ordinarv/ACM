#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
const int mx = 1e5;
int a[maxn],pos[maxn],n,m;
int sum[maxn<<2];

void push_up(int k1){sum[k1] = max(sum[k1<<1],sum[k1<<1|1]);}
void build(int k1,int l,int r){
	if(l==r) {sum[k1] = pos[l];return ;}
	int m = (l+r)>>1;
	build(k1<<1,l,m);
	build(k1<<1|1,m+1,r);
	push_up(k1);
}
void update(int k1,int l,int r,int p){
	if(l==r){sum[k1] += 1e5+1;return ;}
	int m = (l+r)>>1;
	if(p<=m) update(k1<<1,l,m,p);
	else update(k1<<1|1,m+1,r,p);
	push_up(k1);
}
int query(int k1,int l,int r,int k,int R){
	if(l==r) return l;
	int m = (l+r)>>1;
	int f = 0;
	if(k<=m && sum[k1<<1]>R){
		f = query(k1<<1,l,m,k,R);
		if(f) return f;
	}
	if(sum[k1<<1|1]>R) return query(k1<<1|1,m+1,r,k,R);
	return 0;	
}

int main(){
	freopen("in.txt","r",stdin);
	int t,op,t1,t2,k,r,tmp;
	scanf("%d",&t);
	while(t--){
		int lastans = 0,ans=0;
		scanf("%d%d",&n,&m);		
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			pos[a[i]] = i;
		}
		n++;
		a[n] = n;
		pos[n] = n;
		
		build(1,1,n);
		while(m--){
			scanf("%d",&op);
			if(op==1){
				scanf("%d",&t1);
				t1 ^= lastans;
				update(1,1,n,t1);
			}
			else {
				scanf("%d%d",&t1,&t2);
				r = t1 ^ lastans;
				k = t2 ^ lastans;
				
				ans = query(1,1,n,k,r);
				printf("%d\n",ans);
				lastans  = ans;
			}
		}
	}
	
	return 0;
}
