#include<iostream>
#include<cstring>
using namespace std;
const int maxn=10000005;
int pri[maxn];
bool prime[maxn];
void isprime(){
	int cnt=0;
	memset(prime,0,sizeof(prime));
	prime[1]=prime[0]=1;
	
	for(int i=2;i<maxn;++i){
		if(!prime[i]) pri[cnt++]=i;
		for(int j=0;j<cnt&&i*pri[j]<=maxn;j++){
			prime[pri[j]*i]=1;
			if(!(i%pri[j])) break;
		}
	}
}
int main()
{
	int n,m,x;
	cin>>n>>m;
	isprime();
	for(int i=0;i<m;i++) {
		cin>>x;
		if(prime[x]) cout<<"No";
		else cout<<"Yes";
		cout<<endl;
	}		
	return 0;
}
