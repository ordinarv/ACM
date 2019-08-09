#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int a[maxn],m[maxn];;
int main() {
	int n;
	while(cin>>n) {
		int cur = 100000000;
		for(int i=1; i<=n; i++) {
			cin>>a[i];
		}
		int ans = -100000000;
		for(int i=n-1;i>=1;i--){  //预处理一下 
			if(cur>a[i+1]) cur = a[i+1];
			m[i] = cur;
		}
		for(int i=1; i<n; i++) {
			ans = max(a[i]-m[i],ans);
		}
		cout<<ans<<endl;
	}
	return 0;
}
