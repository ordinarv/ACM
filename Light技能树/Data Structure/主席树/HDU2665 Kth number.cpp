#include<cstdio>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
const int maxn = 1e5+5;
int cnt,root[maxn],a[maxn];
//root[i] 第i课线段树根节点的位置 
struct node{
	int l,r;//左右儿子结点编号，因为不满足2*rt规律 
	int sum;//代表(l,r)区间上和是多少 
}T[maxn*20];//根据题目计算一下 
vector<int> v;
int getid(int x){
	return lower_bound(v.begin(),v.end(),x)-v.begin()+1;
}
//update(1,n,root[i],root[i-1],getid(a[i]));
void update(int l,int r,int &x,int y,int p){
	T[++cnt] = T[y];//左右son和sum都先连接 
	T[cnt].sum++;
	x = cnt;
	if(l==r) return ;
	int m = (l+r)>>1;
	if(m>=p) update(l,m,T[x].l,T[y].l,p);
	else update(m+1,r,T[x].r,T[y].r,p);
}
//query(1,n,root[l],root[r],k); 
int query(int l,int r,int x,int y,int k){
	if(l == r) return l;
	int m = (l+r)>>1;
	int sum = T[T[y].l].sum - T[T[x].l].sum;
	if(k<=sum) return query(l,m,T[x].l,T[y].l,k);
	else return query(m+1,r,T[x].r,T[y].r,k-sum);
}

int main(){
	int n,m,x,y,k,t;
	scanf("%d",&t);
	while(t--){
		v.clear();
		cnt=0;
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++) {
			scanf("%d",&a[i]);
			v.push_back(a[i]);
		}
		sort(v.begin(),v.end());
		v.erase(unique(v.begin(),v.end()),v.end());//离散化
		
		for(int i=1;i<=n;i++) 
			update(1,n,root[i],root[i-1],getid(a[i]));
		for(int i=1;i<=m;i++) {	
			scanf("%d%d%d",&x,&y,&k);
			//k = (y-x+1)-k+1;	
			printf("%d\n",v[query(1,n,root[x-1],root[y],k)-1]);
		}	
	}
	return 0;
}

