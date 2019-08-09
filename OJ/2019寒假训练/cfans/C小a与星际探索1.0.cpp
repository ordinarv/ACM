#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 3e3+5;
const int INF = 0x3f3f3f3f;
int dp[maxn],a[maxn];
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
	for(int i=0;i<=n;i++) dp[i] = -1;
	
	dp[1] = a[1];
	for(int i=2;i<=n;i++){
		if(a[i] >= a[1]) continue;
		for(int j=i-1;j>=1;j--){
			if(a[j] > a[i]){
				dp[i] = max(dp[i],dp[j] ^ a[i]);
			}
		}
	}
	printf("%d\n",dp[n]);
	return 0;
}
