#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxd = 7;
int digit[maxd];
int dp[maxd][2];

int dfs(int pos,bool if6,bool limit){
	if(pos == 0) return 1;
	if(!limit && dp[pos][if6]) return dp[pos][if6];
	int cnt = 0,up_bound = (limit?digit[pos]:9);
	
	for(int i=0;i<=up_bound;++i){
		if(if6 && i == 2) continue;
		if(i == 4) continue;
		cnt+=dfs(pos-1,i==6,limit && i == up_bound);
	}
	if(!limit) dp[pos][if6] = cnt;
	return cnt;
} 

int cal(int num){
	int k = 0;
	while(num){
		digit[++k] = num%10;
		num/=10;
	}
	return dfs(k,false,true);
}

int main(){
	int n,m;
	while(scanf("%d%d",&n,&m) && n + m){
		printf("%d\n",cal(m) - cal(n-1));//[0~m] - [0~n)
	}
	
	return 0;
}
