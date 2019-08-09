#include<iostream>
#include<cstdio>
using namespace std;
typedef long long ll; 
int main() {
	ll n,cnt,ans;
	int t;
	scanf("%d",&t);
	while(t--) {
		scanf("%lld",&n);
		cnt=0;
		n--;
		while(n) {
			if(n&1)cnt++;
			n>>=1;
		}
		ans = 1;
		/* ÷¥Í¥Œ∑Ω 
		for(int i=1;i<=cnt;i++)
			ans *= 2;
		*/
		printf("%lld\n",ans<<cnt);
	}
	return 0;
}

