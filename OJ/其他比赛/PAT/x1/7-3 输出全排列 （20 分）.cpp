#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e2+10;
int a[maxn];
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		a[i] = i+1;
	do {
		for(int i=0; i<n; i++)
			printf("%d",a[i]);
		printf("\n");
	} while (next_permutation(a,a+n));
	return 0;
}
