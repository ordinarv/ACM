#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+10;
struct unt{
	ll x,y;
}m[maxn];
int main(){
	int n;char c;
	ll x,y,z,gcd;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>c>>y;
		gcd = __gcd(x,y);
		m[i].x = x/gcd;
		m[i].y = y/gcd;
	}
	unt ans = m[0];
	for(int i=1;i<n;i++){
		ans.x = m[i].x*ans.y + ans.x*m[i].y;
		ans.y = m[i].y*ans.y;
		gcd = __gcd(ans.x,ans.y);
		ans.x /= gcd;
		ans.y /= gcd;
	}
	
	x = ans.x / ans.y;
	ans.x %= ans.y;
	gcd = __gcd(ans.x,ans.y);
	ans.x/=gcd;ans.y/=gcd;
	if(x) cout<<x<<' ';
	if(ans.x){
		if(ans.y < 0) cout<<'-'<<ans.x<<'/'<<-ans.y;
		else cout<<ans.x<<'/'<<ans.y;
	}
	cout<<endl;
	return 0;
}
/*
2
-1/2 -4/7
*/
