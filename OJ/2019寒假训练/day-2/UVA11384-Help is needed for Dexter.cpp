#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

int main() {
	int n;
	while(~scanf("%d",&n)){
		int temp,ans = 0;
		while(n){
			n/=2;
			ans++;			
		}
		cout<<ans<<endl;
	}
	return 0;
}
