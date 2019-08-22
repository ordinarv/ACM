#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const int maxn = 2e5+5;
const double eps = 1e-10;
const int inf = 1<<30;
int h[maxn];
ll pre[maxn];
int n,q,mx=100000;
int tot,root[maxn];
struct node {
	int ls,rs,cnt;
	ll sum;
} T[maxn*40];
void update(int l,int r,int &x,int y,int pos) {
	T[++tot] = T[y],T[tot].sum+=pos,T[tot].cnt++;
	x = tot;
	if(l == r) return ;
	int m = (l+r)>>1;
	if(pos<=m) update(l,m,T[x].ls,T[y].ls,pos);
	else update(m+1,r,T[x].rs,T[y].rs,pos);
}
ll query_sum(int l,int r,int x,int y,int pos) {
	if(pos<=l) return T[y].sum-T[x].sum;
	int m = (l+r)>>1;
	ll ans = 0;
	if(pos<=m) ans += query_sum(l,m,T[x].ls,T[y].ls,pos);
	ans += query_sum(m+1,r,T[x].rs,T[y].rs,pos);
	return ans;
}
int query_cnt(int l,int r,int x,int y,int pos) {
	if(pos<=l) return T[y].cnt-T[x].cnt;
	int m = (l+r)>>1;
	int ans = 0;
	if(pos<=m) ans += query_cnt(l,m,T[x].ls,T[y].ls,pos);
	ans += query_cnt(m+1,r,T[x].rs,T[y].rs,pos);
	return ans;
}

void work() {
	int L,R,x,y;
	scanf("%d%d%d%d",&L,&R,&x,&y);
	ld p = 1.0 * (pre[R]-pre[L-1])*x/y;
	ld l = 0,r = mx,mid,now;
	int k,cnt;
	ll sum;
	for(int i=1; i<=100; i++) {
		mid = (l+r)*0.5;
		k = ceil(mid);
		
		cnt = query_cnt(1,mx,root[L-1],root[R],k);
		sum = query_sum(1,mx,root[L-1],root[R],k);
		now = sum*1.0 - 1.0*cnt*mid;
		if(now >= p) l = mid;
		else r = mid;
	}
	printf("%.10Lf\n",l);


}
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif
	scanf("%d%d",&n,&q);
	for(int i=1; i<=n; i++) {
		scanf("%d",&h[i]),pre[i] = pre[i-1] + h[i];
		//mx = max(mx,h[i]);
	}
	for(int i=1; i<=n; i++)
		update(1,mx,root[i],root[i-1],h[i]);
	while(q--) {
			work();
		//int l,r,x,y;
		//scanf("%d%d%d%d",&l,&r,&x,&y);
		//cout << "qs" << query_sum(1,mx,root[x-1],root[y],x) << endl;
		//cout << "qc" << query_cnt(1,mx,root[x-1],root[y],x) << endl;
	}
	return 0;
}
