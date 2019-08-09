#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
ll f(ll n){
	if(n==3)	return 2;
	if(n==2)	return 2;
	if(n<=1)	return 1;
	ll i;
	for(i=1;i<n;i=i<<1);//结束之后，i是上界。
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   cout<<"up = "<<i<<endl;
	if(n-(i>>1)>(i>>2))//后半部分   界限！ 
		return f(n-(i>>1))*2;
	else//前半部分 
		return f(n-(i>>2));
}
int main() {
	int n;
	cin>>n;
	cout<<f(n)<<endl;
	return 0;
}
