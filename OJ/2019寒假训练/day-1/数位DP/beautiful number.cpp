#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int digit[20];
ll dp[20][2];
ll dfs(int len,bool if,bool limit){
	
}

ll cal(ll num){
	int k = 0;
	while(num){
		digit[++k] = num%10;
		num/=10;
	} 
	return dfs(k,false,true);
}
int main(){
	int T;
	cin>>T;
	while(T--){
		cin>>a>>b;
	}
	return 0;
}
