#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 2e4+10;
int a[maxn],b[maxn];
int main() {
	int n,m;
	while(cin>>n>>m && n+m) {
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<m; i++)
			cin>>b[i];
		if(n>m) {
			cout<<"Loowater is doomed!"<<endl;
			continue;
		}
		sort(a,a+n);
		sort(b,b+m);
		
		/*双指针扫描 写法不统一，如何判断结束、匹配成功 未成功都是问题*/
		
		int ans = 0,flag,flag2=1;
		int i,j=0;
		for(i=0; i<m; i++) {
			if(b[i] >= a[j]){
				ans += b[i];
				if(++j == n) break;
			}
		}
		if(j == n) cout<<ans<<endl;
		else cout<<"Loowater is doomed!"<<endl;
	}
	return 0;
}
