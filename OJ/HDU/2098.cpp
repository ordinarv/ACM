#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=100000;
int prime[maxn],pri[maxn];
void isprime() {
	memset(prime,0,sizeof(prime));
	prime[0]=prime[1]=1;
	int cnt=0;
	for(int i=2; i<=maxn; i++) {
		if(!prime[i])
			pri[cnt++]=i;
		for(int j=0; j<cnt&&i*pri[j]<=maxn; j++) {
			prime[pri[j]*i]=1;
			if(!(i%pri[j])) break;
		}
	}
}
int main() {
	isprime();
	int x;
	while(cin>>x&&x) {
		int ans=0;
		for(int i=1; i<x/2; i++) {
			if(!prime[i]&&!prime[x-i]) {
				ans++;
			}
				
		}
		cout<<ans<<endl;
	}
	return 0;
}
