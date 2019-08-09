#include<iostream>
#include<cstring>
using namespace std;
const int maxn=100000005;
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
			if(!(i%pri[j])) break;//this very important
		}
	}
}
bool is(int n){
	int x=n,m=0;
	while(x){
		m=(m*10)+x%10;
		x/=10;
	}
	if(m==n) return true;
	else return false;
}
int main(){
	isprime();
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(!prime[i])
			if(is(i)) cout<<i<<endl;
	}	
	return 0;
}
