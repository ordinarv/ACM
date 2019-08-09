#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int digit[20];//数位20
ll dp[20][2];
//if4 当前位 值是否为4
//limit 上界!!!
// 从高位开始搜索，上一位是否是4， 
ll dfs(int len,bool if4,bool limit)//优化模拟正常数数 
{
	if(len == 0) return 1;//个位是1，但其下一位就是0了. 
	if(!limit && dp[len][if4]) return dp[len][if4]; 
	ll cnt = 0,up_bound = (limit?digit[len]:9);
	
	for(int i =0 ;i<=up_bound;++i){
		if(if4 && i == 9) continue;//减掉49这一只 
		
		cnt+=dfs(len-1,i==4,limit&&i==up_bound);//上次是这次也是才是界限		
	}
	if(!limit) dp[len][if4] = cnt;//不是上界即完整状态，下次再该位上可以直接统计 
	return cnt;
} 
ll cal(ll num){ //把num按位分解，并记录到digit数组下表从1-max. 
	int k = 0;
	while(num){
		digit[++k] = num%10;
		num/=10;
	} 
	return dfs(k,false,true);// 从最高位开始就是上界啊 
}
int main(){
	int T;
	ll n; 
	scanf("%d",&T);
	while(T--){
		scanf("%lld",&n);
		printf("%lld\n",n+1-cal(n));
	}
	return 0;
} 
