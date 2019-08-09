#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;//2e5+7
const ll INF = 0x3f3f3f3f3f3f3f3f;
int main() {
	ll a,b,c,p1,p2,q1,q2,ans = 1e18;//1e12 not
	scanf("%lld%lld%lld%lld%lld%lld%lld",&a,&b,&c,&p1,&p2,&q1,&q2);

	for(int y=-maxn;y<=maxn;y++){
		ll x = (c-b*y)/a;
		if(a*x+b*y!=c) continue;
		ll temp = p2 * x*x + p1*x+q2 * y*y + q1*y;
		ans = min(temp,ans);
	}
	if(ans == 1e18) printf("Kuon\n");
	else printf("%lld\n",ans);
	
	return 0;
}
