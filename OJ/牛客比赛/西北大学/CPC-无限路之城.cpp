#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e9;
int main(){
	ll T,n,m;
	scanf("%lld",&T);
	while(T--){
		scanf("%lld%lld",&n,&m);
		printf("%lld\n",n*(n-1)/2 - m);
	}
	return 0;
} 
