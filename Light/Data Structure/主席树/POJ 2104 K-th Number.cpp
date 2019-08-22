#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
const int inf = 1<<30;

int n,m,a[maxn];
int root[maxn],tot,sz;
struct node{
	int l,r,sum;
}T[maxn*40];
vector<int> v;
int getid(int x){return lower_bound(v.begin(),v.end(),x)-v.begin()+1;}

void update(int &x,int y,int l,int r,int p){
	x = ++tot,T[x] = T[y],T[x].sum++;
	if(l==r) return;		
	int m = (l+r)>>1;
	if(p<=m) update(T[x].l,T[y].l,l,m,p);
	else update(T[x].r,T[y].r,m+1,r,p);
}
int query(int x,int y,int l,int r,int k){
	if(l==r) return l;
	int m = (l+r)>>1;
	int sum = T[T[y].l].sum-T[T[x].l].sum;
	if(k<=sum) return query(T[x].l,T[y].l,l,m,k);
	else return query(T[x].r,T[y].r,m+1,r,k-sum);
}
void work(){
	int l,r,k;
	scanf("%d%d%d",&l,&r,&k);
	printf("%d\n",v[query(root[l-1],root[r],1,sz,k)-1]);
	
}
int main() {
	//freopen("in.txt","r",stdin);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]),v.push_back(a[i]);
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	sz = v.size();
	for(int i=1;i<=n;i++){
		update(root[i],root[i-1],1,sz,getid(a[i]));
	}
	while(m--){
		work();
	}
	return 0;
}
