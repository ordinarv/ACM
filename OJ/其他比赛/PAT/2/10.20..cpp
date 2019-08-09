#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 30+10;
int n,p=-1,cnt,sum,s[maxn];
void dfs (int i) {
	if (sum == n) {
		cnt++;
		printf("%d=", n);
		int k;
		for (k=0; k<p; k++) printf("%d+", s[k]);
		if (cnt%4 == 0 || s[p] == n) printf("%d\n", s[p]);
		else printf("%d;", s[p]);
		return;
	}
	if (sum > n) return;
	for (int j=i; j<=n; j++) {
		s[++p] = j;
		sum += j;
		dfs(j);
		sum -= j;
		p --;
	}
}
int main () {
	scanf("%d", &n);
	dfs(1);
	return 0;
}

