#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+10;
int a[maxn],vis[maxn];
int main() {
	int n;
	cin>>n;

	int cnt = 0,res = n;
	while(1) {
		if(res == 1) break;
		for(int i=1; i<=n; i++) {
			if(!vis[i]) {
				cnt++;
				if(cnt%3 == 0) vis[i] = 1,res--;
			}
		}
	}
	for(int i=1; i<=n; i++) {
		if(vis[i] == 0) {
			cout<<i<<endl;
			break;
		}
	}
	return 0;

}
