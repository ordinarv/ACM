#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxn = 5e5+5;
struct unt{
	int pos,val;
}a[maxn];
int c[maxn],v[maxn];
int n;

bool cmp(unt a,unt b){
	return a.val<b.val;
}
int lowbit(int x){
	return x&(-x);
}
void upd(int i,int val){
	for(;i<=maxn;i+=lowbit(i)){
		c[i] += val;
	}
}
int	query(int i){
	int sum = 0 ;
	for(;i>0;i-=lowbit(i))
		sum += c[i];
	return sum;	
}
int main(){
	ll ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i].val);
		a[i].pos = i;
	}
	sort(a+1,a+1+n,cmp);
	int pos = 1;
	for(int i=1;i<=n;i++,pos++){//
		v[a[i].pos] = pos;
		if(a[i].val == a[i+1].val){
			v[a[i+1].pos] = pos;
			i+=2;
			while(a[i].val == a[i-1].val){
				v[a[i].pos] = pos;
				i++;
			}
			i--;
		}				
	}
	for(int i=1;i<=n;i++){
		upd(v[i],1);
		ans += i-query(v[i]);
	}
	printf("%lld\n",ans);
	return 0;
} 
/*
5
5 3 3 3 1
*/
