#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn = 1e5;
ll tb[maxn];
void table(){
	tb[0] = 0;
	int cnt = 1;
	for(ll i=1;i<maxn;i++){
		tb[cnt++] += (i*i + tb[cnt-1]);
		if(tb[cnt-1] > 1e18) break;
		cout<<tb[cnt-1]<<' ';
	}
}
int main(){
	table();
	return 0;
} 
