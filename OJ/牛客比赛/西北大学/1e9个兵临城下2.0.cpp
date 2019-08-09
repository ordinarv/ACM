#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn = 1e9;
int main(){
	ll T,a,b,c;
	scanf("%lld",&T);
	while(T--){
		scanf("%lld%lld%lld",&a,&b,&c);
		ll ans = maxn/a + maxn/b + maxn/c -(maxn/(a*b)+maxn/(a*c)+maxn/(c*b)) + maxn/(a*c*b);
		printf("%lld\n",maxn - ans);
	}
	return 0;
} 
