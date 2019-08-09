#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 5e5+5;
ll t[maxn],b[maxn];
struct unt{
	int val,id;
}a[maxn];
bool cmp(unt a,unt b){
	if(a.val == b.val) return a.id < b.id;
	return a.val < b.val;
}
int lowbit(int x){return x & -x;}
void modify(int i,int val){
	for(;i<=maxn;i+=lowbit(i)){
		t[i] += val;
	}
}
ll sum(int i){
	ll res = 0;
	for(;i>0;i-=lowbit(i)){
		res += t[i];
	}
	return res;
}
int main(){
	int n;
	ll ans = 0;
	scanf("%d",&n);
	memset(t,0,sizeof(t));
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i].val);
		a[i].id = i;
	}		
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		b[a[i].id] = i; 
	}
	
	for(int i=1;i<=n;i++){
		modify(b[i],1);
		ans += (i-sum(b[i]));
		//printf("%d ",ans);
		
	}
	printf("%lld\n",ans);
	return 0;
} 
