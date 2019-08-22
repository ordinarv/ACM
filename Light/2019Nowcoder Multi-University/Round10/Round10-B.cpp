a
b
ab
bab	
abbab
bababbab
abbabbababbab
bababbababbabbababbab
abbabbababbabbababbababbabbababbab
bababbababbabbababbababbabbababbabbababbababbabbababbab
abbabbababbabbababbababbabbababbabbababbababbabbababbababbabbababbabbababbababbabbababbab
bababbababbabbababbababbabbababbabbababbababbabbababbababbabbababbabbababbababbabbababbabbababbababbabbababbababbabbababbabbababbababbabbababbab
#include<bits/stdc++.h>
using namespace std;
typedef long long;
const int maxn = 500;
const ll mod = 1e12+10;
int n,k;
ll len[maxn];
void init(){
	len[1] = 6;
	len[2] = 7;
	for(int i=3;i<=maxn;i++){
		len[i] = (len[i-2] + len[i-2])%mod;
	}
}
void work(){
	cin>>n>>k;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		work();
	}
	return 0;
}



