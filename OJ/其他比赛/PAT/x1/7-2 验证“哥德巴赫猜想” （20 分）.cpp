#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
bool check(ll x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i == 0) return 0;
	}
	return 1;
}
int main() {
	ll n;
	scanf("%lld",&n);
	for(ll i=2;i<=n/2+1;i++){
		if(check(i) && check(n-i)){
			printf("%lld = %lld + %lld\n",n,i,n-i);
			break;
		}
	}
	return 0;
}
