#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int digit[20];
int dp[20][20];
int dfs(int pos,int last = -10,bool limit = 1){
	if(pos == 0) return 1;
	if(!limit && dp[pos][last] && last >= 0) return dp[pos][last];
	int up = (limit?digit[pos]:9),ans=0,next_last;
	for(int i=0;i<=up;i++){
		if(abs(last - i) < 2)continue;
		next_last = i;
		if(i == 0 && last == -10) next_last = last;
		ans += dfs(pos-1,next_last,limit&&i==up);
	}
	if(last >= 0 && !limit) dp[pos][last] = ans; // last >= 0
	return ans;
}
int cal(int num){
	int k = 0;
	while(num){
		digit[++k] = num%10;
		num/=10; 
	}
	return dfs(k);
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",cal(b) - cal(a-1));
	return 0;
}
