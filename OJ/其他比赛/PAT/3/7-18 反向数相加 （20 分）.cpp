#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;

int main(){
	int t,a,b,ax,bx,ans,ansx;
	cin>>t;
	while(t--){
		cin>>a>>b;
		ax = bx = ans = ansx = 0;
		int flag = 0;
		while(a){
			if(a%10 != 0){
				flag = 1;
			}
			if(flag){
				ax *= 10;
				ax += a%10;
			}
			a/=10;
		}
		while(b){
			if(b%10 != 0){
				flag = 1;
			}
			if(flag){
				bx *= 10;
				bx += b%10;
			}
			b/=10;
		}
		ans = ax + bx;
		while(ans){
			if(ans%10 != 0){
				flag = 1;
			}
			if(flag){
				ansx *= 10;
				ansx += ans%10;
			}
			ans/=10;
		}
		cout<<ansx<<endl;
	}
	return 0;
}
