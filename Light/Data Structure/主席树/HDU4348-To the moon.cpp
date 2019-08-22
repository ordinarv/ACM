#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
const int inf = 1<<30;
int tot,root[maxn];
int n,m,a[maxn];
struct node{
	int l,r;
	ll sum,lazy;
}T[maxn*40];
void build(int &k1,int l,int r){
	k1=++tot;
	if(l==r){T[k1].sum = a[l];return;}
	int m = (l+r)>>1;
	build(T[k1].l,l,m);
	build(T[k1].r,m+1,r);
	T[k1].sum = T[T[k1].l].sum + T[T[k1].r].sum;
}
void update(int &x,int y,int l,int r,int L,int R,int v){
	x = ++tot,T[x] = T[y];
	T[x].sum += 1ll*(R-L+1)*v;
	if(L==l&&r==R){T[x].lazy += v;return;}
	int m=(l+r)>>1;
	if(R<=m) update(T[x].l,T[y].l,l,m,L,R,v);
	else if(L>m) update(T[x].r,T[y].r,m+1,r,L,R,v);
	else {
		update(T[x].l,T[y].l,l,m,L,m,v);
		update(T[x].r,T[y].r,m+1,r,m+1,R,v);	
	}
}
ll query(int k1,int l,int r,int L,int R){
	if(L<=l && r<=R) return T[k1].sum;
	ll ans = T[k1].lazy*(R-L+1);
	int m = (l+r)>>1;
	if(R<=m) ans += query(T[k1].l,l,m,L,R);
	else if(L>m) ans += query(T[k1].r,m+1,r,L,R);
	else {
		ans += query(T[k1].l,l,m,L,m);
		ans += query(T[k1].r,m+1,r,m+1,R);
	}
	return ans;
}
void init(){
	//memset(root,0,sizeof(root));
	//memset(T,0,sizeof(T));
	tot=0;
} 
int main() {
//	cout<<(sizeof(T)+sizeof(a)+sizeof(root))/1024<<endl;
//	freopen("in.txt","r",stdin);
	while(scanf("%d%d",&n,&m)!=EOF){
		//cout<<"begin"<<endl;
		init();
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		build(root[0],1,n);
		char op[10];
		int l,r,x,cur=0;
		while(m--){
			scanf("%s",op);
			if(op[0]=='Q'){
				scanf("%d%d",&l,&r);
				printf("%lld\n",query(root[cur],1,n,l,r));
			}
			else if(op[0]=='C'){
				scanf("%d%d%d",&l,&r,&x);
				update(root[cur+1],root[cur],1,n,l,r,x);
				cur++;
			}
			else if(op[0]=='H'){
				scanf("%d%d%d",&l,&r,&x);
				printf("%lld\n",query(root[x],1,n,l,r));
			}
			else {
				scanf("%d",&x);
				//tot = root[x];
				cur = x;
			}
		}
	}
	return 0;
}
