#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+5;
ll f[maxn];
int main() {
	ll n;
	cin>>n;
	f[1] = f[2] = 1;

	for(int i=3; i<=25; i++) {
		f[i] = f[i-1]+f[i-2];
	}

	for(int i=1; i<=25; i++) {
		if(f[i] >= n) {
			cout<<i<<endl;
			break;
		}
	}


	return 0;
}
