#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e13+5;
ll minl(int n) {
	int len = n/2,len2 = n/2;
	ll ans = 0;
	while(len--) {
		ans*=10;
		ans+=4;
	}
	while(len2--) {
		ans*=10;
		ans+=7;
	}
	return ans;
}
ll maxl(int n) {
	int len = n/2, len2 = n/2;
	ll ans = 0;
	while(len--) {
		ans*=10;
		ans+=7;
	}
	while(len2--) {
		ans*=10;
		ans+=4;
	}
	return ans;
}
ll cnt,ans,n;
bool check(ll n) {
	int d[15],cnt = 0;
	while(n) {
		d[cnt++] = n%10;
		n/=10;
		if(d[cnt-1] != 4 && d[cnt-1] != 7) return 0;
	}
	int x=0,y=0;
	for(int i = 0; i<cnt; i++) {
		if(d[i] == 4) x++;
		else if(d[i] == 7) y++;
	}
	if(x == y) {
		return 1;
	}
	return 0;
}
void dfs(int step,ll sum) {
	if(step == cnt && sum >= n && check(sum)) {
		ans = min(sum,ans);
	}
	if(step == cnt) return ;
	sum *=10;
	step++;
	ll tem=sum+4,tem1=sum+7;
	dfs(step,tem);
	dfs(step,tem1);
}
int main() {
	ans = INF;
	cin>>n;
	cnt = 0;
	int d[15],dd = 1;
	int tem = n;
	while(tem) {
		cnt++;
		d[dd++] = tem%10;
		tem/=10;
	}

	if(cnt%2 || n>maxl(cnt)) cout<<minl(cnt+2)<<endl;
	else {
		//if(cnt>=10) cout<<"4444477777"<<endl;
		//else {
			dfs(0,0);
			cout<<ans<<endl;
	//	}
	}
	return 0;
}
