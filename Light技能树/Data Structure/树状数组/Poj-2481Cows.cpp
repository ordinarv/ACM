#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn = 1e5+5;
struct unt{
	int x,y,pos;
}a[maxn];
int c[maxn],res[maxn];
bool cmp(unt a,unt b){
	if(a.x == b.x) return a.y > b.y;
	return a.x < b.x;
}
int lowbit(int x){
	return x&(-x);
}
void upd(int i,int val){
	for(;i<maxn;i+=lowbit(i)){
		c[i] += val;
	}
}
int query(int i){
	int sum = 0;
	for(;i>0;i-=lowbit(i)){
		sum += c[i];
	}
	return sum;
}
int main(){
	int n;
	while(~scanf("%d",&n) && n){
		for(int i=1;i<=n;i++){
			scanf("%d%d",&a[i].x,&a[i].y);
			a[i].pos = i;
		}
		sort(a+1,a+n+1,cmp);
		memset(res,0,sizeof(res));
		memset(c,0,sizeof(c));
		upd(a[1].y+1,1);
		for(int i=2;i<=n;i++){
			upd(a[i].y+1,1);
			if(a[i].x == a[i-1].x && a[i].y==a[i-1].y) res[a[i].pos] = res[a[i-1].pos];
			else res[a[i].pos] += i - query(a[i].y+1);
			//cout<<a[i].y+1<<" "<<query(a[i].y+1)<<endl;
		}
		for(int i=1;i<n;i++){
			printf("%d ",res[i]);
		}
		printf("%d\n",res[n]);
	}
	
	return 0;
}
/*
	3
	1 3
	1 2
	5 9
*/



