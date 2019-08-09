#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 50;//!!
const int mod = 1e7+7;
int digit[maxn];
ll dp[maxn][2][maxn][maxn],ans[maxn],n; 
ll pw(ll a,ll b){
	ll res = 1 ;
	while(b){
		res = res * (b&1?a:1) % mod; 
		a = a*a%mod;
		b>>=1;
	}
	return res;
}
ll dfs(){
	
}

ll cal(ll num){  //binary
	int k = 0;
	while(num){
		digit[++k] = num&1;
		num>>=1;
	}
	for(int i=1;i<=maxn;i++){
		memset(dp,0,sizeof(dp));
		ans[i] = dfs(k,1,0,i);
	}
	ll res = 1;
	for(int i=1;i<=50;i++){
		res = res * pw(i,ans[i]) % mod;
	}  
	return res;
}
int main(){
	scanf("%lld",&n);
	printf("%lld\n",cal(n));
	return 0;
}
