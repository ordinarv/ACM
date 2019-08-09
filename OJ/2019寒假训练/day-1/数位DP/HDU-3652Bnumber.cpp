#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 15;
int digit[maxn];
ll dp[maxn][maxn][3];
ll dfs(int pos,int mod = 0,int sta = 0,bool limit = 1){
	if(pos == 0) return (!mod && sta == 2);
	if(!limit && dp[pos][mod][sta]) return dp[pos][mod][sta];
	int ans = 0,up = (limit?digit[pos]:9),modt,stat;
	for(int i=0;i<=up;i++){
		modt = (mod*10+i)%13;
		stat = sta;
		if(sta == 0 && i == 1) stat = 1;
		if(sta == 1 && i != 1) stat = 0;
		if(sta == 1 && i == 3) stat = 2;
		ans+=dfs(pos-1,modt,stat,limit && i==up);			
	}	
	if(!limit) dp[pos][mod][sta] = ans;
	return ans;
}

ll cal(ll num){
	int k=0;
	while(num){
		digit[++k]=num%10;
		num/=10;		
	}
	return dfs(k);
}
int main(){
	ll n;
	while(cin>>n){
		cout<<cal(n)<<endl;
 	}
	return 0;
}
