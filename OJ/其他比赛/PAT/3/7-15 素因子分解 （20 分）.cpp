#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
ll n;
vector<int> p;
int pri[maxn];
bool prime[maxn];
void init() {
	int cnt=0;
	memset(prime,0,sizeof(prime));
	prime[1]=prime[0]=1;

	for(int i=2; i<maxn; ++i) {
		if(!prime[i]) pri[cnt++]=i;
		for(int j=0; j<cnt&&i*pri[j]<=maxn; j++) {
			prime[pri[j]*i]=1;
			if(!(i%pri[j])) break;
		}
	}
}
int main() {
	init();
	cin>>n;
	if(n==1) {
		cout<<"1=1"<<endl;
		return 0;
	}
	cout<<n<<"=";
	for(ll i=2; i<=n; i++) {
		int cnt = 0;
		if(prime[i]) continue;
		while( !(n%i)) {
			cnt++;
			n/=i;
		}
		if(cnt) {
			if(cnt==1) {
				if(n == 1)cout<<i<<endl;
				else cout<<i<<"*";
			} else if(cnt>=2) {
				if(n == 1 )cout<<i<<"^"<<cnt<<endl;
				else cout<<i<<"^"<<cnt<<"*";
			}
		}
	}

	return 0;
}
