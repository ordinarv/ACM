#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
const int mx = 2e5+5;

int n,m,a[maxn];
int root[maxn],tot;
vector<int> v;
struct node{
	int l,r,cnt;
}T[maxn*40];
struct Query{
	int l,r,h;
}q[maxn];
int getid(int x){
	return lower_bound(v.begin(),v.end(),x)-v.begin()+1;
}	

void update(int k1,int l,int r,int &x,int y,int p){
	x = ++tot,T[x] = T[y],T[x].cnt++;
	if(l==r) return ;
	int m = (l+r)>>1;
	if(p<=m) update(k1<<1,l,m,T[x].l,T[y].l,p);
	else update(k1<<1|1,m+1,r,T[x].r,T[y].r,p);
}		

int query(int l,int r,int x,int y,int p){
	if(r<=p) return T[y].cnt - T[x].cnt;
	int m = (l+r)>>1;
	int res = 0;
	res += query(l,m,T[x].l,T[y].l,p);
	if(p>m)res += query(m+1,r,T[x].r,T[y].r,p);
	return res;
}
void init(){
	v.clear();
	tot = 0;
}
int main(){
//	freopen("in.txt","r",stdin);
	int t;
	scanf("%d",&t);
	for(int cas=1;cas<=t;cas++){
		printf("Case %d:\n",cas);
		init();
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]),v.push_back(a[i]);
		
		for(int i=1;i<=m;i++) {
			scanf("%d%d%d",&q[i].l,&q[i].r,&q[i].h);
			q[i].l++;q[i].r++;
			v.push_back(q[i].h);
		}
		sort(v.begin(),v.end());
		v.erase(unique(v.begin(),v.end()),v.end());
		for(int i=1;i<=n;i++)
			update(1,1,mx,root[i],root[i-1],getid(a[i]));	
		for(int i=1;i<=m;i++){
			printf("%d\n",query(1,mx,root[q[i].l-1],root[q[i].r],getid(q[i].h)));	
		}		
	}
	return 0;
}
