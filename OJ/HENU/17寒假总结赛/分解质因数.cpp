#include<iostream>
#include<cstring>

using namespace std;
const int maxn=50000;
int prime[maxn],pri[maxn];
void isprime() {
	memset(prime,0,sizeof(prime));
	int cnt=0;
	prime[0]=prime[1]=1;
	for(int i=2; i<=maxn; i++) {
		if(!prime[i]) pri[cnt++]=i;
		for(int j=0; j<cnt&&i*pri[j]<=maxn; j++) {
			prime[pri[j]*i]=1;
			if(!(i%pri[j])) break;
		}
	}
}
int main() {
	int a,b,dict[maxn];
	isprime();
	while(cin>>a>>b) {
		for(int i=a; i<=b; i++) {
			int cnt2=0;
			cout<<i<<'=';
			if(!prime[i]) cout<<i;
			else {
				for(int pri1=2,x=i;; pri1++) {
					int flag=0;
					while(!prime[pri1]&&x%pri1==0) {
						dict[cnt2++]=pri1;
						x/=pri1;
						if(!prime[x]) {
							dict[cnt2++]=x;
							flag=1;
							break;
						}
					}
					if(flag) break;
				}	
				for(int i=0;i<cnt2-1;i++){
					cout<<dict[i]<<'*'; 
				}
				cout<<dict[cnt2-1];
			}
			cout<<endl;
		}
	}
	return 0;
}
