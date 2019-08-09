#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int a[100][100];
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			if(j==1 || j==i) a[i][j] = 1;
			else a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
