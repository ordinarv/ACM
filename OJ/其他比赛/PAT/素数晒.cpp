#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5;
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
	for(int i=0;i<20;i++){
		cout<<pri[i]<<endl;;
		//if(!prime[i]) cout<<i<<endl;
	}/**/
	return 0;
}
