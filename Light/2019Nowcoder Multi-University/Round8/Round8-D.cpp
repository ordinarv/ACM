#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 3e5+5;
const double eps = 1e-10;
const int inf = 1<<30;
int n,m,h,q;
void gmax(int& a,int b){
	if(a<b) a=b;
}
void gmin(int& a,int b){
	if(a>b) a=b;
}
struct BIT{
	int c[maxn];
	inline int lowbit(int x){return x&(-x);}
	inline int gid(int x,int y,int z){
		return x*m*h+y*h+z;
	}
	void clear(){
		for(int i=0;i<maxn;i++) c[i] = -inf;
	}
	void update(int x,int y,int z,int val){
		for(int i=x;i<=n;i+=lowbit(i)){
			for(int j=y;j<=m;j+=lowbit(j)){
				for(int k=z;k<=h;k+=lowbit(k)){
					gmax(c[gid(i,j,k)],val);
				}
			}
		}
	}
	int query(int x,int y,int z){
		int res = -inf;
		for(int i=x;i>0;i-=lowbit(i)){
			for(int j=y;j>0;j-=lowbit(j)){
				for(int k=z;k>0;k-=lowbit(k)){
					gmax(res,c[gid(i,j,k)]);
				}
			}
		}
		return res;
	}
}bit[8];
int main() {
	for(int i=0;i<8;i++) bit[i].clear();
	scanf("%d%d%d%d",&n,&m,&h,&q);
	int op,x,y,z,cnt=0;
	while(q--){
		scanf("%d%d%d%d",&op,&x,&y,&z);
		if(op == 1){
			for(int i=0;i<8;i++){
				int v = (i&1?-x:x) + ((i>>1)&1?-y:y) + ((i>>2)&1?-z:z);
				bit[i].update(i&1?n+1-x:x,(i>>1)&1?m+1-y:y,(i>>2)&1?h+1-z:z,v);				
			}
		}
		else{
			int ans = inf;
			for(int i=0;i<8;i++){
				int v = (i&1?-x:x) + ((i>>1)&1?-y:y) + ((i>>2)&1?-z:z);
				gmin(ans,v-bit[i].query(i&1?n+1-x:x,(i>>1)&1?m+1-y:y,(i>>2)&1?h+1-z:z));
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
