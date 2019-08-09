#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5;
set<ll> s;
int main() {
	int n;
	ll x;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%lld",&x);
		s.insert(x);
	}
	for(int i=0;i<n;i++){
		scanf("%lld",&x);
		s.insert(x);
	}
	int len = (s.size()+1)/2,cnt=0;
	set<ll>::iterator it=s.begin();
	for(;it!=s.end();it++){
		cnt++;
		if(cnt == len) break;
	}
	printf("%lld\n",*it);
	return 0;
}
