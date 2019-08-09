#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;

int main() {
	int n;
	cin>>n;
	double sum =0;
	ll x = 1;
	if(n == 1) printf("%.8lf\n",2.0);
	else if(n == 2) printf("%.8lf\n",2.5);
	else if(n>=15) printf("2.71828183\n");
	else {
		for(int i=1;i<=n+1;i++){
		sum+=(1.0/x);
		x *= i;
		//printf("%.8lf\n",sum);
	}
	printf("%.8lf\n",sum);
	}
	
	return 0;
}
