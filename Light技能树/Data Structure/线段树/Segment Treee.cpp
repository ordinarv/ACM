#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn = 1e5+5;
int n;
int ans[maxn*4];

inline int ls(int p){return p<<1;}	 //left son
inline int rs(int p){return p<<1|1;} //right son

void push_up_sum(int p){
	t[p] = t[lc(p)] + t[rc(p)];
}
void push_up_min(int p){
	t[p] = min(t[lc(p)],t[rc(p)]);
}
void build(ll p,ll l,ll r){
	if(l == r){ans[p] = a[l];return ;}//only leaf node assign
	ll mid = (l+r)>>1;
	bulid(ls(p),l,mid);
	bulid(rs(p),mid+1,r);
	push_up(p);
}
inline void f(ll p,ll l,ll r,ll k)
inline void update(ll nl,ll nr,ll l,ll r,ll p,ll k){
	if(nl <= l && r <= nr){
		ans[p] += k*(r-l+1);
		tag[p] += k;
		return  ;
	}
	push_down(p,l,r);
	ll mid = (l+r)>>1;
	if(nl <= mid) update(nl,nr,l,mid,ls(p),k);
	if(nr> mid) update(nl,nr,mid+1,r,rs(p),k);
	push_up(p);
}
ll query(ll q_x,ll q_y,ll l,ll r,ll p){
	ll res = 0;
	if(q_x<=l && r<=q_y) return ans[p];
	ll mid = (l+r)>>1;
	push_down(p,l,r);
	if(q_x <= mid) res += query(q_x,q_y,l,mid,ls(p));
	if(q_y > mid) res += query(q_x,q_y,mid+1,r,rs(p));
	return res;
}
int main(){
	int n;
	return 0;
}
