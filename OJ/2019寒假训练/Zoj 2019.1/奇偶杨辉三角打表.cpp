#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+5;
ll sum[maxn];
void init(){
	int a[maxn][maxn];
	a[1][1] = 1;
	sum[1] = 1;
	for(ll i=2;i<=100;i++){
		for(int j=1;j<=i;j++){
			if(j==1 || j==i) a[i][j] = 1;
			else a[i][j] =(a[i-1][j-1] + a[i-1][j])%2;
			sum[i] += a[i][j];
		}
		printf("i=%3d  %6d\n",i,sum[i]);
	
	}
} 
int main() {
	init();
	return 0;
}
