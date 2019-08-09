#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 62;
double f[maxn];
int main(){
	f[1] = f[2] = 1;
	for(int i=3;i<maxn;i++){
		f[i] = f[i-1] + f[i-2];
	}
	int n;
	scanf("%d",&n);
	printf("%.0lf\n",f[n]);
	return 0;
}
