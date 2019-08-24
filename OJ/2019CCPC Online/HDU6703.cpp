#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
const int mx = 1e5;
int a[maxn],n,m;
bool vis[maxn];
set<int> s;

int root[maxn],tot;
struct node{
	int l,r,sum;
}T[maxn*30];
void update(int &x,int y,int l,int r,int p){
	x = ++tot,T[x] = T[y],T[x].sum++;
	if(l==r) return;
	int m = (l+r)>>1;
	if(p<=m) update(T[x].l,T[y].l,l,m,p);
	else update(T[x].r,T[y].r,m+1,r,p); 
}
int query(int x,int y,int l,int r,int p){ //>=k
	if(l==r) return l;
	int m = (l+r)>>1;
	int sum = T[T[y].l].sum - T[T[x].l].sum;
	int f = 0;
	if(p<=m && sum){
		f = query(T[x].l,T[y].l,l,m,p);	
		if(f) return f;	
	}
	
	sum = T[T[y].r].sum - T[T[x].r].sum;
	if(r>=p && sum) return query(T[x].r,T[y].r,m+1,r,p);
	return 0;
}
void init(){
	tot = 0;
	s.clear();
	memset(vis,0,sizeof(vis));
	memset(T,0,sizeof(T));
}

int main(){
	//freopen("in.txt","r",stdin);
	int t,op,t1,t2,k,r,tmp;
	scanf("%d",&t);
	while(t--){
		int lastans = 0,ans=0;
		init();
		scanf("%d%d",&n,&m);		
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
		}
		root[0] = 0;
		for(int i=1;i<=n;i++){
			update(root[i],root[i-1],1,mx,a[i]);
		}
		while(m--){
			scanf("%d",&op);
			if(op==1){
				scanf("%d",&t1);
				t1 ^= lastans;
				if(vis[t1]) continue;
				vis[t1] =  1;
				s.insert(a[t1]);
			}
			else {
				scanf("%d%d",&t1,&t2);
				r = t1 ^ lastans;
				k = t2 ^ lastans;

				ans = n+1;
				set<int>::iterator it  = s.lower_bound(k);
				if(it != s.end()) ans = *it;
				if(r < n){
					tmp = query(root[r],root[n],1,mx,k);
					if(tmp != 0) ans = min(ans,tmp);
				}
				printf("%d\n",ans);
				lastans  = ans;
			}
		}
	}
	
	return 0;
}
