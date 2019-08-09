#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int main(){
	ll a;
	cin>>a;
	if(a<0) a = -a;
	ll ans = 0;
	while(a){
		int temp = a%10;
		ans+=(temp*temp);
		a/=10;
	}
	cout<<"sum="<<ans<<endl;
	return 0;
}
