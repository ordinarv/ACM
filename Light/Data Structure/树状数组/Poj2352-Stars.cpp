#include<stdio.h>
#include<string>
#include<string.h>
const int maxn = 32005;
const int INF = 15010;

int lel[maxn],c[maxn];
int lowbit(int x) {
	return x&(-x);
}
void upd(int i,int val) {
	for(; i<=maxn; i+=lowbit(i)) {
		c[i] += val;
	}
}
int query(int i) {
	int ans = 0 ;
	for(; i>0; i-=lowbit(i)) {
		ans += c[i];
	}
	return ans;
}
int main() {
	int n,x,y;
	while(~scanf("%d",&n)) {
		memset(lel,0,sizeof(lel));
		memset(c,0,sizeof(c));
		for(int i=1; i<=n; i++) {
			scanf("%d%d",&x,&y);
			++x;
			lel[query(x)]++;
			upd(x,1);
		}
		for(int i=0;i<n;i++){
			printf("%d\n",lel[i]);
		}
	}
	return 0;
}
