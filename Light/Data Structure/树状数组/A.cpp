#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
const int maxn=1010;
const int MAX_N=1010;
int m;
struct node{
	int x,y;
}trk[maxn*maxn];
ll tre[maxn];
bool cmp(node a,node b){
	if(a.x==b.x)	return a.y<b.y;
	return a.x<b.x;
}
ll lowbit(ll x){
	return x&-x;
}
void update(ll i,int val){
	for(;i<=MAX_N ;i+=lowbit(i))
		tre[i]+=val;
	
}
ll sum(ll i){
	ll ans=0;
	for(;i>0;i-=lowbit(i))
		ans+=tre[i];
	return ans;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int T=1;T<=t;T++){
		int n,k;
		ll ans=0;
		memset(tre,0,sizeof(tre));
		scanf("%d%d%d",&n,&m,&k);
		for(int i=1;i<=k;i++){
			scanf("%d%d",&trk[i].x,&trk[i].y);
		}
		sort(trk+1,trk+k+1,cmp);
		for(int i=1;i<=k;i++){
			update(trk[i].y,1);
			//printf("sum(m)=%lld  sumi=%lld\n",sum(m),sum(trk[i].y));
			ans+=(sum(m)-sum(trk[i].y));
		}
		printf("Test case %d: %lld\n",T,ans);
		
	}
	return 0;
} 
