#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 10003, INF = 1e9 + 10;
void chmin(int &a, int b) {
	a = (a < b ? a : b);
}
void chmax(int &a, int b) {
	a = (a > b ? a : b);
}
int sqr(int x) {
	return x * x;
}
inline int read() {
	char c = getchar();
	int x = 0, f = 1;
	while(c < '0' || c > '9') {
		if(c == '-') f = -1;
		c = getchar();
	}
	while(c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}
int N, mx;
bool f[MAXN][MAXN];
struct Node {
	int id, val;
	bool operator < (const Node &rhs) const {
		return val > rhs.val;
	}
} a[MAXN];
signed main() {

	N = read();
	for(int i = 1; i <= N; i++) a[i].id = i, a[i].val = read();
	mx = 6001;
	sort(a + 1, a + N + 1);
	for(int i = 1, flag = 1; i <= N; i++) {
		if(a[i].id == 1) {
			flag = 0, f[i][a[i].val] = 1;
			continue;
		}
		if(flag) continue;
		if(a[i].id == N) {
			int k = i - 1;
			while(k && a[i].val == a[k].val) k--;
			if(!k) break;
			for(int j = mx; j >= 0; j--) {
				f[i][j] |= f[k][j ^ a[i].val];
				if(f[i][j]) {
					printf("%d", j);
					return 0;
				}
			}
			break;
		} else if(a[i].val == a[i - 1].val) {
			memcpy(f[i], f[i - 1], sizeof(f[i]));
		} else {
			for(int j = 0; j <= mx; j++)
				f[i][j] |= (f[i - 1][j ^ a[i].val] | f[i - 1][j]);
		}
	}
	puts("-1");
	return 0;
}
