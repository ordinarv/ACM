#include<stdio.h>
const int maxn = 1e5+5;
struct unt{
	int l,r,id;
}c[maxn];
int lowbit(int x){return x&(-x);}
void udp(int i){
	for(;i<=maxn;i+=lowbit(i)){
		c[i] += val;
	}
}
int query(int i){
	int ans = 0;
	for(;i>0;i-=lowbit(i))
		ans += c[i];
	return ans;
}
int main(){
	int n,m;
	while(~scanf("%d",&n) && n){
		memset(c,0,sizeof(c));
		for(int i=1;i<=n;i++){
			scanf("%d%d",&c[i].r,&c[i].l);
			c[i].id = i;
		}
		
	}
	
}
