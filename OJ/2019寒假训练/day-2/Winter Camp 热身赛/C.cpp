#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5;
int a[maxn];
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int ans = 0,i=1;
	for(; i<n; i++) {
		if(abs(a[i] - a[i-1]) <= m) a[i-1] = 0;
	}
	for(int i=0; i<n; i++) {
		if(a[i]) ans++;
	}
	printf("%d\n",ans);
	return 0;
}
