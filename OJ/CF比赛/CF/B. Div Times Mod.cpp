#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e9+5;
int main() {
	int n,k;
	int x,ans=-1;
	cin>>n>>k;
	if(n>10000)
		for(int i=1000000; i<maxn; i++) {
			if((i/k) * (i%k) == n) {
				ans = i;
				break;
			}
		}
	else
		for(int i=1; i<maxn; i++) {
			if((i/k) * (i%k) == n) {
				ans = i;
				break;
			}
		}
	cout<<ans<<endl;
	return 0;
}

