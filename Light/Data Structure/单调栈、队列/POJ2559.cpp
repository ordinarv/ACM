/*
	µ¥µ÷Õ» 
*/
#include<cstdio>
#include<stack>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

stack<int> sta;
int a[maxn];
void gmax(ll& a,ll b){
	if(a < b) a = b;
}
int main() {
	int n;
	while(scanf("%d",&n)&&n) {
		while(!sta.empty()) sta.pop();
		ll ans = -1;
		for(int i=0; i<n; i++) {
			scanf("%d",&a[i]);
		}
		a[n] = 0;
		for(int i=0;i<=n;i++){
			if(sta.empty() || a[sta.top()] < a[i]) sta.push(i);
			else{
				int tmp = sta.top();sta.pop();
				gmax(ans,1LL*a[tmp]*(sta.empty()?i:i-sta.top()-1));
				i--;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
