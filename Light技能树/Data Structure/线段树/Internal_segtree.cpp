#include<bits/stdc++.h>
using namespace std;

typedef long long;
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
 
struct node{
	int l,r;
	ll add,sum;
	int mid(){
		return (r+l)>>1;
	}
}seg[maxn<<2];
void pushup(int rt){
	seg[rt].sum = seg[rt<<1].sum + seg[rt<<1|1].sum; // =(rt<<1)+1
}
void pushdown(int rt){ //把laze tag 打进去 
	if(seg[rt].add){//first,check if is?  
		seg[rt<<1].add += seg[rt].add;
		seg[rt<<1|1].add += seg[rt].add;
		seg[rt<<1].sum += seg[rt].add * (m-(m>>1));
		seg[rt<<1|1].sum += seg[rt].add * (m>>1);
		seg[rt].add = 0;		
	}
}
void build(int l,int r, int rt){
	seg[rt].l = l;
	seg[rt].r = r;
	seg[rt].add = 0;
	if(l == r){
		scanf("%lld",&seg[rt].sum);
		return ;
	}
	int m = seg[rt].mid();
	build(lson);
	build(rson);
	pushup(rt);//rt = lson + rson
}
void update(int c,int l,int r,int rt){
	if(seg[rt].l==l && seg[rt].r==r){ interval is complete equal
		seg[rt].add += c;
		seg[rt].sum += (ll)c * (r-l+1);
		return ;
	}
	if(seg[rt].l == seg[rt].r) return ;
	pushdown(rt,seg[rt].r-seg[rt].l+1);  // update lazy
	int m = seg[rt].mid();
	if(r <= m) update(c,l,r,rt<<1);
	else if(l > m) update(c,l,r,rt<<1|1);
	else {
		update(c,l,m,rt<<1);
		update(c,m+1,r,rt<<1|1);
		pushup(rt);	
	}
}
ll query(int l,int r,int rt){
	if(l==seg[rt].l && r==seg[rt].r) return seg[rt].sum;
	pushdown(rt,seg[rt].r-seg[rt].l+1);
	int m = seg[rt].mid();
	ll res = 0;
	if(r <= m) res += query(l,r,rt<<1);
	else if(l > m) res += query(l,r,rt<<1|1);
	else {
		res += query(l,m,rt<<1);
		res += query(m+1,r,rt<<1|1);
	}
	return res;
}
int main(){
	int n;
	
	return 0;
} 
