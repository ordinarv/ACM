#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e4+5;
const int INF = 0x3f3f3f3f;
int cs[maxn];
struct unt {
	int name,cnt;
} a[maxn];
bool cmp(unt a,unt b) {
	if(a.cnt<b.cnt) {
		return 1;
	}
	if(a.cnt == b.cnt && a.name <b.name){
		return 1;
	}
	return 0;
}
int main() {
	int T,n,m,t,name;
	scanf("%d%d",&n,&m);
	memset(cs,0,sizeof(cs));
	for(int i = 1; i<=n; i++) {
		scanf("%d",&t);
		for(int j= 0; j<t; j++) {
			scanf("%d",&name);
			cs[name]++;
		}
	}
	int cnt = 0;
	for(int i =1 ; i<=m; i++) {
		a[cnt].name = i;
		a[cnt++].cnt =  cs[i];
	}
	sort(a,a+m,cmp);
	for(int i =0 ; i<m; i++) {
		printf("%d %d\n",a[i].name,a[i].cnt);
	}

	return 0;
}
