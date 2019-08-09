#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int maxn = 2e5+5;
const int mod  = 998244353;
int main(){
	std::ios::sync_with_stdio(false); 
	std::cin.tie(0);
	ll n;cin>>n;
	ll ans = 3;
	string s;cin>>s; 
	char pri;
	//if(s[0] == s[1]) ans++;
	//if(s[n-1] == s[n-2]) ans++;
	int i,j;
	int flag = 1;
	for( i=1;i<n;i++){
		if(s[i-1] == s[i]) ans++;
		else
			break;
	}
	
	for(j=n-2;j>=0;j--){
		if(s[j+1] == s[j]) ans++;
		else break;
	}
	ans = ans % mod;
	char c;
	if(s[0] == s[n-1]){
		//if(i == j) 
		//	ans++;
		ans= (ans + (i)*(n-j-1))%mod;
	}
	
	cout<<ans%mod<<endl;
	return 0;
}
