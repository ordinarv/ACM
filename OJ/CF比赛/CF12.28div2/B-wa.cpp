#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int maxn = 2e5+5;
const int mod  = 998244353;
int main(){
	std::ios::sync_with_stdio(false); 
	std::cin.tie(0);
	int n;cin>>n;
	ll ans = 0;
	string s;cin>>s;
	int l=0,r=n-1; 
	char pri;
	int flag;
	for(int i=0;i<n;i++){
		for(int j= i;j<n;j++){
			int k;flag = 1;
			for(k = 0;k<n;k++)
			{
				if(k>=i &&k <= j) continue;
				if(flag){
					pri = s[k];
					flag = 0;
				}
				else {
					if(pri !=s[k]) break;
				}
			}
			if(k == n) ans++;
		}
	}
	cout<<ans%mod<<endl;
	return 0;
}
